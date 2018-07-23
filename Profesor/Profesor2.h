using namespace std;

class Profesor{
	int codigo;
	string nombre;
	string apellido;
	string direccion;
	Dictado dictado;
	Materia materia;
	public :
		Profesor(){
			
		}
		Profesor(int codigo, string nombre , string apellido, string direccion, Dictado dictado, Materia materia){
			this->codigo=codigo;
			this->nombre=nombre;
			this->apellido=apellido;
			this->direccion=direccion;
			this->dictado=dictado;
			this->materia=materia;
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
		Dictado getDictado(){
			return dictado;
		}
		Materia getMateria(){
			return materia;
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
		this->direccion=direcccion;
		}
		void setDictado(Dictado dictado){
			this->dictado=dictado;
		}
		void setMateria(Materia materia){
			this->materia=materia;
		}
		
		virtual void ingresar()=0;
		virtual void imprimir()=0;	
	
};


