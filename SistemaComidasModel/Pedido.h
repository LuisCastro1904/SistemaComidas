#pragma once

using namespace System;

public ref class Pedido {
	/*Definimos los atributos*/
private:
	int codigo;
	bool EstadoPedido;
	double TiempoEstimado;
	bool EstadoPago;
	String^ Fecha;
	String^ Direccion;
	Double PrecioTotal;
	/*Definimos métodos*/
public:
	Pedido();
	Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, bool EstadoPago, String^ Fecha, String^ Direccion, Double PrecioTotal);
};
