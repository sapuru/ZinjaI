/*
    program1.h es el archivo de traducción de seudocódigo a C++
*/
#include <program1.h>
/**
*    Enunciado:dada una serie de valores no nulos calcular:
	El mayor de los pares
	El promedio de los impares
	Demostrar que el algoritmo funcionará correctamente. 
*/
principal  // Unidad de programa principal

	entero nro
	,mayorPar=1
	,sumaImp=0
	,cantImp=0;
limpiar;            // Limpia la pantalla.

iterar
	leerM(nro,"Ingrese número:");												//-inf < nro < +inf
	salirSi(nro ES 0);															//sale si es nulo
	si(nro%2 ==0) entonces														// es par y no es nulo
		si(nro > mayorPar O mayorPar ES 1)										//es el mas grande o es el primero
		   mayorPar=nro;
	   sino																		//es impar
		cantImp++;																//cuento la cantidad de impares ingresados
		sumaImp+=nro;															//acumulo los numeros ingresados y los guardo en la variable nro
	   finSi
	finIterar;

si (mayorPar NOES 1) entonces
	mostrar << "El mayor de los pares es " << mayorPar <<salto;					//muestro el mayor de los pares ingresados
	finSi

si (cantImp>0) entonces
	mostrar << "El promedio de los impares es " << (real)sumaImp/cantImp <<salto;		//"casteo" para hacer la operación en Reales y muestro el promedio de los impares ingresados
	finSi
	
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


