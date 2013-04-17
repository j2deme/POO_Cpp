/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Display
{
public:
    QLineEdit *txtNombre;
    QLabel *lblNombre;
    QLabel *lblRaza;
    QLineEdit *txtRaza;
    QPushButton *btnCerrar;

    void setupUi(QDialog *Display)
    {
        if (Display->objectName().isEmpty())
            Display->setObjectName(QStringLiteral("Display"));
        Display->resize(400, 300);
        txtNombre = new QLineEdit(Display);
        txtNombre->setObjectName(QStringLiteral("txtNombre"));
        txtNombre->setGeometry(QRect(120, 30, 113, 27));
        lblNombre = new QLabel(Display);
        lblNombre->setObjectName(QStringLiteral("lblNombre"));
        lblNombre->setGeometry(QRect(50, 30, 67, 17));
        lblRaza = new QLabel(Display);
        lblRaza->setObjectName(QStringLiteral("lblRaza"));
        lblRaza->setGeometry(QRect(50, 70, 67, 17));
        txtRaza = new QLineEdit(Display);
        txtRaza->setObjectName(QStringLiteral("txtRaza"));
        txtRaza->setGeometry(QRect(120, 70, 113, 27));
        btnCerrar = new QPushButton(Display);
        btnCerrar->setObjectName(QStringLiteral("btnCerrar"));
        btnCerrar->setGeometry(QRect(230, 160, 99, 27));

        retranslateUi(Display);

        QMetaObject::connectSlotsByName(Display);
    } // setupUi

    void retranslateUi(QDialog *Display)
    {
        Display->setWindowTitle(QApplication::translate("Display", "Dialog", 0));
        lblNombre->setText(QApplication::translate("Display", "Nombre", 0));
        lblRaza->setText(QApplication::translate("Display", "Raza", 0));
        btnCerrar->setText(QApplication::translate("Display", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Display: public Ui_Display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
