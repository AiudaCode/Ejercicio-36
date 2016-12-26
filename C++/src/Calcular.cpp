#include "Calcular.h"

Calcular::Calcular()
{
    //ctor
}

Calcular::~Calcular()
{
    //dtor
}

// implementacion de los metodos Setter y Getters de los atributos de la clase Calcular
void Calcular::setMatriz(int fil, int col, int val)
{
    // le asignare a la matriz el valor de val, en la posicion fil, col que se hayan pasado como parametro
    matriz[fil][col] = val;
}

int Calcular::getMatriz(int fil, int col)
{
    // retornare el valor que haya en la fil, col que se haya pasado como parametro
    return matriz[fil][col];
}


// implemnetacion del metodo para dibujar la matriz
void Calcular::dibujarMatriz()
{
    // declarare dos variables temporal de tipo entero temp_1 y temp_2
    int temp_1, temp_2;

    // recorrere con el primer ciclo for las filas (i)
    for (int i = 0; i < 9; i++)
    {
        // se le asigna a temp_1 el valor actual de i sumado con 1
        temp_1 = i+1;
        // se le asigna a temp_2 el valor de 2
        temp_2 = 2;
        // recorrrere con el segundo ciclo for las columnas (j)
        for (int j = 0; j < 9; j++)
        {
            // si el valor actual de i es igual a cero
            if (i == 0)
            {
                // entonces en la fila i, columna j actual, se le asignara el valor de temp_1
                setMatriz(i, j, temp_1);
                // incrementamos en 1 el valor de temp_1
                temp_1++;
            }
            // y sino, si el valor de temp_1 es mayor o igual a 1
            else if (temp_1 >= 1)
            {
                // entonces en la fila i, columna j actual, se le asignara el valor de temp_1
                setMatriz(i, j, temp_1);
                // decrementamos en 1 el valor de temp_1
                temp_1--;
            }
            else
            {
                // sino en la fila i, columna j actual, se le asignara el valor de temp_2
                setMatriz(i, j, temp_2);
                // incrementamos en 1 el valor de temp_2
                temp_2++;
            }
        }
    }
}
