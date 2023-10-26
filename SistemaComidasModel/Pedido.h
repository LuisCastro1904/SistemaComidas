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
		int getCodigo();
		void setCodigo(int codigo);

		bool getEstadoPedido();
		void setEstadoPedido(bool EstadoPedido);

		double getTiempoEstimado();
		void setTiempoEstimado(double TiempoEstimado);

		bool getEstadoPago();
		void setEstadoPago(bool EstadoPago);

		String^ getFecha();
		void setFecha(String^ Fecha);

		String^ getDireccion();
		void setDireccion(String^ Direccion);

		double getPrecioTotal();
		void setPrecioTotal(double PrecioTotal);

		String^ getNombres();
		void setNombres(String^ Nombres);

		String^ getApellidos();
		void setApellidos(String^ Apellidos);

		String^ getDNI();
		void setDNI(String^ DNI);

		String^ getNumeroTarjeta();
		void setNumeroTarjeta(String^ NumeroTarjeta);

		String^ getNumeroPedido();
		void setNumeroPedido(String^ NumeroPedido);

		int getCodigoRecibido();
		void setCodigoRecibido(int CodigoRecibido);
	};
}