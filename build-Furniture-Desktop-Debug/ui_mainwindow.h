/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget_obj_background;
    QScrollBar *scrollBar_obj;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_error;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_width;
    QLineEdit *lineEdit_width;
    QLabel *label_height;
    QLineEdit *lineEdit_height;
    QLabel *label_Numbers;
    QLineEdit *lineEdit_numbers;
    QPushButton *AddButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *run_placing_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(647, 640);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget_obj_background = new QWidget(centralWidget);
        widget_obj_background->setObjectName(QStringLiteral("widget_obj_background"));
        widget_obj_background->setGeometry(QRect(330, 0, 281, 581));
        QFont font;
        font.setUnderline(false);
        widget_obj_background->setFont(font);
        widget_obj_background->setAutoFillBackground(true);
        scrollBar_obj = new QScrollBar(centralWidget);
        scrollBar_obj->setObjectName(QStringLiteral("scrollBar_obj"));
        scrollBar_obj->setGeometry(QRect(610, 1, 20, 581));
        scrollBar_obj->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(4, 9, 316, 200));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_error = new QLabel(layoutWidget);
        label_error->setObjectName(QStringLiteral("label_error"));
        QFont font1;
        font1.setFamily(QStringLiteral("Saab"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_error->setFont(font1);
        label_error->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_error, 0, 0, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_width = new QLabel(groupBox);
        label_width->setObjectName(QStringLiteral("label_width"));

        gridLayout->addWidget(label_width, 0, 0, 1, 1);

        lineEdit_width = new QLineEdit(groupBox);
        lineEdit_width->setObjectName(QStringLiteral("lineEdit_width"));

        gridLayout->addWidget(lineEdit_width, 0, 1, 1, 1);

        label_height = new QLabel(groupBox);
        label_height->setObjectName(QStringLiteral("label_height"));

        gridLayout->addWidget(label_height, 1, 0, 1, 1);

        lineEdit_height = new QLineEdit(groupBox);
        lineEdit_height->setObjectName(QStringLiteral("lineEdit_height"));

        gridLayout->addWidget(lineEdit_height, 1, 1, 1, 1);

        label_Numbers = new QLabel(groupBox);
        label_Numbers->setObjectName(QStringLiteral("label_Numbers"));

        gridLayout->addWidget(label_Numbers, 2, 0, 1, 1);

        lineEdit_numbers = new QLineEdit(groupBox);
        lineEdit_numbers->setObjectName(QStringLiteral("lineEdit_numbers"));

        gridLayout->addWidget(lineEdit_numbers, 2, 1, 1, 1);

        AddButton = new QPushButton(groupBox);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        gridLayout->addWidget(AddButton, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(23, 221, 280, 361));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setMaximumSize(QSize(300, 16777215));
        tableWidget->setBaseSize(QSize(300, 0));
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);

        verticalLayout->addWidget(tableWidget);

        run_placing_button = new QPushButton(widget);
        run_placing_button->setObjectName(QStringLiteral("run_placing_button"));

        verticalLayout->addWidget(run_placing_button);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(lineEdit_width, lineEdit_height);
        QWidget::setTabOrder(lineEdit_height, AddButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_error->setText(QString());
        groupBox->setTitle(QString());
        label_width->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Enter width, sm</p></body></html>", 0));
        lineEdit_width->setText(QString());
        label_height->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Height, sm</p></body></html>", 0));
        label_Numbers->setText(QApplication::translate("MainWindow", "Numbers", 0));
        lineEdit_numbers->setText(QString());
        AddButton->setText(QApplication::translate("MainWindow", "Add Object", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Width", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Height", 0));
        run_placing_button->setText(QApplication::translate("MainWindow", "Run placing ", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
