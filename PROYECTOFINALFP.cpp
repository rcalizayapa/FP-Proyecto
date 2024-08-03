#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	string input;
	char s;
	int cmode=0;
	do{
		if(kbhit()) 
   		    {
            s=getch();        //gets what key is pressed
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
	clock_t start = clock();
	while(clock()-start<1*CLOCKS_PER_SEC);
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
	while(clock()-start1<1*CLOCKS_PER_SEC);
	system("cls");	
	
	}while(!kbhit());
	
//A PARTIR DE AQUI SE PONDRA LO QUE SALDRÁ LUEGO DE PULSAR CUALQUIER TECLA PARA INICIAR//
	cout<<"Presione las letras “ EJECUTAR ” para dar inicio al programa"<<endl;
	cout<<"Presione las letras “SALIR” para dejar de ejecutar el programa"<<endl;
	cout<<"Presione las letras “FINALIZAR” para finalizar el programa"<<endl;




	return 0;

}
