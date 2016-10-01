/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dado un año, un mes y un dí­a, calcule el número de días transcurridos desde el 31 de diciembre del año anterior.
*/
principal                  // Unidad de programa principal
entero anio,mes,dia;
logico bisiesto;
limpiar;            // Limpia la pantalla.
leerM(anio, "Ingrese el año: ");
leerM(mes, "Ingrese el mes: ");


bisiesto= anio%4 == 0 && (!anio%100 == 0 || anio%400 ==0); 

si(mes>=1 Y mes<=12) entonces
   bisiesto= anio%4 == 0 && (!anio%100 == 0 || anio%400 ==0); 
   leerM(dia, "Ingrese el día ");
   si (dia>=1 Y (( ((mes ES 1 O mes ES 3 O mes ES 5 O mes ES 7 O mes ES 8 O mes ES 10 O mes ES 12) Y dia <=31) 
					O ((mes ES 4 O mes ES 6 O mes ES 9 O mes ES 11) Y dia<=30)
					O (mes ES 2 Y ((dia <=28) O dia ES 29 Y bisiesto)) ))) entonces
				 mostrar << "Transcurrieron  ";
				 segun(mes)
					   caso 1:
					   mostrar << dia;
					otroCaso 2:
						mostrar << 31+dia;
					otroCaso 3:
						mostrar << 31+fSi(bisiesto,29,28)+dia;
					otroCaso 4:
						mostrar << 31+fSi(bisiesto,29,28)+31+dia;
					otroCaso 5:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+dia;
					otroCaso 6:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+dia;
					otroCaso 7:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+dia;
					otroCaso 8:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+30+dia;
					otroCaso 9:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+30+31+dia;
					otroCaso 10:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+30+31+30+dia;
					otroCaso 11:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+30+31+30+31+dia;
					otroCaso 12:
						mostrar << 31+fSi(bisiesto,29,28)+31+30+31+30+31+30+31+31+30+dia;
						
					finSegun		
						mostrar << " días" <<salto;
						finSi
					finSi

pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal


