#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QStringList Lanuguages = {"C++", "Python", "C#", "Java", "Ruby", "PHP"};

    foreach(QString item, Lanuguages) {
        ui->listWidget->addItem(item);
    }

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setTextColor(Qt::red);
}

void Dialog::on_pushButton_2_clicked()
{
    QFont font("Times", 15, QFont::Bold);
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setFont(font);
}

void Dialog::on_pushButton_3_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setBackgroundColor(Qt::green);
}
