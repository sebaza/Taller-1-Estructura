#include "pch.h"
#include "Administrador.h"
#include <iostream>

using namespace std;


Administrador::Administrador(string nombre, string apellido, string id, string ciudad)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->id = id;
	this->ciudad = ciudad;
	this->monto = 7000;
}


Administrador::~Administrador()
{
}
