#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QtGui>
#include <QPushButton>
#include <QBoxLayout>
#include <QSyntaxHighlighter>
#include <QTableWidgetItem>
#include "Dialog.h"

using namespace std;

namespace Ui {
class MainWindow;
}
class Dialog;
class MainWindow : public QMainWindow
{
    Q_OBJECT

    int CountOfWidgets;
    QVector<QWidget *> q_obj_widget_small;

    QTableWidgetItem * ptwi;
    Dialog * dialog_box;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
private slots:
    void on_AddButton_pressed();
    void on_lineEdit_width_textChanged(const QString &arg1);
    void on_lineEdit_height_textEdited(const QString &arg1);
    void on_lineEdit_numbers_textEdited(const QString &arg1);
    void on_run_placing_button_pressed();
};

#endif // MAINWINDOW_H
