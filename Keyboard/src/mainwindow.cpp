#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("©github.com/kinesis19/ROBIT_INTERN_QT_HW/Keyboard");

}

MainWindow::~MainWindow()
{
    delete ui;
}
