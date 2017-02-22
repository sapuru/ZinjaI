#include <program1.h>
#include "leeVar.h"
procedimiento leeVec(entero t,real v[]) {
entero ind;
variar(ind,0,t-1,1)
    leerM(v[ind],"Valor("<<ind+1<<"):");
    finVariar
}

procedimiento leeVec(entero t,real v[], real vMin, real vMax) {
entero ind;
variar(ind,0,t-1,1)
    leeVar(v[ind],vMin,vMax,"Valor("+aCadena(ind)+")");
    finVariar
}
