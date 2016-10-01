/*

*/
#include <program1.h>
/**
*    Enunciado: dada una secuencia de valores positivos, calcular el máximo de ellos. 
*/
principal                                                       // Unidad de programa principal
	real dato
	,maximo=(-1.0);
	
limpiar;            // Limpia la pantalla.

iterar 
	leerM(dato,"Valor: ");
	salirSi(dato <=0-0); //sale si no es positivo
	si(dato>maximo) entonces //la condicion se cumple al menos una vez
	   maximo= dato; // guarda el nuevo valor maximo. 
	finSi
	finIterar;

si(maximo NOES(-1.0)) entonces //si hay un valor calculado (valido)
			   mostrar << "El màximo es " << maximo << salto; 
	finSi

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


