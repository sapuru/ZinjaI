/*

*/
#include <program1.h>
/**
*    Enunciado: dado un número determinar:
1- Si tiene 1 dígito
2- Si tiene 2 dígitos
3- Si tiene 3 dígitos
4- Si tiene 4 dígitos o más. 
*/
principal                                                       // Unidad de programa principal
entero numero,aux;
limpiar;            // Limpia la pantalla.
leerM(numero,"Ingrese un número");

si(numero < 0) entonces
   aux=-numero;
	sino 
	aux=numero;
finSi

si (aux >= 1000) entonces
	mostrar << "El número ingresado tiene 4 o más dígitos" << salto;
	sinoSi(aux >= 100) entonces
	mostrar << "El número ingresado tiene 3 dígitos" << salto;
	sinoSi(aux >= 10) entonces
	mostrar << "El número ingresado tiene 2 dígitos" << salto;
	sino
	mostrar << "El número ingresado tiene 1 dígito" << salto;
finSi

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


