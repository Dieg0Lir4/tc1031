
#ifndef DATOS_H
#define DATOS_H
#include <iostream>
#include <string>
using namespace std;

typedef enum{POKEMON, MOVE} Tipo;

class Datos{


public:
    Datos();
    Datos(string, Tipo, int, int);
    void addFrecuencia();
    int returnFrecuencia();
    string returnName();
    Tipo returnTipo();
    bool operator<(const Datos&);
    bool operator>(const Datos&);

private:
    string name;
    int frecuencia;
    int relevancia;
    Tipo tipo;

};

Datos::Datos(){
    name = "None";
    frecuencia = 0;
    relevancia = 0;
    tipo = POKEMON;
}

Datos::Datos(string name, Tipo tipo, int frecuencia, int relevancia){
    this->name = name;
    this->frecuencia = frecuencia;
    this->relevancia = relevancia;
    this->tipo = tipo;
}


void Datos::addFrecuencia(){
    frecuencia++;
}

int Datos::returnFrecuencia(){
    return frecuencia;
}

string Datos::returnName(){
    return name;
}

Tipo Datos::returnTipo(){
    return tipo;
}

bool Datos::operator<(const Datos& other){
    if(this->frecuencia == other.frecuencia){
        return (this->frecuencia < other.frecuencia);
    }
    else{
        return (this->frecuencia < other.frecuencia);
    }
    
}

bool Datos::operator>(const Datos& other){
    if(this->frecuencia == other.frecuencia){
        return (this->frecuencia > other.frecuencia);
    }
    else{
        return (this->frecuencia > other.frecuencia);
    }
    
}

#endif
