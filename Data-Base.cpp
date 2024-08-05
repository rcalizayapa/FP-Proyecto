#include <iostream>
#include <ctime>
#include <conio.h>
#include <fstream>
#include <string>
#include <list>
#include <stdio.h>

using namespace std;

//Enumeracion para las opcones del menu
enum Inicio{
	ejecutar,
	salir,
	finalizar
};

//Datos de los estudiantes
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
    // Definir la lista de estudiantes
    list<estudiante> estudiantes;
    
    //Funciones para obtener todos los datos necesarios en el programa
    void limpiarPantalla();
    string obtenerHoraActual();
    void ingresarDatosEstudiantes();
    void mostrarDatosEstudiante(const estudiante& est);
    void ejecutarPrograma();
    void mostrarMenuSecundario();
    void mostrarMenuPrincipal();
    void mostrarbienvenido();
    bool verificarContrasena();

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

    //funcion para ingresar los datos de los estudiantes
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
    //funion para ejecutar el programa
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

    // Función para mostrar el menú secundario
void mostrarMenuSecundario() {
    while (true) {
        limpiarPantalla();
        cout << "Menu Secundario:" << endl;
        cout << "1. Registrar estudiantes" << endl;
        cout << "2. Ejecutar registro de asistencia" << endl;
        cout << "3. Volver al menú principal" << endl;
        cout << "4. Finalizar programa" << endl;

        string opcion;
        cout << "Seleccione una opción: ";
        getline(cin, opcion);

        if (opcion == "1") {
            ingresarDatosEstudiantes();
        } else if (opcion == "2") {
            ejecutarPrograma();
        } else if (opcion == "3") {
            return; // Vuelve al menú principal
        } else if (opcion == "4") {
            cout << "Finalizando el programa..." << endl;
            exit(0);
        } else {
            cout << "Opción no válida. Intente nuevamente." << endl;
        }
    }
}

// Función para verificar la contraseña predefinida del administrador
bool verificarContrasena() {
    const string contrasenaCorrecta = "admin123"; // Contraseña de administrador
    string contrasenaIngresada;
    
    cout << "Ingrese la contraseña de administrador: ";
    getline(cin, contrasenaIngresada);
    
    if (contrasenaIngresada == contrasenaCorrecta) {
        return true; // Contraseña correcta
    } else {
        cout << "Contraseña incorrecta. Acceso denegado." << endl;
        return false; // Contraseña incorrecta
    }
}

// Función para mostrar el menú principal
void mostrarMenuPrincipal() {
    while (true) {
        limpiarPantalla();
        cout << "Menu Principal:" << endl;
        cout << "1. Ir al menú secundario" << endl;
        cout << "2. Otra opción" << endl; // Puedes añadir más opciones aquí
        cout << "3. Finalizar programa" << endl;

        string opcion;
        cout << "Seleccione una opción: ";
        getline(cin, opcion);

        if (opcion == "1") {
            if (verificarContrasena()) { // Verifica la contraseña antes de mostrar el menú secundario
                mostrarMenuSecundario(); // Llama al menú secundario
            } else {
                cout << "No se pudo acceder al menú secundario." << endl;
            }
        } else if (opcion == "2") {
            cout << "Otra opción seleccionada" << endl;
            // Implementa otras opciones aquí
        } else if (opcion == "3") {
            cout << "Finalizando el programa..." << endl;
            exit(0);
        } else {
            cout << "Opción no válida. Intente nuevamente." << endl;
        }
    }
}

// Función para mostrar el mensaje de bienvenida y esperar la tecla
void mostrarbienvenido() {
    char s;
    while (true) {
        if (_kbhit()) { // Comprueba si se ha presionado una tecla
            s = _getch(); // Lee la tecla
            if (s != '~') {
                break; // Sale del bucle si se presiona una tecla
            }
        }

        // Primera pantalla
        for (int k = 1; k <= 10; k++) {
            for (int m = 1; m <= 79; m++) {
                cout << "-";
            }
            cout << "-" << endl;
        }
        for (int i = 1; i <= 25; i++) {
            cout << "-";
        }
        cout << "BIENVENIDO A LA BASE DE DATOS";
        for (int i = 1; i <= 25; i++) {
            cout << "-";
        }
        cout << "-" << endl;
        for (int l = 1; l <= 10; l++) {
            for (int m = 1; m <= 79; m++) {
                cout << "-";
            }
            cout << "-" << endl;
        }
        clock_t start = clock();
        while (clock() - start < 1 * CLOCKS_PER_SEC); // Espera 1 segundo
        system("cls");

        // Segunda pantalla
        for (int k = 1; k <= 12; k++) {
            cout << " " << endl;
        }
        for (int i = 1; i <= 20; i++) {
            cout << " ";
        }
        cout << "PRESIONE CUALQUIER BOTON PARA INICIAR";
        for (int i = 1; i <= 23; i++) {
            cout << " ";
        }
        cout << " " << endl;
        for (int l = 1; l <= 10; l++) {
            cout << " " << endl;
        }
        clock_t start1 = clock();
        while (clock() - start1 < 1 * CLOCKS_PER_SEC); // Espera 1 segundo
        system("cls");
        break; // Sale del bucle después de mostrar la pantalla
    }
}


// Programa principal
int main() {
    mostrarbienvenido(); // Mostrar pantalla de bienvenida
    mostrarMenuPrincipal(); // Mostrar menú principal
    return 0;
}