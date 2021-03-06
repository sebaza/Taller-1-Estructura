// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include "Cliente.h"
#include "Evento.h"
#include "ADministrador.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

namespace lecturaDeArchivos {

	void LecturaArchivos() {

		#pragma region Clientes
		//Variables aux
		

		


		std::ifstream archivoClientes;
		archivoClientes.open("Clientes.txt", ifstream::in);

		string linea;
		string aux_1;
		
		if (archivoClientes.is_open())
		{
			cout << "***************************************************" << endl;
			while (getline(archivoClientes, linea)) {

				
				

				cout << linea << endl; //Imprimir linea
				
				stringstream ss(linea);
				getline(ss, aux_1, ';');
				cout << aux_1 << endl; //Imprimir nombre

				getline(ss, aux_1, ';');
				cout << aux_1 << endl; //Imprimir apellido

				getline(ss, aux_1, ';');
				cout << aux_1 << endl; //Imprimir id

				getline(ss, aux_1, ';');
				cout << aux_1 << endl; //Imprimir ciudad

				getline(ss, aux_1, ';');
				cout << aux_1 << endl; //Imprimir numero

				cout << "***************************************************" << endl;
				cout << "LISTA DE EVENTOS" << endl;
				//ciclo de eventos

				while (!ss.eof()) {
					string evento;
					getline(ss, evento, ';');
					cout << evento << endl; //Imprimir linea
				}

				cout << "***************************************************" << endl; 
			
			}


			aux_1.clear(); //Liberacion de memoria para la variable auxiliar.
		}

		#pragma endregion Clientes

		#pragma region Administradores

		//Variables aux
		
		string monto;


		std::ifstream archivoAdmin;
		archivoAdmin.open("Administradores.txt", ifstream::in);
		string aux_2;

		if (archivoAdmin.is_open())
		{



			cout << "***************************************************" << endl;
			while (getline(archivoAdmin, linea)) {
				cout << linea << endl; //Imprimir linea

				stringstream ss(linea);
				getline(ss, aux_2, ';');
				cout << aux_2 << endl; //Imprimir nombre

				getline(ss, aux_2, ';');
				cout << aux_2 << endl; //Imprimir apellido

				getline(ss, aux_2, ';');
				cout << aux_2 << endl; //Imprimir id

				getline(ss, aux_2, ';');
				cout << aux_2 << endl; //Imprimir ciudad

				getline(ss, aux_2, ';');
				cout << aux_2 << endl; //Imprimir numero

				cout << "***************************************************" << endl;
				//ciclo de eventos
				cout << "LISTA DE EVENTOS" << endl;
				while (!ss.eof()) {
					string evento;
					getline(ss, evento, ';');
					cout << evento << endl; //Imprimir linea
				}

				cout << "***************************************************" << endl;

			}


			aux_2.clear(); //Liberacion de memoria para la variable auxiliar.
		}
		#pragma endregion Administradores


		#pragma region Eventos

		std::ifstream archivoEventos;
		archivoEventos.open("Eventos.txt", ifstream::in);
		string aux_3;

		if (archivoEventos.is_open())
		{



			cout << "***************************************************" << endl;
			while (getline(archivoEventos, linea)) {
				cout << linea << endl; //Imprimir linea

				stringstream ss(linea);
				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir nombre evento

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir ciudad evento

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir id del cliente

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir id del administrador

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir id del evento.

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir tipo de evento.

				getline(ss, aux_3, ',');
				cout << aux_3 << endl; //Imprimir estado del evento.

				if (aux_3.compare("Realizado") == 0) {
				
					
					getline(ss, aux_3, ',');
					cout << aux_3 << endl; //Imprimir cantidad de personas esperadas del evento.


					getline(ss, aux_3, ',');
					cout << aux_3 << endl; //Imprimir cantidad de personas asistentes del evento.
				}
				else {
				
					getline(ss, aux_3, ',');
					cout << aux_3 << endl; //Imprimir cantidad de personas esperadas del evento.
				}
				

				cout << "***************************************************" << endl;
				cout << "***************************************************" << endl;

			}

			aux_3.clear(); //Liberacion de memoria para la variable auxiliar.

		}

		#pragma endregion Eventos
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
