
// =========================================================
// File: main.cpp
// Author: Diego Lira García - A01710369
// Date: 17/9/2023
// Description: El archivo "main.cpp" contiene el código
// principal del programa, que tiene como objetivo analizar
// un archivo de texto que describe equipos de Pokémon y sus
// movimientos. El programa lee el archivo línea por línea,
// identificando Pokémon, movimientos y equipos, y realiza un
// seguimiento de su frecuencia de aparición utilizando mapas.
// Al final del análisis, determina cuál es el Pokémon más
// utilizado y los movimientos más comunes en los equipos.
// Estos resultados se imprimen en la consola, proporcionando
// una visión general de la composición de los equipos de Pokémon
// en el archivo. El código también incluye manejo de errores
// en caso de que el archivo no se pueda abrir.
// =========================================================

#include "datos.h"
#include "ordenamientos.h"
#include "dlist.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

  map<string, Datos> datitos;
  vector<Datos> vectorPokemon;
  Ordenamientos ordenador;
  ifstream inputFile;
  ofstream outputFile;
  DList<Datos> pokemonList;
  DList<Datos> moveList;

  if (argc != 3) {
    cout << "usage: " << argv[0] << " input_file output_file\n";
    return -1;
  }

  inputFile.open(argv[1]);
  if (!inputFile.is_open()) {
    cout << argv[0] << ": File \"" << argv[1] << "\" not found\n";
    return -1;
  }

  outputFile.open(argv[2]);
  if (!outputFile.is_open()) {
    cerr << "Error: No se pudo abrir el archivo de salida \"" << argv[2]
         << "\"\n";
    inputFile.close();
    return 1;
  }

  string linea;
  int cantidad;

  inputFile >> cantidad;

  getline(inputFile, linea);

  while (getline(inputFile, linea)) {

    cantidad--;

    for (int i = 0; i < 6; i++) {
      getline(inputFile, linea);
      Datos dato(linea, POKEMON, datitos[linea].returnFrecuencia(),
                 cantidad + 1);
      dato.addFrecuencia();
      datitos[linea] = dato;

      for (int j = 0; j < 4; j++) {
        getline(inputFile, linea);
        Datos dato(linea, MOVE, datitos[linea].returnFrecuencia(),
                   cantidad + 1);
        dato.addFrecuencia();
        datitos[linea] = dato;
      }
    }
  }

  // Imprimir todos nombre de mi datitos
  for (map<string, Datos>::iterator it = datitos.begin(); it != datitos.end();
       it++) {
    vectorPokemon.push_back(it->second);
  }

  ordenador.shellSort(vectorPokemon,2);

  for (int i = 0; i < vectorPokemon.size(); i++) {

    if(vectorPokemon[i].returnTipo() == POKEMON){
      pokemonList.add(vectorPokemon[i]);
    }else{
      moveList.add(vectorPokemon[i]);
    }

  }

  bool modificar = true;

  while(modificar){

    cout << "¿QUIERES MODIFCAR LA LISTA?" << endl;
    cout << "[e] Eliminar pokemon" << endl;
    cout << "[s] Salir" << endl;

    string respuesta;
    cin >> respuesta;

    if(respuesta == "e"){
      cout << "¿Que pokemon quieres eliminar?" << endl;
      string pokemon;
      cin >> pokemon;

      pokemonList.deleteDataFromTop(pokemonList.head,pokemon);

      cout << "Modificada" << endl << endl;
    }else{
      modificar = false;
    }
  }




  outputFile << pokemonList.printPokemons();
  outputFile << moveList.printMoves();






  // Cierre de archivos.
  inputFile.close();
  outputFile.close();

  cout << "El contenido del archivo se ordenó exitosamente.\n";
  return 0;


}
