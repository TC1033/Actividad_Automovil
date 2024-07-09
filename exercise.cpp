#include "Automovil.hpp"
#include <iostream>
using namespace std;

int main()
{
    cout<<"\nSistema de control de uso de autos\n";
    Automovil miCoche;
    miCoche.imprimeAutomovil();
    cout<<"\n¿Qué distancia quieres recorrer?: ";
    float distancia;
    cin>>distancia;
    cout<<"¿Cuantos pasajeros viajaran?: ";
    int pasajeros;
    cin>>pasajeros;
    // Prueba todos tus métodos que trabajen adecuadamente
    return 0;
}