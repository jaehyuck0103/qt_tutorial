#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextDocument>

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
    // Text method 1
    QPainter mytext(this);
    mytext.setFont(QFont("Times", 16, QFont::Bold));
    mytext.drawText(QPoint(20, 30), "Qt5 Text Drawing");

    // Text method 2
    QTextDocument document;
    QRect rect(0, 0, 250, 250);
    mytext.translate(100, 50);

    document.setHtml("<b>Hello</b><font color= 'red' size = '30'>Qt5 C++</font>");
    document.drawContents(&mytext, rect);

    // Line
    QPainter myline(this);
    QPen linePen(Qt::green);
    linePen.setWidth(10);
    myline.setPen(linePen);
    myline.drawLine(50, 50, 200, 200);
}

