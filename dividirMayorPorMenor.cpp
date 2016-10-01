/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
 Leer 2 valores y Dividir el mayor de los dos por el menor.
*/
principal                                                       // Unidad de programa principal

	real uno,dos;

limpiar;            // Limpia la pantalla.

leerM(uno, "Ingresar un número");
leerM(dos, "Ingresar otro número");

si (uno > dos) entonces
	mostrar << uno/dos;
	sino
	mostrar << dos/uno;
	finSi;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


