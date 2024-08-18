#pragma once

#include <QApplication>

class MainWindow {
public:
    MainWindow();
    ~MainWindow();

private:
    std::unique_ptr<QWidget> window;
};
