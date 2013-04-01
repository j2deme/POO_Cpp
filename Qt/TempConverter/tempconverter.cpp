#include "tempconverter.h"

TempConverter::TempConverter(QObject *parent) :
    QObject(parent)
{
    this->m_tempCelsius = 0;
}

int TempConverter::tempCelsius(){
    return this->m_tempCelsius;
}

int TempConverter::tempFahrenheit(){
    int tempFahrenheit = (9.0 / 5.0) * this->m_tempCelsius + 32;
    return tempFahrenheit;
}

void TempConverter::setTempCelsius(int tempCelsius){
    if (m_tempCelsius == tempCelsius) return; //Se corta el bucle

    m_tempCelsius = tempCelsius; // Se actualiza al nuevo estado

    // Se emiten 2 señales del cambio
    emit tempCelsiusChanged(m_tempCelsius);
    emit tempFahrenheitChanged(tempFahrenheit());
}

void TempConverter::setTempFahrenheit(int tempFahrenheit){
    int tempCelsius = (5.0 / 9.0) * (tempFahrenheit - 32);
    setTempCelsius(tempCelsius);
}

