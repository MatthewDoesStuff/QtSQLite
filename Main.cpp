#include <QApplication>
#include <QHBoxLayout>
#include "src/MainWindow.hpp"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget window;
    MainWindow mainWindow(&window);
    return QApplication::exec();
}
