#include <QWidget>
#include "app/MainWindow.h"
#include "solver/Solver.h"
#include "model/Model.h"



class Controller
{
    private:
        MainWindow* view;
        Model* model;
        Solver solver;

    public:
        Controller(MainWindow* v);

    void on_load_image(string file_path){model->load_image(file_path);};
    void on_solve_clicked();
    void on_save_solve_clicked();
};