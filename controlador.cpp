#include "controlador.h"
#include <iostream>

float Controlador::promedio()
{
    return (modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3.0;
}
Controlador::Controlador()
{
    this->modelo = new Estudiante("Ariel", 2, 7, 9);
}
void Controlador::puntosExtra(){
    if (modelo->getNota1()< modelo->getNota2() && modelo->getNota1()<modelo->getNota3()){
        modelo->setNota1(modelo->getNota1()+2);
    }
    else if (modelo->getNota2()< modelo->getNota1() && modelo->getNota2()<modelo->getNota3()){
        modelo->setNota2(modelo->getNota2()+2);
    }
    else if(modelo->getNota3()< modelo->getNota1() && modelo->getNota3()<modelo->getNota2()){
        modelo->setNota3(modelo->getNota3()+2);
    }

    cout<<"Puntos Extra agregados correctamente!\n";
}
void Controlador::actualizaNota(int nota, int valor)
{
    switch (nota) {
    case 1:
        modelo->setNota1(valor);
        break;
    case 2:
        modelo->setNota2(valor);
        break;
    case 3:
        modelo->setNota3(valor);
        break;
    }
}

string Controlador::estado()
{ 
    string estado;
    if (this->promedio() >= 7) {
        estado = "Su estado es Aprobado \n"  ;
    } else if (this->promedio() >=6) {
        estado = "Su estado es Supletorio \n";
    } else if (this->promedio() >=5) {
        estado ="Su estado es Remedial \n ";
    } else {
        estado = "Su estado es Reprobado \n";
    }
    return estado;
}

string Controlador::visualizar()
{
    string str = "Estudiante: " + modelo->getNombre() + "\n" +
            " Nota 1: " + to_string(modelo->getNota1()) + "\n" +
            " Nota 2: " + to_string(modelo->getNota2()) + "\n" +
            " Nota 3: " + to_string(modelo->getNota3()) + "\n" +
            " Promedio: " + to_string(promedio()) + "\n";
    return str;
}














