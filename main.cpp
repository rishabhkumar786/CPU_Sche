#include "mainwindow.h"
#include <QApplication>

process p[20],p1[20],temp;
queue<int>q1;
queue<int>q2;
int num;
int ch;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
