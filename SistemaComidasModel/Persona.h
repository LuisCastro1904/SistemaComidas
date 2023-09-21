#pragma once

using namespace System;
namespace SistemaComidasModel {
	public ref class Persona {
		/*Definimos los atributos*/
	protected:
		int codigo;
		String^ Nombres;
		String^ Apellidos;
		String^ DNI;
		/*Definimos métodos*/
	public:
		Persona();
		Persona(int codigo, String^ Nombres, String^ Apellidos, String^ DNI);
	};
}