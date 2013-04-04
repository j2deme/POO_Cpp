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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TempConverter
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *top;
    QVBoxLayout *left_side;
    QGroupBox *gb_celsius;
    QDial *dial_celsius;
    QLCDNumber *lcd_celsius;
    QVBoxLayout *right_side;
    QGroupBox *gb_fahrenheit;
    QDial *dial_fahrenheit;
    QLCDNumber *lcd_fahrenheit;
    QPushButton *btnQuit;

    void setupUi(QWidget *TempConverter)
    {
        if (TempConverter->objectName().isEmpty())
            TempConverter->setObjectName(QStringLiteral("TempConverter"));
        TempConverter->setWindowModality(Qt::NonModal);
        TempConverter->setEnabled(true);
        TempConverter->resize(414, 280);
        TempConverter->setMouseTracking(false);
        verticalLayoutWidget = new QWidget(TempConverter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top = new QHBoxLayout();
        top->setSpacing(6);
        top->setObjectName(QStringLiteral("top"));
        left_side = new QVBoxLayout();
        left_side->setSpacing(6);
        left_side->setObjectName(QStringLiteral("left_side"));
        gb_celsius = new QGroupBox(verticalLayoutWidget);
        gb_celsius->setObjectName(QStringLiteral("gb_celsius"));
        dial_celsius = new QDial(gb_celsius);
        dial_celsius->setObjectName(QStringLiteral("dial_celsius"));
        dial_celsius->setGeometry(QRect(30, 30, 131, 121));
        dial_celsius->setMaximum(100);
        lcd_celsius = new QLCDNumber(gb_celsius);
        lcd_celsius->setObjectName(QStringLiteral("lcd_celsius"));
        lcd_celsius->setGeometry(QRect(40, 150, 131, 51));
        dial_celsius->raise();
        lcd_celsius->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget->raise();

        left_side->addWidget(gb_celsius);


        top->addLayout(left_side);

        right_side = new QVBoxLayout();
        right_side->setSpacing(6);
        right_side->setObjectName(QStringLiteral("right_side"));
        gb_fahrenheit = new QGroupBox(verticalLayoutWidget);
        gb_fahrenheit->setObjectName(QStringLiteral("gb_fahrenheit"));
        dial_fahrenheit = new QDial(gb_fahrenheit);
        dial_fahrenheit->setObjectName(QStringLiteral("dial_fahrenheit"));
        dial_fahrenheit->setGeometry(QRect(40, 30, 121, 121));
        dial_fahrenheit->setMinimum(32);
        dial_fahrenheit->setMaximum(213);
        dial_fahrenheit->setPageStep(5);
        lcd_fahrenheit = new QLCDNumber(gb_fahrenheit);
        lcd_fahrenheit->setObjectName(QStringLiteral("lcd_fahrenheit"));
        lcd_fahrenheit->setGeometry(QRect(40, 150, 131, 51));

        right_side->addWidget(gb_fahrenheit);


        top->addLayout(right_side);


        verticalLayout->addLayout(top);

        btnQuit = new QPushButton(verticalLayoutWidget);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnQuit->sizePolicy().hasHeightForWidth());
        btnQuit->setSizePolicy(sizePolicy);
        btnQuit->setLayoutDirection(Qt::RightToLeft);
        btnQuit->setAutoFillBackground(false);

        verticalLayout->addWidget(btnQuit);


        retranslateUi(TempConverter);

        QMetaObject::connectSlotsByName(TempConverter);
    } // setupUi

    void retranslateUi(QWidget *TempConverter)
    {
        TempConverter->setWindowTitle(QApplication::translate("TempConverter", "Temperature Converter", 0));
        gb_celsius->setTitle(QApplication::translate("TempConverter", "Celsius", 0));
        gb_fahrenheit->setTitle(QApplication::translate("TempConverter", "Fahrenheit", 0));
        btnQuit->setText(QApplication::translate("TempConverter", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class TempConverter: public Ui_TempConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPCONVERTER_H
