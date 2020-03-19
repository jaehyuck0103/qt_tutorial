#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Information Box", "This information box.");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::warning(this, "Warning Box", "This is warning box.");
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::about(this, "About Box", "This is about box.");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this, "Question Box", "Do you like sport?", QMessageBox::Yes | QMessageBox::No);
}
