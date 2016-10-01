/*
    program1.h es el archivo de traducción de seudocódigo a C++
*/
#include <program1.h>
/**
*   Enunciado: 
	calcular las raices de: a.x²+bx+c = 0

Son 6 casos!! REVER URGENTE!
*/
principal                                 // Unidad de programa principal
	real a,b,c,d;

limpiar;
	leerM(a, "a");
	leerM(b, "b");
	leerM(c, "c");
	
	si (a NOES 0.0) entonces  													//2ª grado
		d= b*b-4*a*c; 															//discriminante
		si(d >= 0) entonces   													// 2 raices reales y distintas
		   mostrar << (-b+XalaY(d,0.5))/(2*a)  << tabulado;
		   mostrar << (-b-XalaY(d,0.5))/(2*a)  << salto;												
			sino       															// complejos conjugados
				mostrar << "("<<(-b/(2*a))  << ";" << XalaY(-d,0.5)/(2*a)  << "i)" << tabulado;
				mostrar << "("<<(-b/(2*a))  << ";" << -XalaY(-d,0.5)/(2*a)  << "i)" << salto;
			finSi
		sinoSi (b NOES 0.0) entonces 											//1ª grado
			mostrar << -c/b << salto;
		sinoSi (c ES 0.0) entonces 												// infinitas soluciones
			mostrar << "Infinitas soluciones cuantificables" << salto;
		sino  //Error
			mostrar << "Error" << salto;
		finSi

pausa;                                                          				// Pausa antes de finalizar. 
finPrincipal                                                    				// Fin de unidad de programa principal


