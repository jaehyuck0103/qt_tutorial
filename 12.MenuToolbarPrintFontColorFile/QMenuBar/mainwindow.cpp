#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>

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


void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About Me", "This is About Me.");
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    dialog.setWindowTitle("Print Document");
    if (ui->textEdit->textCursor().hasSelection())
        dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);

    if (dialog.exec() != QDialog::Accepted) {
        return;
    }

}

void MainWindow::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("Helvetica[Cronyx]", 12), this);

    if (ok) {
        ui->textEdit->setFont(font);
    }

}

void MainWindow::on_actioncolor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::yellow, this);

    if (color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow::on_actionOpen_triggered()
{
    // Create File Dialog
    QString fileName = QFileDialog::getOpenFileName(this, "Open A File", "C://");
    ui->textEdit->setText(fileName);
}
