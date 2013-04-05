#include "ventana2.h"
#include "ui_ventana2.h"

Ventana2::Ventana2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana2)
{
    ui->setupUi(this);
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(close()));
}

Ventana2::~Ventana2()
{
    delete ui;
}
