#pragma once

using namespace System;
namespace SistemaComidasModel {
	public ref class DetallePedido {
		/*Definimos los atributos*/
	private:
		int codigo;
		int Cantidad;
		String^ Descripcion;
		double PrecioUnitario;
		double Importe;
		/*Definimos métodos*/
	public:
		DetallePedido();
		DetallePedido(int codigo, int Cantidad, String^ Descripcion, double PrecioUnitario, double Importe);
		int getCodigo();
		void setCodigo(int codigo);

		int getCantidad();
		void setCantidad(int Cantidad);

		String^ getDescripcion();
		void setDescripcion(String^ Descripcion);

		double getPrecioUnitario();
		void setPrecioUnitario(double PrecioUnitario);

		double getImporte();
		void setImporte(double Importe);
	};
}