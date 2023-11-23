
#ifndef ORDENAMIENTOS_H
#define ORDENAMIENTOS_H
#include "datos.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Ordenamientos{

  public:
  void swap(vector<Datos> &, int, int);
  void shellSort(vector<Datos> &, int);

};

void Ordenamientos::swap(vector<Datos>& v, int i, int j) {
    Datos temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }

void Ordenamientos::shellSort(vector<Datos> &v, int g) {
    int n = v.size();
    int gap = n / g;
    while (gap > 0) {
      for (int i = gap; i < n; i++) {
        int j = i;
        while (j >= gap && v[j - gap] < v[j]) {
          swap(v, j - gap, j);
          j -= gap;
        }
      }
      gap /= g;
    }
  }

#endif