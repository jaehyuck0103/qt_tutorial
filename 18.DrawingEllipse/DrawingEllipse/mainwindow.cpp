#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter ellipsePainter(this);

    ellipsePainter.setBrush(Qt::Dense5Pattern);

    QPen pen;
    pen.setWidth(8);
    pen.setBrush(Qt::BDiagPattern);
    ellipsePainter.setPen(pen);
    ellipsePainter.drawEllipse(QRect(20, 20, 100, 100));

}

