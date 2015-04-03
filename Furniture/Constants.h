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
    int x_top           = 0;       //left top x window position
    int y_top           = 0;       //left top y window position
    int width           = 1150;     //main window min width
    int height          = 950;     //main window min height
    int max_width       = 1150;
    int max_height      = 900;
    int koef_incr       = 3;
} Dialog_Box_parameters;

typedef struct
{
    int top_indent_x = 15;
    int top_indent_y = 60;
    int width        = 1120;
    int height       = 828;
}Dialog_frame_param;



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
    int top_left_x   = 15;
    int top_left_y   = 15;
    int gap          = 5;
    int enlarge_coef = 2;
} Dialog_param;

const double  Format_pix [][2] = { //Format for printing in pixels
                        {2383, 3370},
                        {1683, 2383},
                        {1190, 1683},
                        {841,  1190},
                        {595,   841},
                        {419,   595},
                        {297,   419},
                        {209,   297},
                        {147,   209},
                        {104,   147}
                        };

const int Format_mm [][2]  = { //Format for printing in mm
                        {841, 1189},
                        {594, 841},
                        {420, 594},
                        {297, 420},
                        {210, 297},
                        {148, 210},
                        {105, 148},
                        {74,  105},
                        {52,   74},
                        {37,   52}
                        };




#endif // CONSTANTS_H
