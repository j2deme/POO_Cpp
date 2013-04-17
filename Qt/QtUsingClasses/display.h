#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <QDialog>
#include "perro.h"

using namespace std;

namespace Ui {
    class Display;
}

class Display : public QDialog
{
    Q_OBJECT

public:
    explicit Display(Perro *mascota, QWidget *parent = 0);
    ~Display();
private:
    Ui::Display *ui;
    Perro *mascota;
};

#endif // DISPLAY_H
