#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnNewWindow,SIGNAL(clicked()),this,SLOT(open_window2()));
    connect(ui->btnSalir,SIGNAL(clicked()),this,SLOT(close()));// Cierra la ventana
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::open_window2(){
//    if (!nuevaVentana){
             nuevaVentana = new Ventana2(this);
//    }
    nuevaVentana->show();
    nuevaVentana->raise();
    nuevaVentana->activateWindow();
}
