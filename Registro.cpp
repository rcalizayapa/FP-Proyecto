#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include<list>
#include<conio.h>
using namespace std;


    struct estudiante{
      int id;
      string nombre;
      string apellido;
      int edad;
      string estatura;
      string escuela;
      string correo;
      string codigo;
      string whatsapp;
      string ingreso;//En esta parte se registrara la hora de ingreso
      string salida;//Aqui se registra la hora de salida
      string llave;
    };

    list<estudiante> estudiantes;

    //función para limpiar la pantalla
    void limpiarPantalla(){
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }
    //función para obtener la hora del ordenador en formato "HH:MM:SS"
    string obtenerHoraActual(){
        time_t ahora = time(0);
        tm *ltm = localtime(&ahora);
        char buffer[9];
        snprintf(buffer, sizeof(buffer), "%02d:%02d",ltm->tm_hour, ltm->tm_min, ltm-> tm_sec);
        return string(buffer);
    }

    //funciones del menu secundario
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
    //Funcion para mostrar los datos de los estudiantes al momento de registrar su asistencia
    void mostrarDatosEstudiante(const estudiante& est) {
    cout << "ID: " << est.id << endl;
    cout << "Nombre: " << est.nombre << endl;
    cout << "Apellido: " << est.apellido << endl;
    cout << "Edad: " << est.edad << endl;
    cout << "Estatura: " << est.estatura << endl;
    cout << "Escuela: " << est.escuela << endl;
    cout << "Correo: " << est.correo << endl;
    cout << "Código universitario: " << est.codigo << endl;
    cout << "Whatsapp: " << est.whatsapp << endl;
    cout << "Hora de ingreso: " << est.ingreso << endl;
    cout << "Hora de salida: " << est.salida << endl;
    }

    void ejecutarPrograma(){
        string llave;
        while(true){
            cout<<"Ingrese su llave: ";
            getline(cin, llave);

            bool encontrado = false;// Lineas que indican si se encontro otro estudiante con la misma llave
            for(auto & est: estudiantes){
                if(est.llave == llave){//Se compara la llave de todos los estudiantes
                    if(est.ingreso.empty()){
                       est.ingreso = obtenerHoraActual();
                       cout<<"Hora de ingreso registrada: "<<est.ingreso<<endl;
                    } else {//Mediante estas lineas se registra el ingreso del estudiante
                        est.salida = obtenerHoraActual();
                        cout<<"Hora de salida registrada: "<<est.salida<<endl;
                    }// Mediante estas lineas de codigo se registra su hora de retiro
                    encontrado = true;
                    mostrarDatosEstudiante(est);
                    break;
                }
            }
            if(!encontrado){
                cout<<"Usuario no identificado\n";
            }
            cout<<"Precione las letras 'SALIR' para dejar de ejecutar el programa\n";
            string opcion;//Opcion para avandonar la ejecucion del programa
            getline(cin, opcion);
            if (opcion == "SALIR"){
                break;
            }
        }
    }
   
    void mostrarMenuSecundario(){
        
        while(true){
    
        //Función para mostrar el menu secundario
        cout<<"1.- Registrar estudiantes: "<<endl;
        cout<<"2.- Ejecutar registro de asistencia: "<<endl;
        cout<<"3.- Volver al menu principal: "<<endl;
        cout<<"4.- Finalizar programa\n";
        string opcion;
        getline(cin, opcion);
        if (opcion == "1"){
            ingresarDatosEstudiantes();
        } else if (opcion == "2"){
            ejecutarPrograma();
        } else if (opcion == "3"){
            break;
        } else if (opcion == "4"){
        cout<<"Finalizando el programa...n";
        exit(0);
        } else {
            cout<<"opcion no valida. Intente nuevamente\n";
            }
    }
}



int main(){
    mostrarMenuSecundario();
    return 0;
}