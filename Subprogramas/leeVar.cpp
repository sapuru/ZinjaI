#include <program1.h>
plantilla(Tipo)
procedimiento leeVar(Tipo porRef v,Tipo vMin, Tipo vMax,cadena mens) {
iterar
    leerM(v,mens);
    salirSi(vMin <= v Y v <= vMax);
    mostrar << "Debe estar entre " << vMin << " y " << vMax << salto;
    finIterar
}
implementa procedimiento leeVar(real porRef,real,real,cadena);
implementa procedimiento leeVar(entero porRef,entero,entero,cadena);
