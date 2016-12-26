#include <iostream>
#include "Calcular.h"

using namespace std;

void mostrarMatriz(Calcular *obj)
{
    // recorro con el primer ciclo las filas de la matriz (i)
    for (int i = 0; i < 9; i++)
    {
        // recorro con el segundo ciclo las columnas de la matriz (j)
        for (int j = 0; j < 9; j++)
        {
            // muestro la matriz en pantalla
            cout << obj->getMatriz(i, j) << " ";
        }
        // salto de linea
        cout << endl;
    }
}

int main(void)
{
    // se crea un objeto de la clase Calcular (Instanciaciación)
    Calcular *obj = new Calcular();
    // llamo al metodo para dibujar la matriz
    obj->dibujarMatriz();
    // muestro la matriz y le paso el objeto de la clase calcular como parametro
    mostrarMatriz(obj);
}
