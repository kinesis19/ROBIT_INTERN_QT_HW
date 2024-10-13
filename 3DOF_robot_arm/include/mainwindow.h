#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;

    int link1_value, link2_value, link3_value, joint1_angle, joint2_angle, joint3_angle;
    void Initializing();
    void generateRobotArm(int value_1, int value_2, int value_3);
};
#endif // MAINWINDOW_H
