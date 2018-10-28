// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

namespace lecturaDeArchivos {

	void LecturaArchivos() {

		#pragma region Clientes
		//Variables aux
		string nombreAux;
		string apellidoAux;
		string id;
		string ciudadAux;
		string numero;


		std::ifstream archivoClientes;
		archivoClientes.open("Clientes.txt", ifstream::in);
		string linea;
		
		if (archivoClientes.is_open())
		{
			cout << "***************************************************" << endl;
			while (getline(archivoClientes, linea)) {
				cout << linea << endl; //Imprimir linea
				
				stringstream ss(linea);
				getline(ss, nombreAux, ';');
				cout << nombreAux << endl; //Imprimir nombre

				getline(ss, apellidoAux, ';');
				cout << apellidoAux << endl; //Imprimir apellido

				getline(ss, id, ';');
				cout << id << endl; //Imprimir id

				getline(ss, ciudadAux, ';');
				cout << ciudadAux << endl; //Imprimir ciudad

				getline(ss, numero, ';');
				cout << numero << endl; //Imprimir numero

				cout << "***************************************************" << endl;
				//ciclo de eventos
				while (!ss.eof()) {
					string evento;
					getline(ss, evento, ';');
					cout << evento << endl; //Imprimir linea
				}

				cout << "***************************************************" << endl; 
			
			}



		}

		#pragma endregion Clientes

		#pragma region Administradores

		//Variables aux
		
		string monto;


		std::ifstream archivoAdmin;
		archivoAdmin.open("Administradores.txt", ifstream::in);
		

		if (archivoAdmin.is_open())
		{



			cout << "***************************************************" << endl;
			while (getline(archivoAdmin, linea)) {
				cout << linea << endl; //Imprimir linea

				stringstream ss(linea);
				getline(ss, nombreAux, ';');
				cout << nombreAux << endl; //Imprimir nombre

				getline(ss, apellidoAux, ';');
				cout << apellidoAux << endl; //Imprimir apellido

				getline(ss, id, ';');
				cout << id << endl; //Imprimir id

				getline(ss, ciudadAux, ';');
				cout << ciudadAux << endl; //Imprimir ciudad

				getline(ss, monto, ';');
				cout << monto << endl; //Imprimir numero

				cout << "***************************************************" << endl;
				//ciclo de eventos

				while (!ss.eof()) {
					string evento;
					getline(ss, evento, ';');
					cout << evento << endl; //Imprimir linea
				}

				cout << "***************************************************" << endl;

			}



		}
		#pragma endregion Administradores
	}






}









int main()
{
	lecturaDeArchivos::LecturaArchivos();


	std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
