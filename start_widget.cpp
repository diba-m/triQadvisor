#include "start_widget.h"

Start_widget::Start_widget()
{
   QVBoxLayout* startLayout = new QVBoxLayout;
   QHBoxLayout* buttonsLayout = new QHBoxLayout;

   QMenuBar* menuBar = new QMenuBar(0);
   QMenu* fileMenu = menuBar->addMenu(tr("File"));
   fileMenu->addSeparator();
   QAction* exitAction = fileMenu->addAction(tr("Exit"));
   connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
   startLayout->setMenuBar(menuBar);

   for (int i = 0; i < 2; ++i){
           welcomeLabels[i] = new QLabel;
       }
       QFont f("Arial",20,QFont::Bold);
       QPalette* palette = new QPalette;
       palette->setColor(QPalette::WindowText,Qt::blue);
       welcomeLabels[0]->setText(tr("Welcome to TriQAdvisor"));
       welcomeLabels[0]->setFont(f);
       welcomeLabels[0]->setAlignment(Qt::AlignCenter);
       welcomeLabels[0]->setPalette(*palette);

       QFont f1("Arial",15,QFont::Bold);
       QPalette* palette1 = new QPalette;
       palette1->setColor(QPalette::WindowText,Qt::blue);
       welcomeLabels[1]->setText(tr("Pease select an optio below:"));
       welcomeLabels[1]->setFont(f1);
       welcomeLabels[1]->setAlignment(Qt::AlignCenter);
       welcomeLabels[1]->setPalette(*palette1);

       startButtons[0] = new QPushButton(tr("Login"));
       startButtons[1] = new QPushButton(tr("Guest"));
       startButtons[2] = new QPushButton(tr("Register"));
       for (int i = 0; i < 3; ++i){
           buttonsLayout->addWidget(startButtons[i]);
       }

       for (int i = 0; i < 2; ++i){
           startLayout->addWidget(welcomeLabels[i]);
       }

       startLayout->addLayout(buttonsLayout);

       connect(startButtons[0],SIGNAL(clicked()),this,SLOT(login()));
       connect(startButtons[1],SIGNAL(clicked()),this,SLOT(guestlogin()));
       connect(startButtons[2],SIGNAL(clicked()),this,SLOT(userRegister()));


       setFixedSize(600,200);      //lo start widget deve avere una dimensione fissa
       setLayout(startLayout);
}
void Start_widget::userRegister(){
    this->hide();
}

void Start_widget::login(){
    LoginWidget* login = new LoginWidget();
    login -> show();
    this->hide();
}

void Start_widget::guestlogin(){
    Guest_Widget* guestWidget = new Guest_Widget();
    guestWidget->show();
    this->hide();
}
