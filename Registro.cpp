#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;

int main(){
    int registro;
    do{
    //Se muestra el menu secundario
    cout<<"1.- Registrar estudiantes: "<<endl;
    cout<<"2.- Ejecutar registro de asistencia: "<<endl;
    cout<<"3.- Volver al menu principal: ";cin>>registro;

    switch(registro){
        case 1: cout<<"Binevenido "<<endl;
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