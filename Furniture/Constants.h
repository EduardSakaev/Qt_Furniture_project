#ifndef CONSTANTS_H
#define CONSTANTS_H

typedef struct
{
    int x_top           = 600;     //left top x window position
    int y_top           = 15;      //left top y window position
    int width           = 640;     //main window min width
    int height          = 640;     //main window min height
    int max_width       = 650;
    int max_height      = 650;
} MainWindow_Parameters;

typedef struct
{
    int x_top           = 0;     //left top x window position
    int y_top           = 0;      //left top y window position
    int width           = 750;     //main window min width
    int height          = 490;     //main window min height
    int max_width       = 800;
    int max_height      = 500;
} Dialog_Box_parameters;

typedef struct
{
    //int width
   // int size_y          = 100;
    //int i_gap           = 15;
} MainWindow_Table_Widget;

typedef struct
{
    int width  = 350;
    int height = 350;
    int number = 100;
}Input_data_Validator;

typedef struct
{

} MainWindow_Widget_;


#endif // CONSTANTS_H
