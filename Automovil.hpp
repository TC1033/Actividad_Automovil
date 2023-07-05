//Agrega la directiva de preprocesado para que no se duplique en memoria el header

#include <iostream>

class Automovil{
    public:
        Automovil();
        Automovil(std::string,int,int,float,int);
        std::string getMarca() const; 
        //Agrega los getters que faltan

        void setMarca(std::string); 
        //Agrega los setters que faltan

        void imprimeAutomovil();
        void avanza(float,int);
        void llenaTanque();
        int calculaConsumo(float, int);
    private:
        std::string marca;
        int modelo;
        float km;
        int numPasajeros;
        float rendimiento;
        int capacidadTanque;
        float litrosActuales;
};