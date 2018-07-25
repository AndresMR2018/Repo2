using namespace std;

class Profesor{
	int codigo;
	string nombre;
	string apellido;
	string direccion;
	public :
		Profesor(){
			
		}
		Profesor(int codigo, string nombre , string apellido, string direccion){
			this->codigo=codigo;
			this->nombre=nombre;
			this->apellido=apellido;
			this->direccion=direccion;
		}
		int getCodigo(){
			return codigo;
		}
		string getNombre(){
			return nombre;
		}
		string getApellido(){
			return apellido;
		}
		string getDireccion(){
			return direccion;
		}
		
		void setCodigo(int codigo){
		 this->codigo=codigo;
		}
		void setNombre(string nombre){
		 this->nombre=nombre;
		}
		void setApellido(string apellido){
		 this->apellido=apellido;
		}
		void setDireccion(string direccion){
		this->direccion=direccion;
		}
		
		virtual void ingresar()=0;
		virtual void imprimir()=0;	
	
};


