#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

class TempConverter : public QObject
{
    Q_OBJECT
public:
    explicit TempConverter(int tempCelsius, QObject *parent = 0);
    int tempCelsius() const;
    int tempFahrenheit() const;

signals:
    void tempCelsiusChanged(int);
    void tempFahrenheitChanged(int);

public slots:
    void setTempCelsius(int);
    void setTempFahrenheit(int);

private:
    int m_tempCelsius;

};

#endif // TEMPCONVERTER_H
