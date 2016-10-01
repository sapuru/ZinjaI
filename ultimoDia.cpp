/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dado un año y un mes, muestre la fecha del útimo día de ese mes y ese año.
*/
principal                                                       // Unidad de programa principal
entero mes,anio;
bool bisiesto;
limpiar;            // Limpia la pantalla.
leerM(mes, "Ingrese el mes");
leerM(anio, "Ingrese el año");


bisiesto= anio%4 == 0 && (!anio%100 == 0 || anio%400 ==0); 

si (mes==1 || mes == 4 || mes == 6 || mes == 9 || mes == 11) entonces
	mostrar << "La fecha es 30/"<<mes<<"/"<< anio << salto;
	sino
		si (mes==3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) entonces
			mostrar << "La fecha es 31/" <<mes<<"/"<<anio << salto;
		sino
			si (mes == 2 && bisiesto==true) entonces
				mostrar << "La fecha es 29/" <<mes<<"/"<<anio << salto;
			sino
				mostrar << "La fecha es 28/" <<mes<<"/"<<anio << salto;
			finSi
		finSi
	
	finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


