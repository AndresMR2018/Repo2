using namespace std;

class Titular:public Profesor{
	int anios_servicio;

	public:
		Titular(){}
		Titular(int codigo, string nombres, string apellidos, string direccion, int anios_servicio):Profesor(codigo, nombres, apellidos, direccion){
			this->anios_servicio=anios_servicio;
		}
		
		int getAniosServicio(){return anios_servicio;}		
		void setAniosServicio(int anios_servicio){this->anios_servicio=anios_servicio;}
		
		void ingresar(){
			int codpro;
			string nompro,apepro,dirpro;
			cout << "\nIngreso de Titular ";
			cout <<"\nCodigo : "; cin>> codpro;
			cout <<"\nNombres : "; cin >> nompro;
			cout <<"\nApellidos : "; cin>> apepro;
			cout << "\nDireccion : "; cin >> dirpro;
			cout << "\nAnios de servicio : "; cin >> anios_servicio;
			this->setCodigo(codpro);
			this->setNombre(nompro);
			this->setApellido(apepro);
			this->setDireccion(dirpro);
		}
		
		void imprimir(){
			cout << "\nDatos de Titular ";
			cout <<"\nCodigo : "<< this->getCodigo();
			cout <<"\nNombre : "<< this->getNombre();
			cout <<"\nApellido : "<< this->getApellido();
			cout <<"\nDireccion : "<< this->getDireccion();
			cout << "\nAnios de servicio : " << anios_servicio;
		}
};
