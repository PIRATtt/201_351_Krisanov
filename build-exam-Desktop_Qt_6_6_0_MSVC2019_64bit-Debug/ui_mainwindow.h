/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *error;
    QLabel *sign;
    QLineEdit *code_text;
    QPushButton *Ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setGeometry(QRect(330, 298, 165, 26));
        sign = new QLabel(centralwidget);
        sign->setObjectName("sign");
        sign->setGeometry(QRect(330, 264, 165, 28));
        code_text = new QLineEdit(centralwidget);
        code_text->setObjectName("code_text");
        code_text->setGeometry(QRect(330, 330, 165, 24));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(code_text->sizePolicy().hasHeightForWidth());
        code_text->setSizePolicy(sizePolicy);
        code_text->setEchoMode(QLineEdit::Password);
        code_text->setClearButtonEnabled(false);
        Ok = new QPushButton(centralwidget);
        Ok->setObjectName("Ok");
        Ok->setGeometry(QRect(330, 360, 165, 24));
        sizePolicy.setHeightForWidth(Ok->sizePolicy().hasHeightForWidth());
        Ok->setSizePolicy(sizePolicy);
        Ok->setMinimumSize(QSize(1, 1));
        Ok->setMouseTracking(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        error->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\277\320\270\320\275-\320\272\320\276\320\264</span></p></body></html>", nullptr));
        sign->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\222\321\205\320\276\320\264</span></p></body></html>", nullptr));
        code_text->setText(QString());
        code_text->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\270\320\275-\320\272\320\276\320\264", nullptr));
        Ok->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\272\320\276\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
