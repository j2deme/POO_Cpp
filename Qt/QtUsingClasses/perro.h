#include <iostream>
#include <QObject>
#include <QString>
using namespace std;
#ifndef PERRO_H
#define PERRO_H

class Perro : public QObject{
    Q_OBJECT
public:
    explicit Perro(QObject* parent = 0);
    virtual ~Perro();
    QString getNombre();
    QString getRaza();
    int getEdad();
public slots:
    void setNombre(QString nombre);
    void setRaza(QString raza);
    void setEdad(int edad);
signals:
    void nombreChanged(QString nombre);
    void razaChanged(QString raza);
    void edadChanged(int edad);
private:
    QString nombre;
    QString raza;
    int edad;
};

#endif // PERRO_H
