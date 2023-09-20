#pragma once

using namespace System;

public ref class Bebida {
	/*Definimos los atributos*/
private:
	int codigo;
	String^ Nombre;
	String^ Descripcion;
	double precio;
	/*Definimos métodos*/
public:
	Bebida();
	Bebida(int codigo, String^ Nombre, String^ Descripcion, double precio);
};