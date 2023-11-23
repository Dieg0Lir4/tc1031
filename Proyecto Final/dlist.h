
#ifndef DLIST_H
#define DLIST_H

#include "datos.h"
#include <sstream>
#include <string>

using namespace std;

template <class T> class DList;

template <class T> class DNode {

public:
  DNode(T);

  Datos value;
  DNode<T> *next;
  DNode<T> *previous;

  friend class DList<T>;
};

template <class T> DNode<T>::DNode(T val) : value(val), next(0), previous(0) {}

template <class T> class DList {

public:
  DList();

  DNode<T> *head;
  DNode<T> *tail;
  int size;

  void add(T);
  string printPokemons();
  string printMoves();
  void deleteDataFromTop(DNode<T> *,string);
  void deleteDataFromBottom(DNode<T> *,string);

};

template <class T> DList<T>::DList() : head(0), tail(0), size(0) {}

template <class T> void DList<T>::add(T val) {
  DNode<T> *nodo = new DNode<T>(val);
  if (size == 0) {
    head = nodo;
    tail = nodo;
  } else {

    nodo->previous = tail;
    tail->next = nodo;
    tail = nodo;
  }
  size++;
}

template <class T> string DList<T>::printPokemons() {

  stringstream ss;
  DNode<T> *current = head;

  ss << "POKEMONES MAS USADAOS:\n";

  for (int i = 0; i < size; i++) {

    ss << current->value.returnFrecuencia() << " "
       << current->value.returnName();
    current = current->next;
    ss << "\n";
  }

  ss << "\n";

  current = tail;

  ss << "POKEMONES MENOS USADAOS:\n";


  for (int i = 0; i < size; i++) {

    ss << current->value.returnFrecuencia() << " "
       << current->value.returnName();
    current = current->previous;
    ss << "\n";

  }

  ss << "\n";

  string str = ss.str();

  return str;
}

template <class T> string DList<T>::printMoves() {

  stringstream ss;
  DNode<T> *current = head;

  ss << "MOVIMIENTOS MAS USADAOS:\n";

  for (int i = 0; i < size; i++) {

    ss << current->value.returnFrecuencia() << " "
       << current->value.returnName();
    current = current->next;
    ss << "\n";
  }

  ss << "\n";

  current = tail;

  ss << "MOVIMIENTOS MENOS USADAOS:\n";


  for (int i = 0; i < size; i++) {

    ss << current->value.returnFrecuencia() << " "
       << current->value.returnName();
    current = current->previous;
    ss << "\n";

  }

  ss << "\n";

  string str = ss.str();

  return str;
}

template <class T>
void DList<T>::deleteDataFromTop(DNode<T> * nodo, string nombre){

  while (nodo != 0){
    if(nodo->value.returnName() == nombre){
      if(nodo == head){
        head = nodo->next;
        head->previous = 0;
      }else if(nodo == tail){
        tail = nodo->previous;
        tail->next = 0;
      }else{
        nodo->previous->next = nodo->next;
        nodo->next->previous = nodo->previous;
      }
    }
    nodo = nodo->next;
  }

  size--;


}

template <class T>
void DList<T>::deleteDataFromBottom(DNode<T> * nodo,string nombre){




}



#endif