/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>                                           // Archivo de traducciÃ³n de seudocÃ³digo a C++
#include "vectores.h"
#include "busqExh.h"
/**
*    Enunciado: Dado un conjunto de hasta 10 valores, buscar exhaustivamente otro y determinar si pertenece al conjunto.
*/

constante entero T = 4;

principal                                                       // Unidad de programa principal
real vec[T]
    ,vABuscar;
limpiar;                                                        // Limpia la pantalla.
leeVec(T,vec);
muestVec(T,vec);
leerM(vABuscar,salto<<"A buscar:");
mostrar << fSi((estaExh(T,vABuscar,vec)),"Encontrado.","No encontrado...")<< salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal
