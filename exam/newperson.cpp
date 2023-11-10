#include "newperson.h"
#include "ui_newperson.h"

newperson::newperson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newperson)
{
    ui->setupUi(this);
}

newperson::~newperson()
{
    delete ui;
}

void newperson::on_add_clicked()
{
    Person newprs;
    newprs.gun = ui->newgun->text();
    newprs.hp = ui->newhealth->text().toInt();
    newprs.dist = ui->newdist->text().toFloat();
    addNewSignal(newprs);
    this->close();
}

