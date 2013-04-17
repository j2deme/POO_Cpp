#include "display.h"
#include "ui_display.h"
#include <QDebug>

Display::Display(Perro *mascota, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Display)
{
    ui->setupUi(this);
    this->mascota = mascota;
    //this->mascota->setName("Lobo");
    //qDebug("Test string");
    //qDebug("Nombre: %s", qPrintable(QString::fromStdString(Display::getPerro()->getName())));

    ui->txtNombre->setText(QString::fromStdString(this->mascota->getName()));
    ui->txtRaza->setText(QString::fromStdString(this->mascota->getRaza()));
    ui->txtEdad->setText(QString::number(this->mascota->getEdad()));

    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(close()));
}

Display::~Display()
{
    delete ui;
}
