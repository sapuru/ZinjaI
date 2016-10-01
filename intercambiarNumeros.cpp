/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: dados dos valores, intercambiarlos
*/

procedimiento intercambiar(real porRef,real porRef);

principal                                                       // Unidad de programa principal
real uno,dos;
limpiar;            // Limpia la pantalla.
leerM(uno,"Valor de 1");
leerM(dos,"Valor de 2");
intercambiar(uno,dos);
mostrar << uno << " . " << dos <<salto; 
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

procedimiento intercambiar(real porRef a, real porRef b) {
	real c = a;
	a = b;
	b = c;
}
