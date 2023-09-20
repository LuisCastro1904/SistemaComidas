#pragma once

using namespace System;

public ref class Producto {
	/*Definimos los atributos*/
private:
	int codigo;
	String^ Nombre;
	String^ Descripcion;
	double Precio;
	String^ Ingredientes;
	String^ Tipo;
	/*Definimos métodos*/
public:
	Producto();
	Producto(int codigo, String^ Nombre, double Precio, String^ Ingredientes, String^ Tipo);
};
