#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //constants
    MainWindow_Parameters mainwin_par;
    Input_data_Validator  input_data_val;
    dialog_box = NULL;

    //widget for location objects preview
    QPalette pal_widgets_background;
    pal_widgets_background.setColor(ui->widget_obj_background->backgroundRole(), Qt::white);
    ui->widget_obj_background->setPalette(pal_widgets_background);

    //create Frame for it
    QFrame * frame_obj_widget = new QFrame(ui->widget_obj_background);
    frame_obj_widget->setFrameStyle(QFrame::Box | QFrame::Plain);
    frame_obj_widget->setLineWidth(3);
    frame_obj_widget->setGeometry(0,0, 280, 580);

    ui->scrollBar_obj->setDisabled(true);
    ui->scrollBar_obj->setVisible(false);

    ui->tableWidget->horizontalHeader()->resizeSection(0, 126);
    ui->tableWidget->horizontalHeader()->resizeSection(1, 130);
    ui->tableWidget-> resize(QSize(265, 350));
    QStringList q_table_list;
    q_table_list << "Width" << "Height" << "Size";
    ui->tableWidget->setHorizontalHeaderLabels(q_table_list);


    //add buttons
    //widget_layout = new QWidget (this); for buttons

    // Connect button signal to appropriate slot
    //connect(m_button_a, SIGNAL(released()), this, SLOT(handleButtonA()));
    //connect(m_button_b, SIGNAL(released()), this, SLOT(handleButtonB()));
    //connect(m_button_c, SIGNAL(released()), this, SLOT(handleButtonC()));

    //main window
    this->setWindowTitle("Placing elements on the sheet");
    this->setGeometry(mainwin_par.x_top, mainwin_par.y_top, mainwin_par.width,mainwin_par.height);
    this->setAutoFillBackground(true);
    this->setCursor(Qt::OpenHandCursor);
    this->setMaximumSize(mainwin_par.max_width, mainwin_par.max_height);

    ui->lineEdit_width->setValidator(new QIntValidator(1, input_data_val.width, ui->lineEdit_width));
    ui->lineEdit_height->setValidator(new QIntValidator(1, input_data_val.height, ui->lineEdit_height));
    ui->lineEdit_numbers->setValidator(new QIntValidator(1, input_data_val.number, ui->lineEdit_numbers));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_pressed()
{
    cout << "on_AddButton_pressed" << endl;
    if (ui->lineEdit_width->text().toInt() == 0)
        ui->label_error->setText("Enter width size!");
    else if (ui->lineEdit_height->text().toInt() == 0)
        ui->label_error->setText("Enter height size!");
    else if(ui->lineEdit_numbers->text().toInt() == 0)
        ui->label_error->setText("Enter numbers!");
    else
    {
        QString string_num    = ui->lineEdit_numbers->text();
        QString string_width  = ui->lineEdit_width->text();
        QString string_height = ui->lineEdit_height->text();

        int i_num_obj    = string_num.toInt();
        int i_width_obj  = string_width.toInt();
        int i_height_obj = string_height.toInt();
        int par_width    = ui->widget_obj_background->width();

        //set indent for good visualization
        int indent_x     = par_width / 2 - i_width_obj / 2;
        int indent_y     = 5;

        QPalette obj_pal;
        for (int i = 0; i < i_num_obj; ++i)
        {
            QWidget * widg_obj = new QWidget(ui->widget_obj_background);
            int size_s = q_obj_widget_small.size();
            QString str;

            if (size_s)
            {
                indent_y = q_obj_widget_small.last()->height() + q_obj_widget_small.last()->y() + 5;
            }
            str = size_s;
            obj_pal.setColor(widg_obj->backgroundRole(), Qt::blue);
            widg_obj->setPalette(obj_pal);
            widg_obj->setAutoFillBackground(true);
            widg_obj->setGeometry(indent_x, indent_y, i_width_obj, i_height_obj);
            widg_obj->setParent(ui->widget_obj_background);
            widg_obj->show();

            ui->tableWidget->insertRow(0);
            ui->tableWidget->reset();
            ui->tableWidget->setItem(0, 0, new QTableWidgetItem(string_width));
            ui->tableWidget->setItem(0, 1, new QTableWidgetItem(string_height));
            ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);
            q_obj_widget_small.push_back(widg_obj);
        }

        ui->label_error->setText("");
        ui->lineEdit_height->clear();
        ui->lineEdit_width->clear();
        ui->lineEdit_numbers->clear();
    }
}

void MainWindow::on_lineEdit_width_textChanged(const QString &arg1)
{
    int value = arg1.toInt();
    if (value == 0)
        ui->lineEdit_width->clear();
}

void MainWindow::on_lineEdit_height_textEdited(const QString &arg1)
{
    int value = arg1.toInt();
    if (value == 0)
        ui->lineEdit_height->clear();
}

void MainWindow::on_lineEdit_numbers_textEdited(const QString &arg1)
{
    int value = arg1.toInt();
    if (value == 0)
        ui->lineEdit_numbers->clear();
}

void MainWindow::on_run_placing_button_pressed()
{
    //create new window first;
    if (dialog_box)
        delete dialog_box;

    dialog_box = new Dialog(this);
    dialog_box->show();
    dialog_box->DrawData(q_obj_widget_small);
    cout << "on_run_placing_button_pressed" << endl;
}
