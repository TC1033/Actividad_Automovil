#include <cmath>
// Agrega el include del header de la clase  

Automovil::Automovil(){
    marca = "Indefinida";
    modelo = 2000;
    km = 0;
    numPasajeros = 5;
    rendimiento = 11.5;
    capacidadTanque = 50;
    litrosActuales = 10;
}

Automovil::Automovil(std::string _marca, int _modelo, int _numPasajeros, float _rendimiento, int _capacidadTanque){
   //Completa el constructor

}

std::string Automovil::getMarca() const{
    return marca;
}

// Agrega los getters que faltan

void Automovil::setMarca(std::string _marca){
    marca = _marca;
}

// Agrega los setters que faltan

void Automovil::imprimeAutomovil(){
    //Completa el método
}

void Automovil::avanza(float distancia, int pasajeros){
    //Completa el método
}

//Agrega las implementaciones de los métodos que faltan