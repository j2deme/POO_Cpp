#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QDebug>
#include "display.h"
#include "perro.h"

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void update();
private slots:
    void openDisplay();
private:
    Ui::MainWindow *ui;
    Display *display;
    Perro *perro;
};

#endif // MAINWINDOW_H
