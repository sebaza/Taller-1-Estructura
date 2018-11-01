#include "stdafx.h"
#include "Principal.h"
#include "ListClient.h"
#include "ListEvent.h"
#include "ListAdmin.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;



Principal::Principal()
{
}


Principal::~Principal()
{
}

void Principal::LecturaDeArchivos()
{
#pragma region Clientes
	//Variables aux

	std::ifstream archivoClientes;
	archivoClientes.open("Clientes.txt", ifstream::in);

	string linea;
	string aux_1;

	if (archivoClientes.is_open()){

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

	if (archivoAdmin.is_open()){

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

	if (archivoEventos.is_open()){
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

void Principal::Menu()
{	
	LecturaDeArchivos();
	bool menu = true;
	cout << "Bienvenido a GenEvent" << endl;
	string opcion;
	string pause;
	while (menu) {
		cout << "A continuacion se mostraron un menu para que interactue" << endl;
		cout << "Menu principal:" << endl;
		cout << "1)Agregar" << endl;
		cout << "2)Administrar Evento" << endl;
		cout << "3)Buscar" << endl;
		cout << "4)Cerrar el programa" << endl;
		getline(cin, opcion);
		try {
			std::stoi(opcion);
		}
		catch (const std::exception) {
			cout << "Porfavor escriba un numero" << endl;
			continue;
		}
		int opcionVerificada = std::stoi(opcion);

		switch (opcionVerificada) {
		case 1:
			MenuAgregar();
			break;
		case 2:
			MenuAdministrar();
		case 3:
			MenuBuscar();
		case 4:
			cout << "Gracias por usar el programa" << endl;
			Despedidos();
			getline(cin, pause);
			menu = false;
			break;
		}
	}
}

void Principal::MenuAgregar()
{
	bool menu = true;
	cout << "Selecciono Agregar datos" << endl;
	string opcion;
	while (menu) {
		cout << "A continuacion se mostraron diferentes opciones que podran elegir" << endl;
		cout << "Menu Agregar:" << endl;
		cout << "1)Agregar Evento" << endl;
		cout << "2)Agregar Administrador" << endl;
		cout << "3)Agregar Cliente" << endl;
		cout << "4)volver" << endl;
		getline(cin, opcion);
		try {
			std::stoi(opcion);
		}
		catch (const std::exception) {
			cout << "Porfavor escriba un numero" << endl;
			continue;
		}
		int opcionVerificada = std::stoi(opcion);
		//recordar delete() despues
		string variable1;
		string variable2;
		string variable3;
		string variable4;
		string variable5;
		string variable6;
		string variable7;
		string variable8;
		string variable9;
		string* variableEventos = new string[10];
		
		ListEvent le;
			
		ListAdmin la;
		
		ListClient lc;
		

		switch (opcionVerificada) {
		case 1:
			//HalloweenNight, Antofagasta, C5, A20, E7, Cultural, Realizado, 3000, 2800

			cout << "Ingrese nombre" << endl;
			getline(cin, variable1);
			cout << "Ingrese ciudad" << endl;
			getline(cin, variable2);
			cout << "Ingrese la id del cliente" << endl;
			getline(cin, variable3);
			cout << "Ingrese la id del admin" << endl;
			getline(cin, variable4);
			cout << "Ingrese la id del evento" << endl;
			getline(cin, variable5);
			cout << "Ingrese el tipo de evento" << endl;
			getline(cin, variable6);
			cout << "Ingrese el estado del evento" << endl;
			getline(cin, variable7);
			cout << "Ingrese la cantidad de personas esperadas" << endl;
			getline(cin, variable8);
			cout << "Ingrese la cantidad de personas asistentes(si se a realizado)" << endl;
			getline(cin, variable9);
			le.AgregarEvent(variable1, variable2, variable3, variable4, variable5, variable6, variable7, std::stoi(variable8), std::stoi(variable9));

		case 2:






}

bool VerificarOpcion(string opcion) {

	return true;
}
menu::~menu()
{
}
