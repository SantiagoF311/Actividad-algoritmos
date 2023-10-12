#include <iostream>
using namespace std;

int main() // Se abre la funcion principal del programa
{
    int nFilas;    // Se declara la variable del numero de filas
    int nColumnas; // Se declara la variable del numero de columnas

    cout << "ingrese el numero de filas que quiere que su matriz contenga \n";    // Se le pide al ususario a travez de consola que ingrese el numero de filas que contendra la matriz
    cin >> nFilas;                                                                // El usuario ingresa el numero de filas que desea que su matriz tenga
    cout << "ingrese el numero de columnas que quiere que su matriz contenga \n"; // Se le pide al ususario a travez de consola que ingrese el numero de columnas que contendra la matriz
    cin >> nColumnas;                                                             // El usuario ingresa el numero de columnas que desea que su matriz tenga

    int Matriz[nFilas][nColumnas]; // se declara la matriz

    for (int i = 0; i < nFilas; i++) // se inicializa un bucle for que se ejecutara nFilas de la matriz
    {
        for (int j = 0; j < nColumnas; j++) // se inicializa un for dentro del for anterior que se ejecutara nColumnas de la matriz
        {
            cout << "Ingrese el elemento en la fila " << i << " y columna " << j << ": "; // Se le pide al usuario a travez de consola que ingrese el primero elemento de la fila 'i' 
            cin >> Matriz[i][j];                                                          // que seria la primera fila con indice 0 por el mismo funcionamiento del primer bucle for.
        }                                                                                 // Luego el mismo proceso pero con la columna siendo tambien la primera columna con indice 0
    }

    for (int i = 0; i < nFilas; i++) // Se inicializa un nuevo bucle for que funcionara para mostrar la matriz, este tendra un funcionamiento igual al anterior
    {
        for (int j = 0; j < nColumnas; j++) // Se inicializa otro bucle for dentro del anterior que tendra tambien un funcionamiento igual a su anterior correspondiente
        {
            cout << Matriz[i][j] << " "; // La diferencia radica en que no se pedira al usuario que ingrese nada, sino que mostrara valor por valor de cada fila y cada columna
        }                                // El bucle interior acaba cuando se llegue al numero de columnas de la fila y el bucle principal acaba al finalizar la totalida de filas de 
        cout << "\n";                    // la matriz
    }

    return 0;
}
