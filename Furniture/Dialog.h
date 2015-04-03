#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <iostream>
#include <QtGui>
#include "Constants.h"
#include "mainwindow.h"

using namespace std;

class MainWindow;
namespace Ui {
    class Dialog;
}



class Dialog: public QDialog
{
    Q_OBJECT

    /*typedef struct {
        int x;
        int y;
        int w;
        int h;
    }Firure_data;*/

    //QVector<Figure_data> array_figure;
    QVector<QWidget *> dialog_wid_ar;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    Ui::Dialog *ui;
    QFrame * dialog_frame;
public:
    void DrawData(QVector<QWidget *> qwidgets_array);
private slots:
    void on_Print_Button_pressed();
};
#endif // DIALOG_H
