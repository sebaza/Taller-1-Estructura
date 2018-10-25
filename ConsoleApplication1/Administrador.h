#pragma once
#include "ListaEventos.h"
#include <iostream>
using namespace std;

class Administrador

{
public:
	Administrador(string nombre, string apellido, string id, string ciudad);
	~Administrador();

private:
	string nombre;
	string apellido;
	string id;
	string ciudad; 
	int monto;
	ListaEventos listaEventos;


};

