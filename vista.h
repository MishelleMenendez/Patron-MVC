#ifndef VISTA_H
#define VISTA_H

#include <iostream>

#include "controlador.h"
#include "estudiante.h"
using namespace std;

class Vista
{
private:
    Controlador *controlador;
    Estudiante *modelo;
public:
    Vista();
    void actualizarNota();
    void imprimir();
    void estado();
    void puntosExtra();
};

#endif // VISTA_H
