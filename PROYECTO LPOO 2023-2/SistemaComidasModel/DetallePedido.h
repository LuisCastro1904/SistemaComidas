#pragma once

using namespace System;

public ref class DetallePedido {
	/*Definimos los atributos*/
private:
	int codigo;
	int Cantidad;
	String^ Descripcion;
	double PrecioUnitario;
	double Importe;
	/*Definimos m�todos*/
public:
	DetallePedido();
	DetallePedido(int codigo, int Cantidad, String^ Descripcion, double PrecioUnitario, double Importe);
};