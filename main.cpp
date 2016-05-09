#include "mainwindow.h"
#include "start_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Start_widget* start = new Start_widget;
    start->show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
