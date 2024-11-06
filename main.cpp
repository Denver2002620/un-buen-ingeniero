#include<iostream>
#include<vector>
#include<utility>
#include "main.h"
using namespace std;
int main(){
    cout << "Cantidad de movimientos válidos:\n";
    cout << "Movimientos | Posibilidades válidas\n";
    for (int i = 1; i <= 5; ++i) { // Cambia el rango según lo necesites
        cout << i << "             | " << calcularMovimientos(i) << endl;
        return 0;
}
