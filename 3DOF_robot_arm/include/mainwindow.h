#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_generate_clicked();

    void on_horizontalSlider_1_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_btn_reset_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;  // Declare QGraphicsScene

    int link1_value, link2_value, link3_value, joint1_angle, joint2_angle, joint3_angle; // Declare Variables
    void Initializing(); // Initializing
    void UpdateScene();  // Update the Robot Arm
    QPointF CalculateJointPosition(QPointF start, int length, int angle); // Calculate Joint Position using the Link and Angle
};
#endif // MAINWINDOW_H
