#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "kafelek.h"

#include <QMainWindow>
#include <array>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    int month = QDate::currentDate().month();
    int year = QDate::currentDate().year();

    std::array<std::array<Kafelek*, 7>, 5> kafelki;

    void inicjuj_kafelki();
};
#endif // MAINWINDOW_H
