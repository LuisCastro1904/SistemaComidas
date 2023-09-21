#pragma once

#include "Persona.h"
using namespace System;
namespace SistemaComidasModel {
	public ref class Cliente :Persona {
		/*Definimos los atributos*/
	private:
		String^ NumeroTarjeta;
		String^ NumeroPedido;
		int CodigoRecibido;
		/*Definimos métodos*/
	public:
		Cliente();
		Cliente(String^ NumeroTarjeta, String^ NumeroPedido, int CodigoRecibido);
	};
}