#include "display.h"
#include "ui_display.h"
#include <QDebug>

Display::Display(Perro *perro, QWidget *parent) :
    QDialog(parent), ui(new Ui::Display)
{
    ui->setupUi(this);
    setModel(perro);
    load();

    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(save()));
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(close()));
}

Display::~Display(){
    delete ui;
}

void Display::setModel(Perro *p){
    this->perro = p;
}

Perro* Display::getModel(){
    return this->perro;
}

void Display::load(){
    if (perro == 0) return;
    ui->txtNombre->setText(this->perro->getNombre());
    ui->txtRaza->setText(this->perro->getRaza());
    ui->txtEdad->setText(QString::number(this->perro->getEdad()));
}

void Display::save(){
    if (perro == 0) return;
    perro->setNombre(ui->txtNombre->text());
    perro->setRaza(ui->txtRaza->text());
    perro->setEdad(ui->txtEdad->text().toInt());
}
