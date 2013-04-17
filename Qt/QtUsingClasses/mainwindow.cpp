#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnGuardar,SIGNAL(clicked()),this,SLOT(on_btnGuardar_clicked()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_btnGuardar_clicked(){
    Perro *mascota = new Perro();
    mascota->setName(ui->txtNombre->text().toUtf8().constData());
    mascota->setRaza(ui->txtRaza->text().toUtf8().constData());
    mascota->setEdad(ui->sbEdad->value());

    ventana = new Display(mascota,this);
    ventana->show();
    ventana->raise();
    ventana->activateWindow();

    //ui->txtArea->setPlainText(QString::fromStdString(mascota->getName() + mascota->getRaza()));
}
