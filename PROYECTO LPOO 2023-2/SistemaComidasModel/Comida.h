#pragma once
using namespace System;

public ref class Comida {
	/*Definimos los atributos*/
private:
	int codigo;
	String^ Nombre;
	String^ Descripcion;
	String^ Ingredientes;
	double precio;
	/*Definimos m�todos*/
public:
	Comida();
	Comida(int codigo, String^ Nombre, String^ Descripcion, String^ Ingredientes, double precio);
};