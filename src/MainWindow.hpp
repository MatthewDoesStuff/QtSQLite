#ifndef QTSQL_MAINWINDOW_HPP
#define QTSQL_MAINWINDOW_HPP

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //QTSQL_MAINWINDOW_HPP
