#ifndef PERSONS_H
#define PERSONS_H

#include "crypto.h"
#include "newperson.h"
#include <QWidget>
#include <QDialog>              // Для графики
#include <QTableWidgetItem>     // Таблица
#include <QDebug>               // Вывод
#include <QCryptographicHash>   // Хэш-функция


namespace Ui {
class persons;
}

class persons : public QWidget
{
    Q_OBJECT

public:
    explicit persons(QWidget *parent = nullptr);
    ~persons();

    void create();
    QList<Person> * array = nullptr;
    int number = 0;
    void change_person();

private slots:
    void on_btn_next_clicked();

    void on_btn_back_clicked();

    void on_btn_add_clicked();

private:
    Ui::persons *ui;
    QByteArray hex_hash;
    newperson *pers;

public slots:
    void addNew(Person prs);
};

#endif // PERSONS_H
