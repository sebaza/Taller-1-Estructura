#pragma once
#include <iostream>

using namespace std;

class Cliente
#include "pch.h"


{
public:
	Cliente(string nombre, string apellido, string id, string ciudad, int telefono);
	~Cliente();


private:			
	string nombre;
	string apellido;
	string id;
	string ciudad;
	int telefono;
	
};

