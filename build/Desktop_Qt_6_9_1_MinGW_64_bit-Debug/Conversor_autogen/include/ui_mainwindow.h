/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lb_plain;
    QLabel *lb_text;
    QPushButton *pb_accept;
    QRadioButton *rb_dec;
    QRadioButton *rb_hex;
    QLabel *label_3;
    QTextEdit *te_text;
    QLineEdit *le_plain;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"/* ====== QLabel ====== */\n"
"QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* ====== QLineEdit ====== */\n"
"QLineEdit {\n"
"    background-color: #f8f9fa;\n"
"	color: 'black';\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #3498db;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* ====== QTextEdit ====== */\n"
"QTextEdit {\n"
"    background-color: #f8f9fa;\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #3498db;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* ====== QRadioButton ====== */\n"
"QRadioButton {\n"
"    spacing: 6px; /* separaci\303\263n entre el c\303\255rculo y el texto */\n"
"    font-size: 14px;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"  "
                        "  width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #7f8c8d;\n"
"    border-radius: 8px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    border: 2px solid #3498db;\n"
"    background-color: #3498db;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #2980b9;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: 'white';\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"	font-size: 16px; \n"
"    padding: 8px 14px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lb_plain = new QLabel(centralwidget);
        lb_plain->setObjectName("lb_plain");
        lb_plain->setGeometry(QRect(90, 70, 101, 20));
        lb_text = new QLabel(centralwidget);
        lb_text->setObjectName("lb_text");
        lb_text->setGeometry(QRect(90, 190, 101, 20));
        pb_accept = new QPushButton(centralwidget);
        pb_accept->setObjectName("pb_accept");
        pb_accept->setGeometry(QRect(360, 450, 90, 29));
        rb_dec = new QRadioButton(centralwidget);
        rb_dec->setObjectName("rb_dec");
        rb_dec->setGeometry(QRect(450, 100, 121, 25));
        rb_hex = new QRadioButton(centralwidget);
        rb_hex->setObjectName("rb_hex");
        rb_hex->setGeometry(QRect(450, 130, 131, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 70, 111, 20));
        te_text = new QTextEdit(centralwidget);
        te_text->setObjectName("te_text");
        te_text->setGeometry(QRect(90, 220, 321, 61));
        le_plain = new QLineEdit(centralwidget);
        le_plain->setObjectName("le_plain");
        le_plain->setGeometry(QRect(90, 100, 201, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        lb_plain->setText(QCoreApplication::translate("MainWindow", "Decimal:", nullptr));
        lb_text->setText(QCoreApplication::translate("MainWindow", "Hexadecimal:", nullptr));
        pb_accept->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        rb_dec->setText(QCoreApplication::translate("MainWindow", "Hexadecimal", nullptr));
        rb_hex->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Convertir A:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
