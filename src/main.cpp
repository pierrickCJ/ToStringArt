#include <QApplication>
#include "app/MainWindow.h"
#include "controller/Controller.h"


int main(int argc, char *argv[])
{   QApplication app(argc, argv);
    MainWindow window;
    Controller controller(&window);

    window.show();

    return app.exec();

}