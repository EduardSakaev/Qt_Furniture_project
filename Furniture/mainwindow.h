#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QtGui>
#include <QPushButton>
#include <QBoxLayout>
#include <QSyntaxHighlighter>
#include <QMap>
#include <QTableWidgetItem>

using namespace std;

typedef struct
{
    int x_top           = 600;
    int y_top           = 15;
    int size_x          = 100;
    int size_y          = 100;
    int i_gap           = 15;
    int m_window_size_x = 640;
    int m_window_size_y = 640;
}Widget_Parameters;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    int CountOfWidgets;
    QBoxLayout  *pbxLayout;
    QStack<QWidget *> q_obj_widget_small;
    QStack<QWidget *> q_obj_widget_big;

    QTableWidgetItem * ptwi;

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
};

#endif // MAINWINDOW_H
