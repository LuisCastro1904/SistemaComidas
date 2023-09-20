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
	/*Definimos m�todos*/
public:
	Pedido();
	Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, bool EstadoPago, String^ Fecha, String^ Direccion, Double PrecioTotal);
};
