#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
enum Inicio{
	ejecutar,
	salir,
	finalizar
};

//FUNCIONES----

void mostrarbienvenido(int kbhit());
string funcioninicio(Inicio boton);

//PROGRAMA PRINCIPAL

int main(){
	string input;
	char s;
	string boton;
	string boton1;
	int cmode=0;
	
	//FUNCIÓN PARA LAS DOS PANTALLAS MOSTRADAS (Y SE PODRÁ  SALIR DEL BUCLE CUANDO SE PRESIONE UNA TECLA//
		mostrarbienvenido(kbhit);
		
		
	//A PARTIR DE AQUI SE PONDRA LO QUE SALDRÁ LUEGO DE PULSAR CUALQUIER TECLA PARA INICIAR//
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"                                  ";
	cout<<"INDICACIONES: "<<endl;
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"     ";
	cout<<"Presione las letras ´ EJECUTAR ´ para dar inicio al programa"<<endl;
	cout<<"     ";
	cout<<"Presione las letras ´ SALIR ´ para dejar de ejecutar el programa"<<endl;
	cout<<"     ";
	cout<<"Presione las letras ´ FINALIZAR ´ para finalizar el programa"<<endl;
	cout<<" "<<endl;
	cout<<"     ";
	cout<<"Ingrese la palabra: ";
	cin>>boton;
	if(boton=="ejecutar"){
		cout<< funcioninicio(ejecutar);
	}else if(boton =="salir"){
		cout<< funcioninicio(salir);
	}else if (boton=="finalizar"){
		cout<< funcioninicio(finalizar);
	}else{
	system("cls");
	    for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
     	}
    	cout<<"                            ";
		cout<<"Palabra no reconocida";
        cout<<"                            ";
        
		for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
		}

	}
	
	


}





//AQUI SE COLOCARÁN LAS FUNCIONES Y SUS CÓDIGOS
void mostrarbienvenido(int kbhit()){
	do{
		char s;
		int cmode=0;
		if(kbhit()) //comprueba en la consola si se ha presionado una tecla recientemente.
   		{
            s=getch();      // en el bucle lee la cadena carácter
            if(s!='~') cmode=1;
    	}
    	    	  	
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
	system("cls"); //esta función se ocupará de limpiar la pantalla
	
	   
    	    
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
	switch (boton){
		
		case ejecutar:
		//SE DARA INICIO AL PROGRAMA PRINCIPAL DONDE SE EJECUTARÁ LA MAYORIA DE LAS FUNCIONES
		cout<<"prueba y error. ejecutar"<<endl;
		//AQUI PUEDES PONER LA FUNCION PARA LO OTRO, YA SERÍA FUNCION DENTRO DE OTRA FUNCIÓN
		
		
	
		break;//para indicar que se terminó el switch
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


