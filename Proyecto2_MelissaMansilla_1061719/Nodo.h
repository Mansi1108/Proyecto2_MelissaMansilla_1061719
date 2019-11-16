#pragma once
#include <string>
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"
class Nodo
{
public:
	Nodo* siguiente;
	Nodo* anterior;

public:
	int numero;
	int valor;
public:
	Nodo();
	~Nodo();
};

