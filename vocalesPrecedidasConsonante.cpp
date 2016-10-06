/*

*/
#include <program1.h>
/**
*    Enunciado: 
    Dada un texto terminado en punto, calcular:
	Cantidad de vocales precedidas por consonante.
*/
principal                                                       // Unidad de programa principal
caracter tecla;
entero cantVocal=0;
entero consonante=0;
limpiar;            // Limpia la pantalla.
mostrar << "Ingresar texto terminando con '.'" << salto;

iterar
	leeTecConEco(tecla);
	salirSi(tecla ES '.');
	si (esConso(tecla)) entonces
		consonante=1;
	finSi
	si (consonante ES 1 Y esVocal(tecla)) entonces
		cantVocal++;
	finSi
finIterar;
	
mostrar << "La cantidad de vocales precedidas por consonante ingresadas es: " << cantVocal <<salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


