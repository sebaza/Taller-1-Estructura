#pragma once
#include "Evento.h"
class ListaEventos

{
public:
	ListaEventos();
	~ListaEventos();
	void agregarEvento();
	bool buscarEvento();

private:

	int cantidadEventos;
	Evento listaEventos[100];//Arreglo temporal
	
};

