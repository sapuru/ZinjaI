/*
Pseudocódigo @sapuru
*/
#include <program1.h>
/**
*    Enunciado: 
	
	Dada un texto terminado en punto, calcular:
	Cantidad de letras 's'

*/
principal                                                       // Unidad de programa principal
	caracter tecla;
	entero cantS=0;
limpiar;            // Limpia la pantalla.
mostrar << "Ingresar texto terminando con '.'" << salto;
iterar
	leeTecConEco(tecla);
	salirSi(tecla ES '.');
	si (tecla ES 's') entonces
		cantS++;
		finSi
	finIterar;
mostrar << " la cantidad de 's' es " << cantS << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


