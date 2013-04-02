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
    
private:
    Ui::TempConverter *ui;
};

#endif // TEMPCONVERTER_H
