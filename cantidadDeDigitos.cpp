/*

*/
#include <program1.h>
/**
*    Enunciado: dado un n�mero determinar:
1- Si tiene 1 d�gito
2- Si tiene 2 d�gitos
3- Si tiene 3 d�gitos
4- Si tiene 4 d�gitos o m�s. 
*/
principal                                                       // Unidad de programa principal
entero numero,aux;
limpiar;            // Limpia la pantalla.
leerM(numero,"Ingrese un n�mero");

si(numero < 0) entonces
   aux=-numero;
	sino 
	aux=numero;
finSi

si (aux >= 1000) entonces
	mostrar << "El n�mero ingresado tiene 4 o m�s d�gitos" << salto;
	sinoSi(aux >= 100) entonces
	mostrar << "El n�mero ingresado tiene 3 d�gitos" << salto;
	sinoSi(aux >= 10) entonces
	mostrar << "El n�mero ingresado tiene 2 d�gitos" << salto;
	sino
	mostrar << "El n�mero ingresado tiene 1 d�gito" << salto;
finSi

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


