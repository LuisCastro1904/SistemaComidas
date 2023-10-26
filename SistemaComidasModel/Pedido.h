#pragma once

using namespace System;
namespace SistemaComidasModel {
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
		String^ Nombres;
		String^ Apellidos;
		String^ DNI;
		String^ NumeroTarjeta;
		String^ NumeroPedido;
		int CodigoRecibido;
		/*Definimos métodos*/
	public:
		Pedido();
		Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, bool EstadoPago, String^ Fecha, String^ Direccion, Double PrecioTotal, String^ Nombres, String^ Apellidos, String^ DNI, String^ NumeroTarjeta, String^ NumeroPedido, int CodigoRecibido);
	};
}