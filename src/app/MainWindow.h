#pragma once

#include <QMainWindow>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals : 
    void on_load_image_clicked();
    void on_solve_clicked();
    void on_save_solve_clicked();

private:
    Ui::MainWindow *ui;
};