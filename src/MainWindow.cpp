#include "MainWindow.hpp"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow{parent}, ui{new Ui::MainWindow} {
    ui->setupUi(this);
    parent->show();
}

MainWindow::~MainWindow() {
    delete ui;
}
