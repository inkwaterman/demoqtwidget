#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    data="";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    data+=ui->pushButton->text() +" ";
    ui->textEdit->setText(data);
}

void MainWindow::on_pushButton_2_clicked()
{
    data+=ui->pushButton_2->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_3_clicked()
{
    data+=ui->pushButton_3->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_5_clicked()
{
    data+=ui->pushButton_4->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_10_clicked()
{
    data+=ui->pushButton_10->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_8_clicked()
{
    data+=ui->pushButton_8->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_4_clicked()
{
    data+=ui->pushButton_4->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_11_clicked()
{
    data+=ui->pushButton_11->text() +" ";
    ui->textEdit->setText(data);

}

void MainWindow::on_pushButton_9_clicked()
{
    data+="\n";
    ui->textEdit->setText(data);
}
