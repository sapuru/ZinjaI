/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Leer 3 valores y Determinar cual (primero, segundo o tercer valor) es el mayor. uno 56 dos 94 tres 25
*/
principal                                                       // Unidad de programa principal

	real uno,dos,tres;
	
limpiar;            // Limpia la pantalla.
leerM(uno,"Ingresar el primer numero: ");
leerM(dos, "Ingresar el segundo numero: ");
leerM(tres, "Ingresar el tercer numero: ");

si ((uno > dos) && (uno > tres)) entonces
	mostrar << uno << " es el número mayor";
	sino
		si ((dos > uno) && (dos > tres)) entonces
			mostrar << dos << " es el número mayor";
		sino
			mostrar << tres << " es el número mayor";
		finSi;
	finSi;

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


