/********************************************************************************
** Form generated from reading UI file 'tempconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPCONVERTER_H
#define UI_TEMPCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TempConverter
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *left_side;
    QGroupBox *gb_celsius;
    QDial *dial_celsius;
    QLCDNumber *lcd_celsius;
    QVBoxLayout *right_side;
    QGroupBox *gb_fahrenheit;
    QDial *dial_fahrenheit;
    QLCDNumber *lcd_fahrenheit;

    void setupUi(QWidget *TempConverter)
    {
        if (TempConverter->objectName().isEmpty())
            TempConverter->setObjectName(QStringLiteral("TempConverter"));
        TempConverter->setWindowModality(Qt::WindowModal);
        TempConverter->resize(480, 246);
        horizontalLayoutWidget = new QWidget(TempConverter);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 461, 221));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left_side = new QVBoxLayout();
        left_side->setSpacing(6);
        left_side->setObjectName(QStringLiteral("left_side"));
        gb_celsius = new QGroupBox(horizontalLayoutWidget);
        gb_celsius->setObjectName(QStringLiteral("gb_celsius"));
        dial_celsius = new QDial(gb_celsius);
        dial_celsius->setObjectName(QStringLiteral("dial_celsius"));
        dial_celsius->setGeometry(QRect(30, 30, 131, 121));
        lcd_celsius = new QLCDNumber(gb_celsius);
        lcd_celsius->setObjectName(QStringLiteral("lcd_celsius"));
        lcd_celsius->setGeometry(QRect(40, 150, 131, 51));

        left_side->addWidget(gb_celsius);


        horizontalLayout->addLayout(left_side);

        right_side = new QVBoxLayout();
        right_side->setSpacing(6);
        right_side->setObjectName(QStringLiteral("right_side"));
        gb_fahrenheit = new QGroupBox(horizontalLayoutWidget);
        gb_fahrenheit->setObjectName(QStringLiteral("gb_fahrenheit"));
        dial_fahrenheit = new QDial(gb_fahrenheit);
        dial_fahrenheit->setObjectName(QStringLiteral("dial_fahrenheit"));
        dial_fahrenheit->setGeometry(QRect(40, 30, 121, 121));
        lcd_fahrenheit = new QLCDNumber(gb_fahrenheit);
        lcd_fahrenheit->setObjectName(QStringLiteral("lcd_fahrenheit"));
        lcd_fahrenheit->setGeometry(QRect(40, 150, 131, 51));

        right_side->addWidget(gb_fahrenheit);


        horizontalLayout->addLayout(right_side);


        retranslateUi(TempConverter);

        QMetaObject::connectSlotsByName(TempConverter);
    } // setupUi

    void retranslateUi(QWidget *TempConverter)
    {
        TempConverter->setWindowTitle(QApplication::translate("TempConverter", "TempConverter", 0));
        gb_celsius->setTitle(QApplication::translate("TempConverter", "Celsius", 0));
        gb_fahrenheit->setTitle(QApplication::translate("TempConverter", "Fahrenheit", 0));
    } // retranslateUi

};

namespace Ui {
    class TempConverter: public Ui_TempConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPCONVERTER_H
