/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Leer 3 valores y Mostrarlos ordenados de menor a mayor.
*/
principal          // Unidad de programa principal
	real uno,dos,tres;
limpiar;            // Limpia la pantalla.
leerM(uno,"Ingresar el primer numero: ");
leerM(dos, "Ingresar el segundo numero: ");
leerM(tres, "Ingresar el tercer numero: ");

si (uno <= dos Y uno <= tres) entonces
	mostrar << uno << " "; 
	si (dos <= tres) entonces
		mostrar << dos << " " << tres;
		sino
		mostrar << tres << " " << dos;
		finSi
	sino
		si(dos <= tres) entonces
		   mostrar << dos << " " << tres;
		si (uno <= tres) entonces
			mostrar << uno << " " << tres;
			sino 
			mostrar << tres << " " << uno;
			finSi
		sino
		mostrar << tres << " ";
			si (uno <= dos ) entonces
			mostrar << uno << " " << dos;
			sino
			mostrar << dos << " " << uno; 
			finSi
		finSi
	finSi
mostrar << salto; 
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


