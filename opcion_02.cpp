#include<iostream>
#include <map>
#include <string>
#include <ctime>
using namespace std;

struct Estudiante {
    string clave;
    string nombre;
    string apellido;
    int edad;
    string escuela;
    string correo;
    string codigo;
    string whatsapp;
    string horaIngreso;
    string horaSalida;
};

int main (){
	int opcion;
	do 
	{
		cout<<"Menu del administrador"<<endl;
		cout<<"1. Registrar al estudiante"<<endl;
		cout<<"2. Registrar su asistencia"<<endl;
		cout<<"3. Indicar ingreso de llave para el registro de asistencia"<<endl;
		cout<<"4. volver al menu principal"<<endl;
		cout<<"selecione una opcion de las cuatro opciones: ";
		cin>>op;
		cin.ignore();
		


	}
	
	
	while (op !=4);
	return 0;
}

