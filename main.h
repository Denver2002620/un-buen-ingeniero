//
// Created by Usuario on 11/6/2024.
//

#ifndef MAIN_H
#define MAIN_H

// Definimos los movimientos del caballo como pares de (fila, columna)
vector<pair<int, int>> movimientosPosibles = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

// Mapa que representa el teclado numérico
vector<pair<int, int>> teclado = {
    {3, 1}, // 0
    {0, 0}, // 1
    {0, 1}, // 2
    {0, 2}, // 3
    {1, 0}, // 4
    {1, 1}, // 5
    {1, 2}, // 6
    {2, 0}, // 7
    {2, 1}, // 8
    {2, 2}  // 9
};

int contarMovimientos(int posicion, int pasos) {
    if (pasos == 0) {
        return 1; // Movimiento exitoso
    }

    int totalMovimientos = 0;
    int fila = teclado[posicion].first;
    int col = teclado[posicion].second;

    // Iterar sobre los movimientos posibles del caballo
    for (auto mv : movimientosPosibles) {
        int nuevaFila = fila + mv.first;
        int nuevaCol = col + mv.second;

        // Verificar si la nueva posición está dentro del teclado
        for (int i = 0; i < 10; ++i) {
            if (teclado[i] == make_pair(nuevaFila, nuevaCol)) {
                totalMovimientos += contarMovimientos(i, pasos - 1);
            }
        }
    }
    return totalMovimientos;
}

int calcularMovimientos(int movimientos) {
    int total = 0;
    // Iterar sobre todos los números del teclado
    for (int i = 0; i < 10; ++i) {
        total += contarMovimientos(i, movimientos);
    }
    return total;
}



#endif //MAIN_H
