/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget_background_obj;
    QPushButton *Print_Button;
    QPushButton *Button_save;
    QLabel *label_Text_title;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1150, 950);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(193, 901, 85, 27));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        widget_background_obj = new QWidget(Dialog);
        widget_background_obj->setObjectName(QStringLiteral("widget_background_obj"));
        widget_background_obj->setGeometry(QRect(10, 60, 1120, 828));
        Print_Button = new QPushButton(Dialog);
        Print_Button->setObjectName(QStringLiteral("Print_Button"));
        Print_Button->setGeometry(QRect(102, 901, 85, 27));
        Button_save = new QPushButton(Dialog);
        Button_save->setObjectName(QStringLiteral("Button_save"));
        Button_save->setGeometry(QRect(11, 901, 85, 27));
        label_Text_title = new QLabel(Dialog);
        label_Text_title->setObjectName(QStringLiteral("label_Text_title"));
        label_Text_title->setGeometry(QRect(16, 20, 1111, 20));
        label_Text_title->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        Print_Button->setText(QApplication::translate("Dialog", "Print", 0));
        Button_save->setText(QApplication::translate("Dialog", "Save", 0));
        label_Text_title->setText(QApplication::translate("Dialog", "Standard sheet size 2800*2070 mm", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
