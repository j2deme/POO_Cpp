#include "display.h"
#include "ui_display.h"
#include <QDebug>

Display::Display(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Display)
{
    ui->setupUi(this);
    //ui->txtNombre->setText(QString::fromStdString(this->mascota->getName()));
    //qDebug("A string: %s", qPrintable(QString::fromStdString(this->mascota->getName())));
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(close()));
}

Display::~Display()
{
    delete ui;
}

void Display::setPerro(Perro* mascota){
    this->mascota = mascota;
}

Perro* Display::getPerro(){
    return this->mascota;
}
