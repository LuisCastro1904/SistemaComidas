#pragma once

#include "Persona.h"
using namespace System;
namespace SistemaComidasModel {
	public ref class Cocinero :Persona {
		/*Definimos los atributos*/
	private:
		int NumeroPedido;
		/*Definimos m�todos*/
	public:
		Cocinero();
		Cocinero(int NumeroPedido);
	};
}