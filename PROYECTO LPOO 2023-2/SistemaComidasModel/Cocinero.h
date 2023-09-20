#pragma once

#include "Persona.h"
using namespace System;

public ref class Cocinero :Persona {
	/*Definimos los atributos*/
private:
	int NumeroPedido;
	/*Definimos métodos*/
public:
	Cocinero();
	Cocinero(int NumeroPedido);
};