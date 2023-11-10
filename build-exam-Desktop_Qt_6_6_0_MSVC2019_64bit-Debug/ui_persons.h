/********************************************************************************
** Form generated from reading UI file 'persons.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONS_H
#define UI_PERSONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_persons
{
public:
    QGridLayout *gridLayout;
    QLabel *title;
    QHBoxLayout *horizontalLayout;
    QLabel *type_gun;
    QLabel *gun;
    QHBoxLayout *horizontalLayout_2;
    QLabel *health_num;
    QLabel *health;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dist_type;
    QLabel *dist;
    QPushButton *btn_back;
    QPushButton *btn_next;
    QPushButton *btn_add;

    void setupUi(QWidget *persons)
    {
        if (persons->objectName().isEmpty())
            persons->setObjectName("persons");
        persons->resize(722, 515);
        gridLayout = new QGridLayout(persons);
        gridLayout->setObjectName("gridLayout");
        title = new QLabel(persons);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(18);
        title->setFont(font);

        gridLayout->addWidget(title, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        type_gun = new QLabel(persons);
        type_gun->setObjectName("type_gun");
        QFont font1;
        font1.setPointSize(14);
        type_gun->setFont(font1);

        horizontalLayout->addWidget(type_gun);

        gun = new QLabel(persons);
        gun->setObjectName("gun");
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        gun->setFont(font2);

        horizontalLayout->addWidget(gun);


        gridLayout->addLayout(horizontalLayout, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        health_num = new QLabel(persons);
        health_num->setObjectName("health_num");
        health_num->setFont(font1);

        horizontalLayout_2->addWidget(health_num);

        health = new QLabel(persons);
        health->setObjectName("health");
        health->setFont(font2);

        horizontalLayout_2->addWidget(health);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        dist_type = new QLabel(persons);
        dist_type->setObjectName("dist_type");
        dist_type->setFont(font1);

        horizontalLayout_3->addWidget(dist_type);

        dist = new QLabel(persons);
        dist->setObjectName("dist");
        dist->setFont(font2);

        horizontalLayout_3->addWidget(dist);


        gridLayout->addLayout(horizontalLayout_3, 3, 2, 1, 1);

        btn_back = new QPushButton(persons);
        btn_back->setObjectName("btn_back");

        gridLayout->addWidget(btn_back, 4, 0, 1, 1);

        btn_next = new QPushButton(persons);
        btn_next->setObjectName("btn_next");

        gridLayout->addWidget(btn_next, 4, 1, 1, 1);

        btn_add = new QPushButton(persons);
        btn_add->setObjectName("btn_add");

        gridLayout->addWidget(btn_add, 4, 2, 1, 1);


        retranslateUi(persons);

        QMetaObject::connectSlotsByName(persons);
    } // setupUi

    void retranslateUi(QWidget *persons)
    {
        persons->setWindowTitle(QCoreApplication::translate("persons", "Form", nullptr));
        title->setText(QCoreApplication::translate("persons", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\270</span></p></body></html>", nullptr));
        type_gun->setText(QCoreApplication::translate("persons", "\320\242\320\270\320\277 \320\276\321\200\321\203\320\266\320\270\321\217:", nullptr));
        gun->setText(QCoreApplication::translate("persons", "\320\237\320\270\321\201\321\202\320\276\320\273\320\265\321\202", nullptr));
        health_num->setText(QCoreApplication::translate("persons", "\320\236\321\207\320\272\320\270 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\321\217:", nullptr));
        health->setText(QCoreApplication::translate("persons", "100", nullptr));
        dist_type->setText(QCoreApplication::translate("persons", "\320\224\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\276\320\261\320\267\320\276\321\200\320\260:", nullptr));
        dist->setText(QCoreApplication::translate("persons", "60.5", nullptr));
        btn_back->setText(QCoreApplication::translate("persons", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        btn_next->setText(QCoreApplication::translate("persons", "\320\222\320\277\320\265\321\200\321\221\320\264", nullptr));
        btn_add->setText(QCoreApplication::translate("persons", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class persons: public Ui_persons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONS_H
