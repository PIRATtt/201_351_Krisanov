/********************************************************************************
** Form generated from reading UI file 'newperson.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPERSON_H
#define UI_NEWPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newperson
{
public:
    QGridLayout *gridLayout;
    QLineEdit *newgun;
    QLineEdit *newhealth;
    QLineEdit *newdist;
    QPushButton *add;

    void setupUi(QWidget *newperson)
    {
        if (newperson->objectName().isEmpty())
            newperson->setObjectName("newperson");
        newperson->resize(665, 529);
        gridLayout = new QGridLayout(newperson);
        gridLayout->setObjectName("gridLayout");
        newgun = new QLineEdit(newperson);
        newgun->setObjectName("newgun");

        gridLayout->addWidget(newgun, 0, 0, 1, 1);

        newhealth = new QLineEdit(newperson);
        newhealth->setObjectName("newhealth");

        gridLayout->addWidget(newhealth, 1, 0, 1, 1);

        newdist = new QLineEdit(newperson);
        newdist->setObjectName("newdist");

        gridLayout->addWidget(newdist, 2, 0, 1, 1);

        add = new QPushButton(newperson);
        add->setObjectName("add");

        gridLayout->addWidget(add, 3, 0, 1, 1);


        retranslateUi(newperson);

        QMetaObject::connectSlotsByName(newperson);
    } // setupUi

    void retranslateUi(QWidget *newperson)
    {
        newperson->setWindowTitle(QCoreApplication::translate("newperson", "Form", nullptr));
        add->setText(QCoreApplication::translate("newperson", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newperson: public Ui_newperson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPERSON_H
