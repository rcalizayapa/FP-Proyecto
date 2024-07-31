#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
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
	return 0;
} 
