#include <iostream>
#include "Profesor.h"
#include "Contratado.h"
#include "Titular.h"
#include "Dictado.h"
#include "Materia.h"
using namespace std;
int main(){
	system("color a");
	
	Dictado objD;
	objD.ingresar();
	objD.imprimir();
	Contratado objC;
	objC.ingresar();
	objC.imprimir();
	Titular objT;
	objT.ingresar();
	objT.imprimir();
	return 0;
}
