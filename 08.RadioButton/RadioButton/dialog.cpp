#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked()) {
        ui->lineEdit->setText(ui->radioButton->text());
    } else if (ui->radioButton_2->isChecked()) {
        ui->lineEdit->setText(ui->radioButton_2->text());
    } else if (ui->radioButton_3->isChecked()) {
        ui->lineEdit->setText(ui->radioButton_3->text());
    }

}
