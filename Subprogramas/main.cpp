/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
#include "../../leeVar.h"
#include "../../leeVec.h"
#include "../../muestVec.h"
#include "../../mayorVec.h"
/**
*    Enunciado: Dada una secuencia de hasta 10 valores entre -100 y +100, mostrar el mayor.
*/

constante entero T=10, VMINIMO = -100, VMAXIMO = +100;

principal                                                       // Unidad de programa principal
real valores[T];
entero cant;
limpiar;                                                        // Limpia la pantalla.
leeVar(cant,1,T,"Cantidad de valores:");
leeVec(cant,valores);
muestVec(cant,valores);
mostrar << "El mayor es " << mayorVec(cant,valores) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal