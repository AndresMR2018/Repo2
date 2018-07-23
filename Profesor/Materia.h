using namespace std;

class Materia{
	int codigo;
	string nombre;
	
	
	public:
	Materia(){		}
	Materia(int codigo , string nombre){
		this->codigo=codigo;
		this->nombre=nombre;
	
		
	}
		//me tood de set y get
		
		int getCodigo(){return this->codigo;		}
		string getNombre(){return this->nombre;		}
		
		
		
		void setCodigo(int codigo){this->codigo=codigo;}
		void setNombre(string nombre){this->nombre=nombre;}
		
		
		
		void ingresar();
    	void imprimir();		
};

void Materia :: ingresar(){
	
	cout<<"Ingreso datos de materia: "<<endl;
	cout<<"Codigo : ";cin>>codigo;
	cout<<"Nombre :";cin>>nombre;
	
		
}

void Materia :: imprimir(){
	cout<<"Impresion datos de materia  "<<endl;
	cout<<"codigo : "<<codigo<<endl;
	cout<<"Nombre : "<<nombre<<endl;
}
	
	




