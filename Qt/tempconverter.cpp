#include "tempconverter.h"
#include "ui_tempconverter.h"

TempConverter::TempConverter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TempConverter)
{
    ui->setupUi(this);
    connect(ui->dial_celsius,SIGNAL(valueChanged(int)),this, SLOT(setTempCelsius(int)));
    connect(ui->dial_celsius,SIGNAL(valueChanged(int)),ui->lcd_celsius,SLOT(display(int)));

    connect(ui->dial_fahrenheit,SIGNAL(valueChanged(int)),this,SLOT(setTempFahrenheit(int)));
    connect(ui->dial_fahrenheit,SIGNAL(valueChanged(int)),ui->lcd_fahrenheit,SLOT(display(int)));

    connect(this,SIGNAL(tempCelsiusChanged(int)),ui->dial_celsius,SLOT(setValue(int)));
    connect(this,SIGNAL(tempFahrenheitChanged(int)),ui->dial_fahrenheit,SLOT(setValue(int)));

    connect(ui->btnQuit, SIGNAL(clicked()),this,SLOT(close()));
}

TempConverter::~TempConverter(){
    delete ui;
}

int TempConverter::getCelsius() const{
    return this->m_tempCelsius;
}

int TempConverter::getFahrenheit() const{
    int fahrenheit = (9.0 / 5.0) * this->m_tempCelsius + 32;
    return fahrenheit;
}


void TempConverter::setTempCelsius(int celsius){
    if(m_tempCelsius == celsius) return;

    m_tempCelsius = celsius;

    emit tempCelsiusChanged(m_tempCelsius);
    emit tempFahrenheitChanged(TempConverter::getFahrenheit());
}

void TempConverter::setTempFahrenheit(int fahrenheit){
    int celsius = (5.0 / 9.0) * (fahrenheit - 32);
    TempConverter::setTempCelsius(celsius);
}
