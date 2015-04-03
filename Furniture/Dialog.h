#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <iostream>
#include <QtGui>
#include "Constants.h"

using namespace std;

namespace Ui {
    class Dialog;
}
class Dialog: public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void Draw();
private:
    Ui::Dialog *ui;
private slots:
    void on_Print_Button_pressed();
};
#endif // DIALOG_H
