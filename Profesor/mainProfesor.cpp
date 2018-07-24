#include <iostream>
#include "Profesor.h"
#include "Contratado.h"
#include "Titular.h"
#include "Dictado.h"
#include "Materia.h"

int main(){
	system("color a");
	Contratado objC;
	objC.ingresar();
	objC.imprimir();
	Titular objT;
	objT.ingresar();
	Dictado objD;
	objD.ingresar();
	objD.imprimir();
	Materia objM;
	objM.ingresar();
	objM.imprimirt();
	return 0;
}
