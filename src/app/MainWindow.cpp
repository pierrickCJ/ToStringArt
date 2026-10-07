#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connexion des boutons définis dans le .ui

    connect(ui->load_image_pButton, &QPushButton::clicked,
            this, &MainWindow::on_load_image_clicked);

    connect(ui->solve_pButton, &QPushButton::clicked,
            this, &MainWindow::on_save_solve_clicked);

    connect(ui->save_solution_pButton, &QPushButton::clicked,
            this, &MainWindow::on_save_solve_clicked);
}
MainWindow::~MainWindow()
{
    delete ui;
}