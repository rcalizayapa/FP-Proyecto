#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	string input;
	while(!kbhit()){
		
	//PRIMERA PANTALLA QUE SE MOSTRARA AL USUARIO//
		for(int k=1; k<=10; k++){
			for(int m=1; m<=79; m++){
				cout<<"-";
			}
			cout<<"-"<<endl;
		}
		for(int i=1; i<=25; i++){
				cout<<"-";
		}
	cout<<"BIENVENIDO A LA BASE DE DATOS";

		for(int i=1; i<=25; i++){
			cout<<"-";
		}
	cout<<"-"<<endl;
		for(int l=1; l<=10; l++){
			for(int m=1; m<=79; m++){
				cout<<"-";
			}
			cout<<"-"<<endl;
		}
	clock_t start = clock();
	while(clock()-start<10*CLOCKS_PER_SEC);
	system("cls");
	
	
	
	//SEGUNDA PANTALLA DE INICIO//
		for(int k=1; k<=12; k++){
			cout<<" "<<endl;
		}
		for(int i=1; i<=20; i++){
			cout<<" ";
		}
	
	cout<<"PRESIONE CUALQUIER BOTON PARA INICIAR";

		for(int i=1; i<=23; i++){
			cout<<" ";
		}
	cout<<" "<<endl;
		for(int l=1; l<=10; l++){		
			cout<<" "<<endl;
		}
	clock_t start1 = clock();
	while(clock()-start1<10*CLOCKS_PER_SEC);
	system("cls");	
	}
//A PARTIR DE AQUI SE PONDRA LO QUE SALDRÁ LUEGO DE PULSAR CUALQUIER TECLA PARA INICIAR//




	return 0;

}
