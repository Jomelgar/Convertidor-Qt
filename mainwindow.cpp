#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->te_text->setDisabled(true);
    ui->rb_dec->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rb_dec_clicked()
{
    ui->lb_plain->setText("Decimal:");
    ui->lb_text->setText("Hexadecimal:");
}


void MainWindow::on_rb_hex_clicked()
{
    ui->lb_plain->setText("Hexadecimal:");
    ui->lb_text->setText("Decimal:");
}


void MainWindow::on_pb_accept_clicked()
{
    if(ui->rb_dec->isChecked())
    {
        QString valor = recursivadecimal(ui->le_plain->text().toInt());
         ui->te_text->setText(valor);
    }
    else if(ui->rb_hex->isChecked())
    {
        int valor = recursivahex(ui->le_plain->text());
        ui->te_text->setText(QString::number(valor));
    }
}

void MainWindow::on_rb_bin_clicked()
{
    ui->lb_plain->setText("Decimal:");
    ui->lb_text->setText("Binario:");
}

