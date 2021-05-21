#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>
#include<cstdlib>
#include<queue>
#include<cstdio>
using namespace std;

typedef struct process
{
   int id,at,bt,st,ft,pr,qr;

   float wt,tat;

   QString color;
}process;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Input_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
