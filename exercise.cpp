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
    miCoche.avanza(distancia,pasajeros);
    miCoche.imprimeAutomovil();
    miCoche.llenaTanque();
    miCoche.imprimeAutomovil();
    return 0;
}