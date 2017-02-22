/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
#include "vectores.h"
/**
*    Enunciado: Dados dos vectores reales de 5 elementos cada uno, obtener otro intercalando los elementos de cada uno y calcular sus
                desviaciones típicas.
*/
procedimiento intercalar(entero,real[],real[],real[]);
funcion real promedio(entero,real[]);
funcion real desvioStd(entero,real[]);

constante entero T = 3;

principal                                                       // Unidad de programa principal
real v1[T],v2[T],v3[2*T];
limpiar;                                                        // Limpia la pantalla.
leeVec(T,v1);
leeVec(T,v2);
intercalar(T,v1,v2,v3);
muestVec(T*2,v3);
mostrar << promedio(T,v1) << tabulado 
        << promedio(T,v2) << tabulado 
        << promedio(T*2,v3) << salto;
mostrar << desvioStd(T,v1) << tabulado 
        << desvioStd(T,v2) << tabulado 
        << desvioStd(T*2,v3) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

procedimiento intercalar(entero tam, real vec1[], real vec2[], real vec3[]) {
entero sub1 = 0
      ,sub2 = 0
      ,sub3;
variar(sub3,0,2*tam-1,1)
    vec3[sub3] = fSi(esPar(sub3),vec1[sub1++],vec2[sub2++]);
    finVariar
}

funcion real desvioStd(entero tam, real v[]) {
real resul
    ,media = promedio(tam,v)
    ,suma2 = 0;
entero i;
variar(i,0,tam-1,1)
    suma2 += (v[i]-media) * (v[i]-media);
    finVariar
resul = sqrt(suma2 / tam);
regresa(resul);
}

funcion real promedio(entero tam, real v[]) {
real resul
    ,suma = 0;
entero i;
variar(i,0,tam-1,1)
    suma += v[i];
    finVariar
resul = (suma / tam);
regresa(resul);
}