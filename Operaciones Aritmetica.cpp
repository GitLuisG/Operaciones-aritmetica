#include <iostream>
#include<stdlib.h>

using namespace std;

class Persona{
	private:
		int edad;
		string nombre;
	public:
		Persona(int, string);
		void leer();
		void correr();
};

	Persona::Persona(int _edad, string _nombre){
		edad = _edad;
		nombre = _nombre;
	}
	
	void Persona::leer(){
		cout<<"Leer "<<"Edad: "<<edad<<" Nombre: "<<nombre<<endl;
	}
	
	void Persona::correr(){
		cout<<"Correr "<<"Edad: "<<edad<<" Nombre: "<<nombre<<endl;
	}


int main(){
	Persona uno(20,"Luis");
	uno.correr();
	uno.leer();
	return 0;
	
}
