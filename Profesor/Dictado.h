using namespace std;
class Dictado{
		string horario;
		Profesor profesor;
		Materia materia;
		public:
		Dictado(){}
		Dictado(string horario,Profesor profesor,Materia materia){
			this->horario=horario;
			this->profesor=profesor;
			this->materia=materia;
		}
		string getHorario(){return horario;}
		Profesor getProfesor(){return profesor;}
		Materia getMateria(){return materia;}
		void setHorario(string horario){this->horario=horario;}
		void setProfesor(Profesor profesor){this->profesor=profesor;}
		void setMateria(Materia materia){this->materia=materia;}
		void ingresar();
		void imprimir();
};
void Dictado::ingresar(){
	int codpro,codmat;
	string nompro,apepro,dirpro,nommat;
	cout<<"\n**Datos Dictado**\n";
	cout<<"Horario: ";cin>>horario;
	cout<<"\n**Datos del Profesor**\n";
	cout<<"Codigo: ";cin>>codpro;
	cout<<"Nombre: ";cin>>nompro;
	cout<<"Apellido: ";cin>>apepro;
	cout<<"Direccion: ";cin>>dirpro;
	Profesor objpro(codpro,nompro,apepro,dirpro);
	this->profesor=objpro;
	cout<<"\n**Datos de la Materia**\n";
	cout<<"Codigo: ";cin>>codmat;
	cout<<"Nombre: ";cin>>nommat;
	Materia objmat(codmat,nommat);
	this->materia=objmat;
}
void Dictado::imprimir(){
	cout<<"\n**Datos Dictado**\n";
	cout<<"Horario: "<<horario<<endl;
	cout<<"\n**Datos del Profesor**\n";
	cout<<"Codigo: "<<getProfesor().getCodigo()<<endl;
	cout<<"Nombre: "<<getProfesor().getNombre()<<endl;
	cout<<"Apellido: "<<getProfesor().getApellido()<<endl;
	cout<<"Direccion: "<<getProfesor().getDireccion()<<endl;
	cout<<"\n**Datos de la Materia**\n";
	cout<<"Codigo: "<<getMateria().getCodigo()<<endl;
	cout<<"Nombre: "<<getMateria().getNombre()<<endl;
}
