using namespace std;
class Dictado{
		string horario;
		Materia materia;
		public:
		Dictado(){}
		Dictado(string horario,Materia materia){
			this->horario=horario;
			this->materia=materia;
		}
		string getHorario(){return horario;}
		Materia getMateria(){return materia;}
		void setHorario(string horario){this->horario=horario;}
		void setMateria(Materia materia){this->materia=materia;}
		void ingresar();
		void imprimir();
};
void Dictado::ingresar(){
	int codmat;
	string nommat;
	cout<<"\n**Datos Dictado**\n";
	cout<<"Horario: ";cin>>horario;
	cout<<"\n**Datos de la Materia**\n";
	cout<<"Codigo: ";cin>>codmat;
	cout<<"Nombre: ";cin>>nommat;
	Materia objmat(codmat,nommat);
	this->materia=objmat;
}
void Dictado::imprimir(){
	cout<<"\n**Datos Dictado**\n";
	cout<<"Horario: "<<horario<<endl;
	cout<<"\n**Datos de la Materia**\n";
	cout<<"Codigo: "<<materia.getCodigo()<<endl;
	cout<<"Nombre: "<<materia.getNombre()<<endl;
}
