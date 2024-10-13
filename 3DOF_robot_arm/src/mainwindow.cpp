#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("©github.com/kinesis19/ROBIT_INTERN_QT_HW/3DOF_robot_arm");
    Initializing();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Initializing Variables
void MainWindow::Initializing(){

    // Initializing Values
    link1_value = 0;
    link2_value = 0;
    link3_value = 0;
    joint1_angle = 0;
    joint2_angle = 0;
    joint3_angle = 0;

    // Initializing UI
    ui->spinBox_1->setValue(1);
    ui->spinBox_2->setValue(1);
    ui->spinBox_3->setValue(1);

    ui->lineEdit_1->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));

    ui->horizontalSlider_1->setValue(ui->horizontalSlider_1->minimum());
    ui->horizontalSlider_2->setValue(ui->horizontalSlider_2->minimum());
    ui->horizontalSlider_3->setValue(ui->horizontalSlider_3->minimum());
}

// Handles the click event for generating the robot arm
void MainWindow::on_btn_generate_clicked()
{

    // Getting the values from link1 to link3
    link1_value = ui->spinBox_1->text().toInt();
    link2_value = ui->spinBox_2->text().toInt();
    link3_value = ui->spinBox_3->text().toInt();

    // for Debugging
    qDebug() << "Link1: " << link1_value;
    qDebug() << "Link2: " << link2_value;
    qDebug() << "Link3: " << link3_value;
}

// Updates the link values when the slider_1 is adjusted
void MainWindow::on_horizontalSlider_1_valueChanged(int value)
{
    joint1_angle = ui->horizontalSlider_1->value();
    ui->lineEdit_1->setText(QString::number(MainWindow::joint1_angle));
}

// Updates the link values when the slider_2 is adjusted
void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    joint2_angle = ui->horizontalSlider_2->value();
    ui->lineEdit_2->setText(QString::number(MainWindow::joint2_angle));

}

// Updates the link values when the slider_3 is adjusted
void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{

    joint3_angle = ui->horizontalSlider_3->value();
    ui->lineEdit_3->setText(QString::number(MainWindow::joint3_angle));
}

// Handles the click event for reset
void MainWindow::on_btn_reset_clicked()
{
    Initializing();
}

