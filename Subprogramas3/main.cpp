/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
#include "../../leeEntero.h"
/**
*    Enunciado: Leer un valor entero a prueba de errores de lectura.
*/



principal                                                       // Unidad de programa principal
entero valor;
limpiar;                                                        // Limpia la pantalla.
leeEntero(valor);
mostrar << valor << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
