/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Leer un valor y determinar si es par o impar.
*/
principal                                                       // Unidad de programa principal

	int numero;
	
limpiar;            // Limpia la pantalla.
leerM(numero, "Ingrese un número");

si (numero%2 == 0 ) entonces
	mostrar << numero << " es par";
	sino
	mostrar << numero << " es impar";
	finSi;
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


