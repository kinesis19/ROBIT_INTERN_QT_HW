#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("©github.com/kinesis19/ROBIT_INTERN_QT_HW/3DOF_robot_arm");

    // Create QGraphicsScene and set it to QGraphicsView
    scene = new QGraphicsScene(this); // 'this' refers to MainWindow
    ui->graphicsView->setScene(scene); // Display scene in QGraphicsView

    Initializing();
}

MainWindow::~MainWindow()
{
    delete ui; // Clean up UI
}

// Initialize variables and UI elements
void MainWindow::Initializing(){

    // Initialize link and joint values
    link1_value = 0;
    link2_value = 0;
    link3_value = 0;
    joint1_angle = 0;
    joint2_angle = 0;
    joint3_angle = 0;

    // Set initial UI values
    ui->spinBox_1->setValue(1);
    ui->spinBox_2->setValue(1);
    ui->spinBox_3->setValue(1);

    ui->lineEdit_1->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));

    ui->horizontalSlider_1->setValue(ui->horizontalSlider_1->minimum());
    ui->horizontalSlider_2->setValue(ui->horizontalSlider_2->minimum());
    ui->horizontalSlider_3->setValue(ui->horizontalSlider_3->minimum());

    UpdateScene(); // Update the scene with the initial values
}

// Handles the click event for generating the robot arm
void MainWindow::on_btn_generate_clicked()
{

    // Retrieve values from spin boxes
    link1_value = ui->spinBox_1->text().toInt();
    link2_value = ui->spinBox_2->text().toInt();
    link3_value = ui->spinBox_3->text().toInt();

    UpdateScene();
}

// Updates the link values when the slider_1 is adjusted
void MainWindow::on_horizontalSlider_1_valueChanged(int value)
{
    joint1_angle = ui->horizontalSlider_1->value();
    ui->lineEdit_1->setText(QString::number(MainWindow::joint1_angle));

    UpdateScene();
}

// Updates the link values when the slider_2 is adjusted
void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    joint2_angle = ui->horizontalSlider_2->value();
    ui->lineEdit_2->setText(QString::number(MainWindow::joint2_angle));

    UpdateScene();

}

// Updates the link values when the slider_3 is adjusted
void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{

    joint3_angle = ui->horizontalSlider_3->value();
    ui->lineEdit_3->setText(QString::number(MainWindow::joint3_angle));

    UpdateScene();
}

// Handles the click event for reset
void MainWindow::on_btn_reset_clicked()
{
    Initializing();
    UpdateScene();
}

// Update the robot arm display in QGraphicsScene
void MainWindow::UpdateScene()
{
    scene->clear();  // Clear the current scene

    // Set the origin point (center of the scene)
    QPointF origin(0, 0); // QPointF: 2D coordinates with floating-point precision

    /* Why QPointF?
     * QPoint handles integer coordinates.
     * QPointF supports floating-point coordinates.
     * Since trigonometric functions require floating-point values for accuracy, QPointF is used.
    */

     // Calculate and draw the first link
    QPointF joint1 = CalculateJointPosition(origin, link1_value, joint1_angle);
    scene->addLine(QLineF(origin, joint1), QPen(Qt::white, 3)); // addLine(): Adding Line on the View, QPen: Qt Pen(Using to Painting on the Scene)

     // Calculate and draw the second link
    QPointF joint2 = CalculateJointPosition(joint1, link2_value, joint1_angle + joint2_angle);
    scene->addLine(QLineF(joint1, joint2), QPen(Qt::blue, 3));

     // Calculate and draw the third link
    QPointF joint3 = CalculateJointPosition(joint2, link3_value, joint1_angle + joint2_angle + joint3_angle);
    scene->addLine(QLineF(joint2, joint3), QPen(Qt::red, 3));
}

// Calculate joint position based on link length and angle
QPointF MainWindow::CalculateJointPosition(QPointF start, int length, int angle) {
    double rad = qDegreesToRadians(static_cast<double>(angle));  // Convert angles to radians

    // qreal vs float vs double
    // qreal: A Qt-specific floating-point type (typically a double)
    qreal x = start.x() + length * cos(rad); // Calculate new x coordinate
    qreal y = start.y() + length * sin(rad); // Calculate new y coordinate
    return QPointF(x, y); // Return the new position
}
