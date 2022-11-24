#include <iostream>

// #include "estudiante.h"
// #include "controlador.h"

#include "vista.h"

using namespace std;

int main()
{
    Vista *vista = new Vista();

    int opc;
    do{
        cout << "\n\t---- REGISTRO DE NOTAS ----" << endl;
        cout << "1. Mostrar notas" << endl;
        cout << "2. Mostrar estado" << endl;
        cout << "3. Actualizar nota" << endl;
        cout<<  "4. Añadir puntos extra a la nota mas baja"<<endl;
        cout << "5. Salir" << endl;
        do {
            cout << "\nIngrese su opción: ";
            cin >> opc;
            cout << endl;
        }while(opc < 1 || opc > 5);
        switch (opc) {
        case 1:
            vista->imprimir();
            break;
        case 2:
            vista->estado();
            break;
        case 3:
            vista->actualizarNota();
            break;
        case 4:
            vista->puntosExtra();
            break;
        case 5:
            cout << "Gracias !!" << endl;
            break;
        default:
            cout << "Opción no válida!" << endl;
        }
    }while(opc != 5);

    return 0;
}





