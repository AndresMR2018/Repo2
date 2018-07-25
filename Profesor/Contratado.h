using namespace std;

class Contratado:public Profesor{
	string fecha_ingreso;
	string fecha_contratado;
	
	public:
		Contratado(){}
		Contratado(string f_ingreso, string f_contrato, int codigo, string nombres, string apellidos, string direccion):Profesor(codigo, nombres, apellidos, direccion){
			fecha_ingreso=f_ingreso;
			fecha_contratado=f_contrato;
		}
		
		string getFecha_ingresado(){return fecha_ingreso;}
		string getFecha_contratado(){return fecha_contratado;}
		
		void setFecha_ingresado(string fecha_ingresado){this->fecha_ingreso=fecha_ingreso;}
		void setFecha_contratado(string fecha_contratado){this->fecha_contratado=fecha_contratado;}
		
		void ingresar(){
			cout << "\nIngreso de Contratado ";
			int lcodigo;
			string lnombre, lapellido, ldireccion;
			
			cout <<"\nCodigo : "; cin>> lcodigo;
			cout <<"\nNombre : "; cin >> lnombre;
			cout <<"\nApellido : "; cin>> lapellido;
			cout << "\nDireccion : "; cin >> ldireccion;
			cout << "\nFecha de ingreso : "; cin >> fecha_ingreso;
			cout << "\nFecha de contrato : "; cin >> fecha_contratado;
			 
			this->setCodigo(lcodigo);
			this->setNombre(lnombre);
			this->setApellido(lapellido);
			this->setDireccion(ldireccion);
		}
		
		void imprimir(){
			cout << "\nDatos de Contratado ";
			cout <<"\nCodigo : "<< this->getCodigo();
			cout <<"\nNombre : "<< this->getNombre();
			cout <<"\nApellido : "<< this->getApellido();
			cout <<"\nDireccion : "<< this->getDireccion();
			cout << "\nFecha de ingreso : " << fecha_ingreso;
			cout << "\nFecha de contrato : " << fecha_contratado;
		}
};
