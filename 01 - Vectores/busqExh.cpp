#include <program1.h>

funcion entero dondeExh(entero tam,real vAB, real v[]) {
entero resul = tam - 1;
mientras (resul >= 0 Y v[resul] NOES vAB)
    resul--;
    finMientras
regresa(resul);
}

funcion logico estaExh(entero tam, real vAB, real v[]) {
logico resul = dondeExh(tam,vAB,v) >= 0;
regresa(resul);
}