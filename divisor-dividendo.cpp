/*
    program1.h es el archivo de traducci�n de seudoc�digo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Leer 2 valores y: Si se puede, dividir el primero por el segundo.
*/
principal  // Unidad de programa principal

entero uno,dos;
	
limpiar;            // Limpia la pantalla.
leerM(uno, "Ingresar un n�mero entero: ");
leerM(dos, "Ingresar otro n�mero entero: ");

si (uno > dos) entonces
	
	mostrar << uno/dos; 
	sino
	mostrar << "No es divisible en el Conjunto de los Enteros ";
	finSi
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


