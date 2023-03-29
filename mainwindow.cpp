#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "mudarbase.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonCalcular_clicked()
{
    int numero = ui->lineEditNumero->text().toInt();
    int base=0;
    if (ui->comboBoxBase->currentIndex()==0) base=2;
    if (ui->comboBoxBase->currentIndex()==1) base=8;
    if (ui->comboBoxBase->currentIndex()==2) base=16;
    fl::MudarBase result(numero,base);

    ui->lineEditNumero->setText(result.calcularMudanca());
}
