#include "tempconverter.h"
#include "ui_tempconverter.h"

TempConverter::TempConverter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TempConverter)
{
    ui->setupUi(this);
}

TempConverter::~TempConverter()
{
    delete ui;
}
