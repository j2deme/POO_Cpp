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
    explicit Display(Perro *perro, QWidget *parent = 0);
    ~Display();
    void setModel(Perro *perro);
    Perro *getModel();
public slots:
    void save();
private:
    Ui::Display *ui;
    Perro *perro;
    void load();
};

#endif // DISPLAY_H
