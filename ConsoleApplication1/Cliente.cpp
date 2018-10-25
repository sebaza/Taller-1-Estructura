#include "pch.h"
#include "Cliente.h"



Cliente::Cliente(string nombre, string apellido, string id, string ciudad, int telefono)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->id = id;
	this->ciudad = ciudad;
	this->telefono = telefono; 
}


Cliente::~Cliente()
{
}
