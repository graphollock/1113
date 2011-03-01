#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->leAr->setText("0h 0'0\"");
    ui->leDec->setText("0º 0'0\"");
    /*TODO: Checar conexao com o telescopio quando for implementado*/
    ui->gpvImage->setToolTip("Nenhum telescópio encontrado. Por favor conecte os módulos ao computador");
}

MainWindow::~MainWindow()
{
    delete ui;
}
