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

    Dialog_Box_parameters dbp;
    Dialog_frame_param dfp;
    QPalette obj_pal;
    obj_pal.setColor(ui->widget_background_obj->backgroundRole(), Qt::white);

    ui->widget_background_obj->setPalette(obj_pal);
    ui->widget_background_obj->setAutoFillBackground(true);
    ui->widget_background_obj->setGeometry(dfp.top_indent_x,
                                           dfp.top_indent_y,
                                           dfp.width,
                                           dfp.height);
    ui->widget_background_obj->show();

    //create Frame for Dialog frame
    dialog_frame = new QFrame(ui->widget_background_obj);
    dialog_frame->setParent(ui->widget_background_obj);
    dialog_frame->setFrameStyle(QFrame::Box | QFrame::Plain);
    dialog_frame->setLineWidth(3);
    dialog_frame->setGeometry(0, 0, dfp.width, dfp.height);

    this->setGeometry(0,0, dbp.width, dbp.height);
    this->setMaximumSize(dbp.width, dbp.height);
    this->setAutoFillBackground(true);
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
         Dialog_Box_parameters dbp;
         Dialog_frame_param dfp;
         QPainter painter;
         if (! painter.begin(&printer))
         {
             qWarning("Error open printer");
             return;
         }
         int resolution = printer.paperSize();

         ui->widget_background_obj->setGeometry(dfp.top_indent_x, dfp.top_indent_y, 500, 500);
         dialog_frame->setGeometry(0, 0, 500, 500);
         ui->widget_background_obj->render(&painter);
    }  // end printDialog.exec()

}

 void Dialog::DrawData(QVector<QWidget *> qwidgets_array)
 {
     int size = qwidgets_array.size();
     if (size)
     {
        Dialog_param param;
        QPalette pal;
        int width, height, x, y;
        for (int i = 0; i < size; ++i)
        {
            QWidget * widg = new QWidget(ui->widget_background_obj);
            pal.setColor(widg->backgroundRole(),Qt::blue);
            widg->setPalette(pal);
            width = qwidgets_array[i]->width() * param.enlarge_coef;
            height = qwidgets_array[i]->height() * param.enlarge_coef;
            x = param.top_left_x;
            y = param.top_left_y;
            widg->setGeometry(x, y, width, height);
            widg->setAutoFillBackground(true);
            widg->show();
            dialog_wid_ar.push_back(widg);
        }
    }
 }
