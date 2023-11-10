#ifndef PERSONS_H
#define PERSONS_H

#include "crypto.h"
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

    void create_table();

private:
    Ui::persons *ui;
    QByteArray hex_hash;
};

#endif // PERSONS_H
