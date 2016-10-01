/*

*/
#include <program1.h>
/**
*    Enunciado: Resolver: a - b * c ^ d >= a * b ^ ( b * c - a / d) && b ^ 2 - 4 * a * c >= d;
*/
principal                                                       // Unidad de programa principal
	
real a, b, c, d;
real primero,segundo,tercero,cuarto;
real resultado;

a=35;
b=40;
c=10;
d=8;

limpiar;            // Limpia la pantalla.

primero = a - ( b * (XalaY(c,d)) );
segundo = a * XalaY(b,(b*(c-a)/d));
tercero = XalaY(b,2);
cuarto = d;

resultado = primero >= ( segundo Y tercero ) >= cuarto;
mostrar << "El resultado es: " << fSi ((primero >= ( segundo Y tercero ) >= cuarto),"VERDADERO","FALSO") << salto;


pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


