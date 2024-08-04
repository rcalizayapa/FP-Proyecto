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

string obtenerHoraActual() {
    time_t tiempo;
    struct tm* tiempoLocal;
    char buffer[9];
    time(&tiempo);
    tiempoLocal = localtime(&tiempo);
    strftime(buffer, sizeof(buffer), "%H:%M:%S", tiempoLocal);
    return string(buffer);
}

int main (){
	void menuAdministrador(map<string, Estudiante>& estudiantes) {
	int opcion;
	do {
		cout<<"Menu del administrador"<<endl;
		cout<<"1. Registrar al estudiante y su llave"<<endl;
		cout<<"2. Indicar ingreso de llave para el registro de asistencia"<<endl;
		cout<<"3. volver al menu principal"<<endl;
		cout<<"selecione una opcion de las cuatro opciones: ";
		cin>>opcion;
		cin.ignore();
		


	}
	
	
	while (op !=4);
	return 0;
}

