#pragma once

using namespace System;
namespace SistemaComidasModel {
	public ref class Producto {
		/*Definimos los atributos*/
	private:
		int codigo;
		String^ Nombre;
		String^ Descripcion;
		double Precio;
		String^ Tipo;
		int Stock;
		String^ Imagen;
		/*Definimos métodos*/
	public:
		Producto();
		Producto(int codigo, String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombre();
		void setNombre(String^ Nombre);
		String^ getDescripcion();
		void setDescripcion(String^ Descripcion);
		double getPrecio();
		void setPrecio(double Precio);
		String^ getTipo();
		void setTipo(String^ Tipo);
		int getStock();
		void setStock(int Stock);
		String^ getImagen();
		void setImagen(String^ Imagen);
	};
}