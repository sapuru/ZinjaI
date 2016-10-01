/*

*/
#include <program1.h>
/**
*    Enunciado: Construya una expresión lógica con no menos de 10 operadores y 
	resuélvala, especificando sus condiciones de validez.
*/
principal                                                       // Unidad de programa principal
	real a, b, c, d;
	real vale1,vale2,vale3,vale4;
	real resultado;
a = -32;
b = 25;
c = 8;
d = 70;
limpiar;            // Limpia la pantalla.

// expresión de no menos de 10 operadores: 
// total = (b^2) + (a - (c * d)) / ((d^3)-(b^4)) + (b / 8 * a / 4) ;
// separo en términos: 
//(a^2) + 
//(b - (c * d))  /
// ((c^3)-(d^4)) +


vale1 = (XalaY(b,2));
vale2 = (a - (c * d));
vale3 = ((XalaY(d,3))-(XalaY(b,2)));
vale4 = (b / 8 * a / 4);
resultado = (vale1 + vale2) / (vale3 + vale4);

mostrar << "El resultado es: " << resultado << salto;


pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


