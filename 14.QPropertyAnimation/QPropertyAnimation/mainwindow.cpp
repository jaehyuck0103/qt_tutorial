#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    animation = new QPropertyAnimation(ui->pushButton, "geometry");
    animation->setDuration(10000);
    animation->setStartValue(ui->pushButton->geometry());
    animation->setEndValue(QRect(200, 200, 100, 50));

    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    curve.setAmplitude(2.0);
    curve.setOvershoot(1.3);
    curve.setPeriod(0.5);

    animation->setLoopCount(3);

    animation->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

