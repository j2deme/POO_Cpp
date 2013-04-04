#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QWidget>

namespace Ui {
class TempConverter;
}

class TempConverter : public QWidget
{
    Q_OBJECT

public:
    explicit TempConverter(QWidget *parent = 0);
    ~TempConverter();
    int getCelsius() const;
    int getFahrenheit() const;
signals:
    void tempCelsiusChanged(int);
    void tempFahrenheitChanged(int);
private slots:
    void setTempCelsius(int celsius);
    void setTempFahrenheit(int fahrenheit);

private:
    Ui::TempConverter *ui;
    int m_tempCelsius;
};

#endif // TEMPCONVERTER_H
