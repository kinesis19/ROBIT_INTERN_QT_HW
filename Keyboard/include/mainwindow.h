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
    void on_btn_copy_clicked();

    void on_btn_clear_clicked();

    void on_btn_tilde_clicked();

    void on_btn_exclamation_clicked();

    void on_btn_at_clicked();

    void on_btn_hash_clicked();

    void on_btn_dollar_clicked();

    void on_btn_percent_clicked();

    void on_btn_caret_clicked();

    void on_btn_ampersand_clicked();

    void on_btn_asterisk_clicked();

    void on_btn_leftParenthesis_clicked();

    void on_btn_rightParenthesis_clicked();

    void on_btn_minus_clicked();

    void on_btn_plus_clicked();

    void on_btn_backSpace_clicked();

    void on_btn_tab_clicked();

    void on_btn_q_clicked();

    void on_btn_w_clicked();

    void on_btn_e_clicked();

    void on_btn_r_clicked();

    void on_btn_t_clicked();

    void on_btn_y_clicked();

    void on_btn_u_clicked();

    void on_btn_i_clicked();

    void on_btn_o_clicked();

    void on_btn_p_clicked();

    void on_btn_leftCurlyBrace_clicked();

    void on_btn_rightCurlyBrace_clicked();

    void on_btn_backSlash_clicked();

    void on_btn_caps_clicked();

    void on_btn_a_clicked();

    void on_btn_s_clicked();

    void on_btn_d_clicked();

    void on_btn_f_clicked();

    void on_btn_g_clicked();

    void on_btn_h_clicked();

    void on_btn_j_clicked();

    void on_btn_k_clicked();

    void on_btn_l_clicked();

    void on_btn_colon_clicked();

    void on_btn_doubleQuote_clicked();

    void on_btn_enter_clicked();

    void on_btn_shiftLeft_pressed();

    void on_btn_shiftLeft_released();

    void on_btn_z_clicked();

    void on_btn_x_clicked();

    void on_btn_c_clicked();

    void on_btn_v_clicked();

    void on_btn_b_clicked();

    void on_btn_n_clicked();

    void on_btn_m_clicked();

    void on_btn_lessThan_clicked();

    void on_btn_greaterThan_clicked();

    void on_btn_questionMark_clicked();

    void on_btn_shiftRight_pressed();

    void on_btn_ctrlLeft_clicked();

    void on_btn_winLeft_clicked();

    void on_btn_altLeft_clicked();

    void on_btn_space_clicked();

    void on_btn_lang_clicked();

    void on_btn_winRight_clicked();

    void on_btn_menu_clicked();

    void on_btn_ctrlRight_clicked();

    void on_btn_shiftRight_released();


private:
    Ui::MainWindow *ui;

    bool bisEng, bisShiftPressed, bisCapsLockOn; // For Changing keyboard layout(text)
    void Initializing();

};
#endif // MAINWINDOW_H
