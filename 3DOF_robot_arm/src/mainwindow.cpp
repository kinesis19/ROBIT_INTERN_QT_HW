#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("©github.com/kinesis19/ROBIT_INTERN_QT_HW/3DOF_robot_arm");
}

MainWindow::~MainWindow()
{
    delete ui;
}

// When Clicked the btn_generate
void MainWindow::on_btn_generate_clicked()
{

    // Getting the value from link1 to link3
    int link1_value = ui->spinBox_1->text().toInt();
    int link2_value = ui->spinBox_2->text().toInt();
    int link3_value = ui->spinBox_3->text().toInt();

    // for Debugging
    qDebug() << "Link1: " << link1_value;
    qDebug() << "Link2: " << link2_value;
    qDebug() << "Link3: " << link3_value;

}
