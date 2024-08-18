#include "MainWindow.hpp"

#include <QWidget>
#include <QScreen>

MainWindow::MainWindow() : window{std::make_unique<QWidget>()}{
    const auto rec = QApplication::primaryScreen()->geometry();
    const auto width=rec.width();
    const auto height=rec.height();

    window->resize(width, height);
    window->setWindowTitle("MainWindow");
    window->show();
}

MainWindow::~MainWindow()=default;