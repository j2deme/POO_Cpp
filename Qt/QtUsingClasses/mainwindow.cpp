#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnGuardar,SIGNAL(clicked()),this,SLOT(openDisplay()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::openDisplay(){
    //Creamos el objeto
    perro = new Perro();
    perro->setNombre(ui->txtNombre->text());
    perro->setRaza(ui->txtRaza->text());
    perro->setEdad(ui->sbEdad->value());

    /* Creamos el dialogo y enviamos el objeto como parametro,
     * de esta forma evitamos que se habra mas de un dialogo */
    Display display(perro,this);
    if(display.exec() == QDialog::Accepted){
        perro = display.getModel();
    }
    qDebug() << "Perro @ Main" << perro->getNombre();
    qDebug() << "Perro @ Display" << display.getModel()->getNombre();
    //Actualizamos cualquier cambio hecho en el dialogo
    update();
}

void MainWindow::update(){
    qDebug("Nombre: %s Edad %d Raza: %s",qPrintable(this->perro->getNombre()),this->perro->getEdad(),qPrintable(this->perro->getRaza()));

    ui->txtNombre->setText(this->perro->getNombre());
    ui->txtRaza->setText(this->perro->getRaza());
    ui->sbEdad->setValue(this->perro->getEdad());
}
