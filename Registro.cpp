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
      float estatura;
      string escuela;
      string correo;
      string codigo;
      int whatsapp;
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