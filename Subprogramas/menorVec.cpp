#include <program1.h>
plantilla(Tipo)
funcion Tipo mayorVec(entero t,Tipo v[]) {
Tipo resul = v[0];
entero ind;
variar(ind,1,t-1,1)
    si(v[ind] < resul) entonces
        resul = v[ind];
        finSi
    finVariar
regresa(resul);
}

implementa funcion real mayorVec(entero,real[]);
//implementa funcion entero mayorVec(entero,entero[]);
