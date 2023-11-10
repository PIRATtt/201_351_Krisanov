#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->error->setVisible(false);
    persons_app = new persons;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Авторизация
void MainWindow::on_Ok_clicked() {

    if (ui->code_text->text() == "1234") {
        this->close();
        persons_app->show();
    } else {
        ui->error->setVisible(true);
    }

}
