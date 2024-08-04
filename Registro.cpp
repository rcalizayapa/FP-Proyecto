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
    //función para obtener la hora del ordenador
    string obtenerHoraActual(){
        time_t ahora = time(0);
        tm *ltm = localtime(&ahora);
        char buffer[6];
        snprintf(buffer, sizeof(buffer), "%02d:%02d",ltm->tm_hour, ltm->tm_min);
        return string(buffer);
    }

    //funciones del menu
    void ingresarDatosDeEstudiantes(){
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
            cout << "Ingreso (hora, ej. 07:30): ";
            getline(cin, est.ingreso);
            est.salida = ""; // Aún no ha salido
            cout << "Llave: ";
            getline(cin, est.llave);

            estudiantes.push_back(est);
            cout<<"Datos guardados exitosamente.\n";

        }
    }

    void ejecutarPrograma(){
        string llave;
        while(true){
            cout<<"Ingrese su llave: ";
            getline(cin, llave);

            bool encontrado = false;
            for(auto & est: estudiantes){
                if(est.llave == llave){
                    est.ingreso = obtenerHoraActual();
                    encontrado = true;
                    cout<<"Estudiante registrado: "<<est.nombre<<" "<<est.apellido<<endl;
                    cout<<"Presione las letras 'SALIR'para dejar de ejecuatar el programa"<<endl;
                    break;
                }
            }
            if(!encontrado){
                cout<<"Usuario no identificado\n";
            }
            string opción;
            getline(cin, opcion);
            if (opcion == "SALIR"){
                break;
            }
        }
    }
   

    int registro;
    do{
    //Función para mostrar el menu secundario
    cout<<"1.- Registrar estudiantes: "<<endl;
    cout<<"2.- Ejecutar registro de asistencia: "<<endl;
    cout<<"3.- Volver al menu principal: ";cin>>registro;

    switch(registro){
        case 1: 

        break;
        case 2: cout<<"EJECUTAR "<<endl;
        break;
        case 3: cout<<"Volviendo al menu principal "<<endl;
        break;
        default: cout<<"Opcion no valida "<<endl;
        break;
        }
        cout<<endl;//Linea en blaco para mejor comprensión
    } while(registro != 3);
    return 0;

}