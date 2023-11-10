#ifndef NEWPERSON_H
#define NEWPERSON_H

#include <QWidget>
#include "crypto.h"

namespace Ui {
class newperson;
}

class newperson : public QWidget
{
    Q_OBJECT

public:
    explicit newperson(QWidget *parent = nullptr);
    ~newperson();

signals:
    void addNewSignal(Person newprs);

private slots:
    void on_add_clicked();

private:
    Ui::newperson *ui;
};

#endif // NEWPERSON_H
