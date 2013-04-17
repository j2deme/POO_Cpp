/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblNombre;
    QLineEdit *txtNombre;
    QPushButton *btnGuardar;
    QPlainTextEdit *txtArea;
    QLineEdit *txtRaza;
    QLabel *lblRaza;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblNombre = new QLabel(centralWidget);
        lblNombre->setObjectName(QStringLiteral("lblNombre"));
        lblNombre->setGeometry(QRect(30, 20, 67, 17));
        txtNombre = new QLineEdit(centralWidget);
        txtNombre->setObjectName(QStringLiteral("txtNombre"));
        txtNombre->setGeometry(QRect(100, 20, 113, 27));
        btnGuardar = new QPushButton(centralWidget);
        btnGuardar->setObjectName(QStringLiteral("btnGuardar"));
        btnGuardar->setGeometry(QRect(280, 170, 99, 27));
        txtArea = new QPlainTextEdit(centralWidget);
        txtArea->setObjectName(QStringLiteral("txtArea"));
        txtArea->setGeometry(QRect(280, 10, 104, 78));
        txtRaza = new QLineEdit(centralWidget);
        txtRaza->setObjectName(QStringLiteral("txtRaza"));
        txtRaza->setGeometry(QRect(100, 60, 113, 27));
        lblRaza = new QLabel(centralWidget);
        lblRaza->setObjectName(QStringLiteral("lblRaza"));
        lblRaza->setGeometry(QRect(30, 60, 41, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lblNombre->setText(QApplication::translate("MainWindow", "Nombre", 0));
        btnGuardar->setText(QApplication::translate("MainWindow", "Guardar", 0));
        lblRaza->setText(QApplication::translate("MainWindow", "Raza", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
