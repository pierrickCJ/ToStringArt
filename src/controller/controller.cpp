#include <app\MainWindow.h>
#include <QApplication>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <controller\Controller.h>
#include <string> 
using namespace std;


Controller::Controller(MainWindow *v)
    : view(v), image(), solver(), printer()
{
    QObject::connect(
        view,
        &MainWindow::on_load_image_clicked,
        [this]() { on_load_image_clicked(); }
    );

    QObject::connect(
        view,
        &MainWindow::on_solve_clicked,
        [this]() { on_solve_clicked(); }
    );

    QObject::connect(
        view,
        &MainWindow::on_save_solve_clicked,
        [this]() { on_save_solve_clicked(); }
    );
}

void Controller::on_load_image_clicked()
{
    
    QString fileName = QFileDialog::getOpenFileName(
        NULL,                       // Parent widget (none here)
        "Select an image",                  // Dialog title
        QDir::homePath(),                 // Initial directory
        "All Files (*.*);;Text Files (*.txt)" // File filters
    );

}

void Controller::on_solve_clicked()
{
    // Calculate/display stress
}

void Controller::on_save_solve_clicked()
{
    // Calculate/display strain
}