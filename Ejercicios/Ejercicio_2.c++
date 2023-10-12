#include <iostream>
using namespace std;

int main() // Se abre la funcion principal del programa
{
    const int filas = 3; // Se declara la constante de filas
    const int columnas = 3; // Se declara la constante de columnas
    int matriz[filas][columnas] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Se declara la matriz con el numero de filas y columnas ya antes declaradas, por lo que se pone con esas mismas constantes

    for (int i = 0; i < filas; ++i) // Se inicializa un bucle que termina cuando la variable i llegue a ser igual a la constante de filas declarada anteriormente
    {
        for (int j = 0; j < columnas; ++j) // Se inifializa un bucle dentro del otro bucle que terminara cuando la variable i llegue a ser igual a la constante de columnas declarada anteriormente
        {
            cout << matriz[i][j] << " "; // se muestra cada fila con sus respectivas columnas
        }
        cout << "\n"; // Simplemente es un salto en cada linea
    }

    return 0;
}
