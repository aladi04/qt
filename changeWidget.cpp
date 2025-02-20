#include "changeWidget.h"
#include "mainwindow.h"

void on_home1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(0);
}

void on_home2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(0);
}

void on_competition1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(1);
}

void on_competition2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(1);
}

void on_match1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(2);
}

void on_match2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(2);
}

void on_equipe1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(3);
}

void on_equipe2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(3);
}

void on_joueur1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(4);
}

void on_joueur2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(4);
}

void on_arbitre1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(5);
}

void on_arbitre2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(5);
}

void on_stade1_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(6);
}

void on_stade2_toggled(Ui::MainWindow* ui, bool checked)
{
    ui->stackedWidget->setCurrentIndex(6);
}
