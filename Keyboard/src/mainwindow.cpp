#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("©github.com/kinesis19/ROBIT_INTERN_QT_HW/Keyboard");

    bisEng = true;
    Initializing();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Initializing(){
    if(bisEng == true){
        // Special characters
        ui->btn_tilde->setText("~\n`");
        ui->btn_exclamation->setText("!\n1");
        ui->btn_at->setText("@\n2");
        ui->btn_hash->setText("#\n3");
        ui->btn_dollar->setText("$\n4");
        ui->btn_percent->setText("%\n5");
        ui->btn_caret->setText("^\n6");
        ui->btn_ampersand->setText("&&\n7");
        ui->btn_asterisk->setText("*\n8");
        ui->btn_leftParenthesis->setText("(\n9");
        ui->btn_rightParenthesis->setText(")\n0");
        ui->btn_minus->setText("_\n-");
        ui->btn_plus->setText("+\n=");

        ui->btn_leftCurlyBrace->setText("{\n[");
        ui->btn_rightCurlyBrace->setText("}\n]");
        ui->btn_backSlash->setText("\\\n|");

        ui->btn_colon->setText(":\n;");
        ui->btn_doubleQuote->setText("\"\n\'\'");

        ui->btn_lessThan->setText("<\n,");
        ui->btn_greaterThan->setText(">\n.");
        ui->btn_questionMark->setText("?\n/");

        // Alphabet
        ui->btn_q->setText("Q\nq");
        ui->btn_w->setText("W\nw");
        ui->btn_e->setText("E\ne");
        ui->btn_r->setText("R\nr");
        ui->btn_t->setText("T\nt");
        ui->btn_y->setText("Y\ny");
        ui->btn_u->setText("U\nu");
        ui->btn_i->setText("I\ni");
        ui->btn_o->setText("O\no");
        ui->btn_p->setText("P\np");

        ui->btn_a->setText("A\na");
        ui->btn_s->setText("S\ns");
        ui->btn_d->setText("D\nd");
        ui->btn_f->setText("F\nf");
        ui->btn_g->setText("G\ng");
        ui->btn_h->setText("H\nh");
        ui->btn_j->setText("J\nj");
        ui->btn_k->setText("K\nk");
        ui->btn_l->setText("L\nl");

        ui->btn_z->setText("Z\nz");
        ui->btn_x->setText("X\nx");
        ui->btn_c->setText("C\nc");
        ui->btn_v->setText("V\nv");
        ui->btn_b->setText("B\nb");
        ui->btn_n->setText("N\nn");
        ui->btn_m->setText("M\nm");

        ui->btn_lang->setText("영어");

    }else{

        // Special characters
        ui->btn_lang->setText("Kor");

        // Korean
        ui->btn_q->setText("ㅂ");
        ui->btn_w->setText("ㅈ");
        ui->btn_e->setText("ㄷ");
        ui->btn_r->setText("ㄱ");
        ui->btn_t->setText("ㅅ");
        ui->btn_y->setText("ㅛ");
        ui->btn_u->setText("ㅕ");
        ui->btn_i->setText("ㅑ");
        ui->btn_o->setText("ㅐ\nㅒ");
        ui->btn_p->setText("ㅔ\nㅖ");

        ui->btn_a->setText("ㅁ");
        ui->btn_s->setText("ㄴ");
        ui->btn_d->setText("ㅇ");
        ui->btn_f->setText("ㄹ");
        ui->btn_g->setText("ㅎ");
        ui->btn_h->setText("ㅗ");
        ui->btn_j->setText("ㅓ");
        ui->btn_k->setText("ㅏ");
        ui->btn_l->setText("ㅣ");

        ui->btn_z->setText("ㅋ");
        ui->btn_x->setText("ㅌ");
        ui->btn_c->setText("ㅊ");
        ui->btn_v->setText("ㅍ");
        ui->btn_b->setText("ㅠ");
        ui->btn_n->setText("ㅜ");
        ui->btn_m->setText("ㅡ");

    }
}


void MainWindow::on_btn_copy_clicked()
{

}


void MainWindow::on_btn_clear_clicked()
{

}


void MainWindow::on_btn_tilde_clicked()
{

}


void MainWindow::on_btn_exclamation_clicked()
{

}


void MainWindow::on_btn_at_clicked()
{

}


void MainWindow::on_btn_hash_clicked()
{

}


void MainWindow::on_btn_dollar_clicked()
{

}


void MainWindow::on_btn_percent_clicked()
{

}


void MainWindow::on_btn_caret_clicked()
{

}


void MainWindow::on_btn_ampersand_clicked()
{

}


void MainWindow::on_btn_asterisk_clicked()
{

}


void MainWindow::on_btn_leftParenthesis_clicked()
{

}


void MainWindow::on_btn_rightParenthesis_clicked()
{

}


void MainWindow::on_btn_minus_clicked()
{

}


void MainWindow::on_btn_plus_clicked()
{

}


void MainWindow::on_btn_backSpace_clicked()
{

}


void MainWindow::on_btn_tab_clicked()
{

}


void MainWindow::on_btn_q_clicked()
{

}


void MainWindow::on_btn_w_clicked()
{

}


void MainWindow::on_btn_e_clicked()
{

}


void MainWindow::on_btn_r_clicked()
{

}


void MainWindow::on_btn_t_clicked()
{

}


void MainWindow::on_btn_y_clicked()
{

}


void MainWindow::on_btn_u_clicked()
{

}


void MainWindow::on_btn_i_clicked()
{

}


void MainWindow::on_btn_o_clicked()
{

}


void MainWindow::on_btn_p_clicked()
{

}


void MainWindow::on_btn_leftCurlyBrace_clicked()
{

}


void MainWindow::on_btn_rightCurlyBrace_clicked()
{

}


void MainWindow::on_btn_backSlash_clicked()
{

}


void MainWindow::on_btn_caps_clicked()
{

}


void MainWindow::on_btn_a_clicked()
{

}


void MainWindow::on_btn_s_clicked()
{

}


void MainWindow::on_btn_d_clicked()
{

}


void MainWindow::on_btn_f_clicked()
{

}


void MainWindow::on_btn_g_clicked()
{

}


void MainWindow::on_btn_h_clicked()
{

}


void MainWindow::on_btn_j_clicked()
{

}


void MainWindow::on_btn_k_clicked()
{

}


void MainWindow::on_btn_l_clicked()
{

}


void MainWindow::on_btn_colon_clicked()
{

}


void MainWindow::on_btn_doubleQuote_clicked()
{

}


void MainWindow::on_btn_enter_clicked()
{

}


void MainWindow::on_btn_shiftLeft_clicked()
{

}


void MainWindow::on_btn_z_clicked()
{

}


void MainWindow::on_btn_x_clicked()
{

}


void MainWindow::on_btn_c_clicked()
{

}


void MainWindow::on_btn_v_clicked()
{

}


void MainWindow::on_btn_b_clicked()
{

}


void MainWindow::on_btn_n_clicked()
{

}


void MainWindow::on_btn_m_clicked()
{

}


void MainWindow::on_btn_lessThan_clicked()
{

}


void MainWindow::on_btn_greaterThan_clicked()
{

}


void MainWindow::on_btn_questionMark_clicked()
{

}


void MainWindow::on_btn_shiftRight_clicked()
{

}


void MainWindow::on_btn_ctrlLeft_clicked()
{

}


void MainWindow::on_btn_winLeft_clicked()
{

}


void MainWindow::on_btn_altLeft_clicked()
{

}


void MainWindow::on_btn_space_clicked()
{

}


void MainWindow::on_btn_lang_clicked()
{
    bisEng = !bisEng; // Switch Keyboard Language
    Initializing();
}


void MainWindow::on_btn_winRight_clicked()
{


}


void MainWindow::on_btn_menu_clicked()
{

}


void MainWindow::on_btn_ctrlRight_clicked()
{

}

