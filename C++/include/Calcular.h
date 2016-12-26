#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();
        void dibujarMatriz();
        void setMatriz(int fil, int col, int val);
        int getMatriz(int fil, int col);
    protected:

    private:
        int matriz[9][9];
};

#endif // CALCULAR_H
