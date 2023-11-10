#include "persons.h"
#include "ui_persons.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QFile>
#include <QDebug>

persons::persons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::persons)
{
    ui->setupUi(this);

    pers = new newperson;
    connect(pers, SIGNAL(addNewSignal(Person)), this, SLOT(addNew(Person)));
}

persons::~persons()
{
    delete ui;
}

void persons::create() {
    QFile file("persons.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "Не удалось открыть файл JSON";
    }
    QByteArray jsonData = file.readAll();
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QJsonObject jsonObject = jsonDoc.object();
    qDebug() << jsonObject;

    QJsonArray jsonArray = jsonObject.value("list").toArray();
    array = new QList<Person>;
    for (auto item : jsonArray) {
        Person new_record;
        new_record.gun = item.toObject().value("gun").toString();
        new_record.hp = item.toObject().value("health").toString().toInt();
        new_record.dist = item.toObject().value("distance").toString().toFloat();
        array->append(new_record);
    }
    number = 0;
}

void persons::change_person() {
    ui->gun->setText(array->toList()[number].gun);
    ui->health->setText(QString::number(array->toList()[number].hp));
    ui->dist->setText(QString::number(array->toList()[number].dist));
}

void persons::on_btn_next_clicked()
{
    if (number < array->size() - 1) {
        number += 1;
        change_person();
    }
}


void persons::on_btn_back_clicked()
{
    if (number > 0) {
        number -= 1;
        change_person();
    }
}


void persons::on_btn_add_clicked()
{
    pers->show();
    this->close();
}

void persons::addNew(Person prs) {
    this->show();

    array->append(prs);
    number = array->size() - 1;
    change_person();

    QJsonDocument doc;
    QJsonArray jsonArray;

    for (Person item : *array)
    {
        QJsonObject tmp;
        tmp.insert("gun",item.gun);
        tmp.insert("health", QString::number(item.hp));
        tmp.insert("distance", QString::number(item.dist));
        jsonArray.append(tmp);
    }

    QJsonObject list;
    list.insert("list", jsonArray);
    doc.setObject(list);

    QFile file("persons.json");
    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << "Не удалось открыть файл JSON";
    }
    file.write(doc.toJson());
    file.close();
}
