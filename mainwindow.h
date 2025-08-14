#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Conversor.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_rb_dec_clicked();

    void on_rb_hex_clicked();

    void on_pb_accept_clicked();

    void on_rb_bin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
