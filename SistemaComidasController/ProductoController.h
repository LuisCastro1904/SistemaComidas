#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class ProductoController {
	public:
		ProductoController();
		List<Producto^>^ BuscarProducto(String^ Tipo);
		List<Producto^>^ buscarAll();
		void escribirArchivo(List<Producto^>^ listaProductos);
		void eliminarProductoFisico(int codigo);
		void agregarProducto(Producto^ objProducto);
		Producto^ buscarProductoporCodigo(int codigo);
		void actualizarProducto(Producto^ objProducto);
		List<String^>^ obtenerProductos();
		Producto^ buscarProductoxNombre(String^ Nombre);
	};
}