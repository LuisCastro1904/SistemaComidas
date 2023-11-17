#pragma once

using namespace System;
namespace SistemaComidasModel {
	public ref class DetallePedido {
		/*Definimos los atributos*/
	private:
		int codigo;
		int Cantidad;
		String^ NombreProducto;
		double PrecioUnitario;
		double Importe;
		int CodigoPedido;
		/*Definimos métodos*/
	public:
		DetallePedido();
		DetallePedido(int codigo, int Cantidad, String^ NombreProducto, double PrecioUnitario, double Importe, int CodigoPedido);
		
		int getCodigo();
		void setCodigo(int codigo);

		int getCantidad();
		void setCantidad(int Cantidad);

		String^ getNombreProducto();
		void setNombreProducto(String^ NombreProducto);

		double getPrecioUnitario();
		void setPrecioUnitario(double PrecioUnitario);

		double getImporte();
		void setImporte(double Importe);

		int getCodigoPedido();
		void setCodigoPedido(int CodigoPedido);
	};
}