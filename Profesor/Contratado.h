#include <iostream>
using namespace std;

class Contratado:public Profesor{
	string fecha_ingreso;
	string fecha_contratado;
	
	public:
		Contratado(string f_ingreso, string f_contrato, int codigo, string nombre, string apellido, string direccion):Profesor(codigo, nombres, apellidos, direccion){
			fecha_ingreso=f_ingreso;
			fecha_contratado=f_contratado;
		}
		
		string getFecha_ingresado(){return fecha_ingresado;}
		string getFecha_contratado(){return fecha_contratado;}
		
		void setFecha_ingresado(string fecha_ingresado){this->fecha_ingresado=fecha_ingresado;}
		void setFecha_contratado(string fecha_contratado){this->fecha_contratado=fecha_contratado;}
		
		void ingresar(){
			cout << "\nIngreso de Profesor ";
			cout << "\nFecha de ingreso : "; cin >> fecha_ingreso;
			cout << "\nFecha de contrato : "; cin >> fecha_contratado;
			int lcodigo;
			string lnombre, lapellido, ldireccion;
			
			cout <<"\nCodigo : "; cin>> lcodigo;
			cout <<"\nNombre : "; cin >> lnombre;
			cout <<"\nApellido : "; cin>> lapellido;
			cout << "\Direccion : "; cin >> ldireccion;
			 
			this->setCodigo(lcodigo);
			this->setNombre(lnombre);
			this->setApellido(lapellido);
			this->setDireccion(ldireccion);
		}
		
		void imprimir(){
			cout << "\nIngreso de Profesor ";
			cout << "\nFecha de ingreso : " << fecha_ingreso;
			cout << "\nFecha de contrato : " << fecha_contratado;
			
			cout <<"\nCodigo : "<< this->setCodigo();
			cout <<"\nNombre : "<< this->setNombre();
			cout <<"\nApellido : "<< this->setApellido();
			cout <<"\Direccion : "<< this->setDireccion();
		}
};
