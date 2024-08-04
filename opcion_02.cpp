#include<iostream>
using namespace std;

int main (){
	int op;
	do 
	{
		cout<<"Menu del administrador"<<endl;
		cout<<"selecione una opcion de las cuatro opciones: ";
		cin>>op;
		cout<<"1. Registrar al estudiante"<<endl;
		cout<<"2. Registrar su asistencia"<<endl;
		cout<<"3. Indicar ingreso de llave para el registro de asistencia"<<endl;
		cout<<"4. volver al menu principal"<<endl;
		
	}
	
	
	while (op !=4);
	return 0;
}

