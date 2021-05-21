#ifndef CHILD_WINDOW_H
#define CHILD_WINDOW_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include<QGraphicsScene>
const int Rectangle_Width=20;
const int Rectangle_Height=100;
//extern int ch;
//extern int num;
//extern process p[10],p1[10],temp;

namespace Ui {
class child_window;
}

class child_window : public QDialog
{
    Q_OBJECT

public:
    explicit child_window(QWidget *parent = 0);
    void Sorting_input(int n);
    void Output_calculation(int n);
    ~child_window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::child_window *ui;
    QGraphicsScene *scene;
    QTimer *timer;

    QGraphicsRectItem *rectangle;

};

#endif // CHILD_WINDOW_H
