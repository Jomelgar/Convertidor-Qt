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
    QTextEdit *te_text;
    QLineEdit *le_plain;
    QWidget *w_conv;
    QRadioButton *rb_bin;
    QRadioButton *rb_hex;
    QRadioButton *rb_dec;
    QLabel *label_3;
    QWidget *w_value;
    QRadioButton *rb_bin_2;
    QRadioButton *rb_hex_2;
    QRadioButton *rb_dec_2;
    QLabel *label_4;
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
        te_text = new QTextEdit(centralwidget);
        te_text->setObjectName("te_text");
        te_text->setGeometry(QRect(90, 220, 321, 61));
        le_plain = new QLineEdit(centralwidget);
        le_plain->setObjectName("le_plain");
        le_plain->setGeometry(QRect(90, 100, 201, 28));
        w_conv = new QWidget(centralwidget);
        w_conv->setObjectName("w_conv");
        w_conv->setGeometry(QRect(600, 70, 161, 161));
        rb_bin = new QRadioButton(w_conv);
        rb_bin->setObjectName("rb_bin");
        rb_bin->setGeometry(QRect(20, 110, 131, 25));
        rb_hex = new QRadioButton(w_conv);
        rb_hex->setObjectName("rb_hex");
        rb_hex->setGeometry(QRect(20, 80, 131, 25));
        rb_dec = new QRadioButton(w_conv);
        rb_dec->setObjectName("rb_dec");
        rb_dec->setGeometry(QRect(20, 50, 121, 25));
        label_3 = new QLabel(w_conv);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 20, 111, 20));
        w_value = new QWidget(centralwidget);
        w_value->setObjectName("w_value");
        w_value->setGeometry(QRect(430, 70, 161, 161));
        rb_bin_2 = new QRadioButton(w_value);
        rb_bin_2->setObjectName("rb_bin_2");
        rb_bin_2->setGeometry(QRect(20, 110, 131, 25));
        rb_hex_2 = new QRadioButton(w_value);
        rb_hex_2->setObjectName("rb_hex_2");
        rb_hex_2->setGeometry(QRect(20, 80, 131, 25));
        rb_dec_2 = new QRadioButton(w_value);
        rb_dec_2->setObjectName("rb_dec_2");
        rb_dec_2->setGeometry(QRect(20, 50, 121, 25));
        label_4 = new QLabel(w_value);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 20, 111, 20));
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
        rb_bin->setText(QCoreApplication::translate("MainWindow", "Binario", nullptr));
        rb_hex->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        rb_dec->setText(QCoreApplication::translate("MainWindow", "Hexadecimal", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Convertir A:", nullptr));
        rb_bin_2->setText(QCoreApplication::translate("MainWindow", "Binario", nullptr));
        rb_hex_2->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        rb_dec_2->setText(QCoreApplication::translate("MainWindow", "Hexadecimal", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Convertir A:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
