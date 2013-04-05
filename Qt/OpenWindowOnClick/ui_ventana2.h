/********************************************************************************
** Form generated from reading UI file 'ventana2.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA2_H
#define UI_VENTANA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ventana2
{
public:
    QLabel *label;
    QPushButton *btnCerrar;

    void setupUi(QDialog *Ventana2)
    {
        if (Ventana2->objectName().isEmpty())
            Ventana2->setObjectName(QStringLiteral("Ventana2"));
        Ventana2->resize(400, 300);
        label = new QLabel(Ventana2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 50, 181, 151));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btnCerrar = new QPushButton(Ventana2);
        btnCerrar->setObjectName(QStringLiteral("btnCerrar"));
        btnCerrar->setGeometry(QRect(270, 240, 99, 27));

        retranslateUi(Ventana2);

        QMetaObject::connectSlotsByName(Ventana2);
    } // setupUi

    void retranslateUi(QDialog *Ventana2)
    {
        Ventana2->setWindowTitle(QApplication::translate("Ventana2", "Dialog", 0));
        label->setText(QApplication::translate("Ventana2", "Ventana 2", 0));
        btnCerrar->setText(QApplication::translate("Ventana2", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Ventana2: public Ui_Ventana2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA2_H
