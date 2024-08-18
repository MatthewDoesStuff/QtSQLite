#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include "src/MainWindow.hpp"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow mainWindow;
    return QApplication::exec();
}
