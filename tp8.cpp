/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Resuelva el siguiente enunciado: 
	Dada una serie de valores no nulos, calcular:
     El menor de los impares.
     El promedio de los pares.
     Demostrar que el algoritmo funcionará correctamente (usando comentarios)
*/
principal        // Unidad de programa principal

	entero nro
	,menorImp=0    															//mostraremos el menor Impar
	,sumaPar=0																	//acumulador inicia en 0
	,cantPar=0;																	//cantidad de nº inicia en 0
limpiar;            // Limpia la pantalla.

iterar																			//empieza el bucle
	leerM(nro,"Ingrese un número:");											//ingresar un numero
	salirSi(nro ES 0);															//sale si es nulo
	si(nro%2 !=0) entonces														//no es nulo. El numero es Impar? 
	   si(nro < menorImp O menorImp ES 0)entonces								//es impar y es menor que el número que había guardado o que el inicial
		  menorImp=nro;															//guardo el numero en el valor menorImp
		finSi;													
		sino																	//el número es Par		
		cantPar++; 																//contamos numeros Pares
		sumaPar+=nro;
		finSi
		
	finIterar;

si(menorImp NOES 0) entonces													//si hay al menos un numero impar
   mostrar << "El menor de los números impares es " << menorImp<<salto;			//muestro el menor
   finSi
si(cantPar>0) entonces															//si hay al menos un numero par
   mostrar << "El promedio de los pares es " <<sumaPar/cantPar<<salto;			//mostramos el promedio de los números pares
   finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


