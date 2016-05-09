#include "loginwidget.h"

LoginWidget::LoginWidget(){
        QVBoxLayout* loginLayout = new QVBoxLayout;

        QMenuBar* menuBar = new QMenuBar(0);
        QMenu* fileMenu = menuBar->addMenu(tr("File"));
        fileMenu->addSeparator();
        QAction* exitAction = fileMenu->addAction(tr("Exit"));
        connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
        loginLayout->setMenuBar(menuBar);

        welcomeLabel = new QLabel;
        for (int i=0; i<2; i++)
        {
            lineEdits[i] = new QLineEdit;
        }
        lineEdits[0]->setPlaceholderText("Username");
        lineEdits[1]->setPlaceholderText("Password");

        lineEdits[1]->setEchoMode(QLineEdit::Password);

        enterButton = new QPushButton(tr("Sign In"));

        QFont f("Arial",20,QFont::Bold);
        QPalette* palette = new QPalette;
        palette->setColor(QPalette::WindowText,Qt::blue);
        welcomeLabel->setText(tr("Welcome to TriQAdvisor"));
        welcomeLabel->setFont(f);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        welcomeLabel->setPalette(*palette);


        loginLayout->addWidget(welcomeLabel);
        loginLayout->addWidget(lineEdits[0]);
        loginLayout->addWidget(lineEdits[1]);
        loginLayout->addWidget(enterButton);

        connect(enterButton,SIGNAL(clicked()),this,SLOT(sendLogin()));

        setFixedSize(400,150);
        setLayout(loginLayout);

}


QString LoginWidget::getUsername() const{
    return lineEdits[0]->text();
}

QString LoginWidget::getPassword() const{
    return lineEdits[1]->text();
}

void LoginWidget::sendLogin(){}
//TO DO: SLOT for "ENTER" button still missing

