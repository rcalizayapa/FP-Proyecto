#include<iostream>
#include <map>
#include <string>
#include <ctime>
using namespace std;

struct Estudiante {
    string llave;
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

	void menuAdministrador(map<string, Estudiante>& estudiantes) {
	int opcion;
	do {
		cout<<"Menu del administrador"<<endl;
		cout<<"1. Registrar al estudiante y su llave"<<endl;
		cout<<"2. Indicar ingreso de llave para el registro de asistencia"<<endl;
		cout<<"3. volver al menu principal"<<endl;
		cout<<"selecione una opcion de las tres opciones: ";
		cin>>opcion;
		cin.ignore();
		
switch (opcion) {
            case 1: {
                string llave;
                Estudiante nuevoEstudiante;              
                cout << "Ingrese la llave del estudiante: ";
                getline(cin, llave);

                if (estudiantes.find(llave) != estudiantes.end()) {
                    cout << "La llave ya est� en uso. Intente con otra llave." << endl;
                    break;
            	}
	 cout << "Ingrese el nombre del estudiante: ";
                getline(cin, nuevoEstudiante.nombre);
                cout << "Ingrese el apellido del estudiante: ";
                getline(cin, nuevoEstudiante.apellido);
                cout << "Ingrese la edad del estudiante: ";
                cin >> nuevoEstudiante.edad;
                cin.ignore();
                cout << "Ingrese la escuela del estudiante: ";
                getline(cin, nuevoEstudiante.escuela);
                cout << "Ingrese el correo institucional del estudiante: ";
                getline(cin, nuevoEstudiante.correo);
                cout << "Ingrese el codigo institucional del estudiante: ";
                getline(cin, nuevoEstudiante.codigo);
                cout << "Ingrese el numero de whatsapp del estudiante: ";
                getline(cin, nuevoEstudiante.whatsapp);
                
                nuevoEstudiante.llave = llave;
                estudiantes[nuevoEstudiante.llave] = nuevoEstudiante;
                cout << "Estudiante registrado exitosamente." << endl;
                break;
            }
             case 2: {
                string llave;
                cout << "Ingrese la llave del estudiante para registrar asistencia: ";
                getline(cin, llave);

                if (estudiantes.find(llave) != estudiantes.end()) {
                    Estudiante& estudiante = estudiantes[llave];
                    estudiante.horaIngreso = obtenerHoraActual();
                    cout << "Hora de ingreso registrada: " << estudiante.horaIngreso << endl;
                    cout << "Ingrese la hora de salida (deje en blanco si a�n no ha salido): ";
                    getline(cin, estudiante.horaSalida);
                    if (estudiante.horaSalida.empty()) {
                        estudiante.horaSalida = "Pendiente";
                    }
                    cout << "Asistencia registrada para " << estudiante.nombre << " " << estudiante.apellido << "." << endl;
                } else {
                    cout << "Estudiante no encontrado." << endl;
                }
                break;
            }
               case 3:
                cout << "Volviendo al menu principal..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
                break;
        }
    } while (opcion != 3);
}
	
void menuEstudiante(map<string, Estudiante>& estudiantes) {
    int opcion;
    do {
        cout << "Menu Estudiante" << endl;
        cout << "1. Registrar mis datos" << endl;
        cout << "2. Volver al menu principal" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cin.ignore();
        
         switch (opcion) {
            case 1: {
                Estudiante nuevoEstudiante;
                cout << "Ingrese la llave del estudiante: ";
                getline(cin, nuevoEstudiante.llave);

                if (estudiantes.find(nuevoEstudiante.llave) != estudiantes.end()) {
                    cout << "La llave ya est� en uso. Intente con otra llave." << endl;
                    break;
                }
              
			    cout << "Ingrese el nombre del estudiante: ";
                getline(cin, nuevoEstudiante.nombre);
                cout << "Ingrese el apellido del estudiante: ";
                getline(cin, nuevoEstudiante.apellido);
                cout << "Ingrese la edad del estudiante: ";
                cin >> nuevoEstudiante.edad;
                cin.ignore(); 
                cout << "Ingrese la escuela del estudiante: ";
                getline(cin, nuevoEstudiante.escuela);
                cout << "Ingrese el correo institucional del estudiante: ";
                getline(cin, nuevoEstudiante.correo);
                cout << "Ingrese el codigo institucional del estudiante: ";
                getline(cin, nuevoEstudiante.codigo);
                cout << "Ingrese el numero de whatsapp del estudiante: ";
                getline(cin, nuevoEstudiante.whatsapp);
                
                   estudiantes[nuevoEstudiante.llave] = nuevoEstudiante;
                cout << "Estudiante registrado exitosamente." << endl;
                break;
            }
             case 2:
                cout << "Volviendo al menu principal..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
                break;
        }
    } while (opcion != 2);
}
int main (){
	map<string, Estudiante> estudiantes;
    int opcion;
    
    do {
        cout << "Menu Principal" << endl;
        cout << "1. Menu Administrador" << endl;
        cout << "2. Menu Estudiante" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cin.ignore();
		
		 switch (opcion) {
            case 1:
                menuAdministrador(estudiantes);
                break;
            case 2:
                menuEstudiante(estudiantes);
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
                break;
        }
    } while (opcion != 3); 
    
            
	return 0;
}

