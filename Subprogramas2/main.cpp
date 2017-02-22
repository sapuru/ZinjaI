/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dado un texto terminado en punto, contar la cantidad de vocales precedidas de consonante.
*/

procedimiento leeTexto(cadena porRef,caracter);
funcion entero cantCV(cadena);

principal                                                       // Unidad de programa principal
cadena texto;
limpiar;                                                        // Limpia la pantalla.
leeTexto(texto,'.');
mostrar << salto << "Texto ingresado:("<< texto <<")" << salto;
mostrar << "La cantidad de vocales precedidas de consonante es " << cantCV(texto) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

procedimiento leeTexto(cadena porRef txt, caracter terminador) {
caracter tecla;
txt = "";
iterar
    leeTecConEco(tecla);
    salirSi(tecla ES terminador);
    txt += tecla;
    finIterar
}

funcion entero cantCV(cadena txt) {
entero resul = 0
      ,longi = txt.length()
      ,pos;
variar(pos,1,longi-1,1)
    si(esConso(txt[pos-1]) Y esVocal(txt[pos])) entonces
       resul++;
       finSi
    finVariar
regresa(resul);
}