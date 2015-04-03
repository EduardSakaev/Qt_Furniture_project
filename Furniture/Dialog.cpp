#include "Dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    Dialog_Box_parameters dialog_par;
    QPalette obj_pal;
    obj_pal.setColor(ui->widget_background_obj->backgroundRole(), Qt::white);

    ui->widget_background_obj->setPalette(obj_pal);
    ui->widget_background_obj->setAutoFillBackground(true);
    ui->widget_background_obj->show();

    //create Frame for Dialog frame
    QFrame * dialog_frame = new QFrame(ui->widget_background_obj);
    dialog_frame->setFrameStyle(QFrame::Box | QFrame::Plain);
    dialog_frame->setLineWidth(3);
    dialog_frame->setGeometry(dialog_par.x_top, dialog_par.y_top, dialog_par.width, dialog_par.height);
    dialog_frame->setMaximumSize(dialog_par.max_width, dialog_par.max_height);
}
Dialog::~Dialog()
{
    qDebug() << "Remove" << endl;
    cout << "Delete" << endl;
    delete ui;
}

void Dialog::on_Print_Button_pressed()
{
    cout << "On print button click" << endl;
    QPrinter printer;
     QPrintDialog printDialog(&printer, this);
     if (printDialog.exec())
     {
     // объект отрисовки
     QPainter painter;
     // проверка открытия для редактора
     if (! painter.begin(&printer))
     {
         // открытие принтера проверим
         qWarning("Ошибка открытия принтера!");
         return; // Выходим
     }

     // Сообственно все, откроется диалог где указывать принтер нужно, далее рисуем просто наш отчет
     //Теперь давайка отрисуем отчет на этом принтере
    painter.setFont(QFont("Arial", 14)); //шрифт
    painter.setPen(QPen(2)); // толщина линий таблицы
    int y_pdf = 30;
    int WtabPdf=350;
    int X_oneTab = 20;
    int X_twoTab = 370;
    int H_tab = 25;
    painter.drawText(230,y_pdf, "Протокол № ");
    y_pdf +=H_tab;
    QRect rectfont = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
    painter.drawRect(rectfont);
    painter.drawText(rectfont, Qt::AlignLeft ,"Заводской номер");
    rectfont.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
    painter.drawRect(rectfont);
    painter.drawText(rectfont, Qt::AlignLeft ,"m_ui->labelNumberZav_znach->text()");
     // и так далее рисуем
     painter.end(); // завершаем рисование
    }  // end printDialog.exec()

}

void Dialog::Draw()
{
   QPainter painter;

   painter.setFont(QFont("Arial", 14)); //шрифт
   painter.setPen(QPen(2)); // толщина линий таблицы
   int y_pdf = 30;
   int WtabPdf=350;
   int X_oneTab = 20;
   int X_twoTab = 370;
   int H_tab = 25;
   painter.drawText(230,y_pdf, "Протокол № ");
   y_pdf +=H_tab;
   QRect rectfont = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
   painter.drawRect(rectfont);
   painter.drawText(rectfont, Qt::AlignLeft ,"Заводской номер");
   rectfont.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
   painter.drawRect(rectfont);
   painter.drawText(rectfont, Qt::AlignLeft ,"m_ui->labelNumberZav_znach->text()");
    // и так далее рисуем
    painter.end(); // завершаем рисование

    cout << "print it!" << endl;
}
