//MENU DEL ADMINISTRADOR

#include <iostream>
using namespace std;
int main(){
	int menuadmin;
	cout<<"------------------------";
	cout<<"MENU-administrador-";
	cout<<"------------------------"<<endl;
	cout<<"1. Agregar estudiantes."<<endl;
	cout<<"2. Mostrar lista de estudiantes. "<<endl;
	cout<<"3. Salir/Cerrar sesion."<<endl;
	cout<<"4. Finalizar programa."<<endl;
	cin>>menuadmin;
	switch(menuadmin){
		case 1:
			void ingresarDatosEstudiantes();//modificar
		case 2:
			void mostrarListaEstudiantes();
		case 3:
			
		case 4:
			
		
	}
}
//FUNCIONES RIVER//
void ingresarDatosEstudiantes(){
        int cantidad;
        cout<<"Ingrese la cantidad de estudiantes: ";cin>>cantidad;
        cin.ignore();  //Limpiar la pantalla de entrada

        for(int i = 0; i < cantidad; ++i){
            estudiante est;
            est.id = i + 1;//funcion para agregar un ID
            cout<< "Nombres: ";
            getline(cin, est.nombre);
            cout<< "Apellidos: ";
            getline(cin, est.apellido);
            cout<< "Edad: ";
            cin>>est.edad;
            cin.ignore();
            cout<< "Estatura: ";
            getline(cin, est.estatura);
            cout<< "Escuela: ";
            getline(cin, est.escuela);
            cout << "Correo: ";
            getline(cin, est.correo);
            cout << "Código universitario: ";
            getline(cin, est.codigo);
            cout << "Whatsapp: ";
            getline(cin, est.whatsapp);
            cout << "Llave: ";
            getline(cin, est.llave);
            est.ingreso  = ""; //Solo se registrara cuando ingrese el estudiante
            est.salida = ""; //Solo se registrara cuando se retire el estudiante

            estudiantes.push_back(est);
            cout<<"Datos guardados exitosamente.\n";
            cout<<"Siguiente alumno \n";

        }
    }
    //---------------------//
    
