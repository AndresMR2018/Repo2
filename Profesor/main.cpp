#include <iostream>
#include <list>
#include "Materia.h"
#include "Profesor.h"
#include "Dictado.h"
#include "Contratado.h"
#include "Titular.h"
int menu(){
	int op;
	system("cls");
	cout<<"**Menu**\n";
	cout<<"1.-Ingresar nuevo profesor\n";
	cout<<"2.-Imprimir registro de profesores\n";
	cout<<"3.-Salir\n";
	cout<<"Escoja la opcion:";
	cin>>op;
	return op;
}
void imprimir(list<Profesor *> &lista){
		for(list<Profesor *>::iterator indice=lista.begin();
		indice!=lista.end(); ++indice	
	){
		(*indice)->imprimir();
	}
}
void nuevo(list<Profesor *> &lista){
	int tipoPro;
	cout<<"\n Tipo de empleado a ingresar (1. Titular, 2. Contratado): ";
	cin>>tipoPro;
	Profesor * objPro;
	switch(tipoPro){
		case 1:
			objPro= new Titular();
			objPro->ingresar();
			break;
		case 2:
			objPro= new Contratado();
			objPro->ingresar();
			break; 
	} 
	lista.push_back(objPro);
}
int main() {
	list<Profesor *> profesores;
	int op;		
	do{
		op=menu();
		switch(op){
		case 1:
			nuevo(profesores);
			break;
		case 2:
			imprimir(profesores);
			break; 
		case 3:
			cout<<"Hasta pronto!!";
			break; 
		default:
			cout<<"Opcion desconocida!!";
			break; 
		}
		system("pause"); 
	}while(op!=3);
return 0;

}
