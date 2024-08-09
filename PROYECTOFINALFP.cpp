#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>
#include "PROYECTOFINALFP.h"
#include"main.h"
using namespace std;
enum Inicio{
	ejecutar,
	salir,
	finalizar
};

//FUNCIONES----

//AQUI SE COLOCARON LAS FUNCIONES Y SUS Cï¿½DIGOS

//01 FUNCION
void mostrarbienvenido(int kbhit()){
	do{
		  	
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
	clock_t start = clock(); // indica el tiempo de reloj que ha transcurrido
	while(clock()-start<1*CLOCKS_PER_SEC);//verifica dentro de cuanto tiempo se va a tener la pantalla dada
	system("cls"); //esta función se ocuparía de limpiar la pantalla
	
	   
    	    
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
	clock_t start1 = clock(); // indica el tiempo de reloj que ha transcurrido
	while(clock()-start1<1*CLOCKS_PER_SEC); //verifica dentro de cuanto tiempo se va a tener la pantalla dada
	system("cls");	
	
	}while(!kbhit());
}


string funcioninicio(Inicio boton){
	int contra;
	
	switch (boton){
		
		case ejecutar:
		//SE DARA INICIO AL PROGRAMA PRINCIPAL DONDE SE EJECUTARIA LA MAYORIA DE LAS FUNCIONES
		cout<<"INGRESE SU CONTRASEï¿½A: ";
		cin>>contra;
		//AQUI PUEDES PONER LA FUNCION PARA LO OTRO, YA SERIA FUNCION DENTRO DE OTRA FUNCIï¿½N
		if(contra==101010){//CONTRASEÑA DEL PROFESOR BARRAZA :)
			cout<<"Probando";
			//-------------------------------------------------------------------------------------------------------------------
		system("pause");
		
			//_------------------------------------------------------------------------------------------------------------------------
		system("cls");	
		cout<<main();
		}
		else{
			cout<<"CONTRASEï¿½A NO VALIDA"<<endl;
		}
		
			break;//para indicar que se termino el switch
		case salir:	
			system("cls");
			cout<<main();
			break;
		case finalizar:
		cout<<" "<<endl;
		cout<<" "<<endl;
		break;
		default:
			cout<< "ERROR.";
	}
}



	

