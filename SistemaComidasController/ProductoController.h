#pragma once



namespace SistemaComidasController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaComidasModel;
	using namespace System::Data::SqlClient;
	public ref class ProductoController {
		private:
			SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
		public:
			ProductoController();
			List<Producto^>^ BuscarProducto(String^ Tipo);
			List<Producto^>^ buscarAll();
			//void escribirArchivo(List<Producto^>^ listaProductos);
			void eliminarProductoFisico(int codigo);
			void agregarProducto(String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen);
			Producto^ buscarProductoporCodigo(int codigo);
			void actualizarProducto(int codigo, String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen);
			List<String^>^ obtenerProductos();
			Producto^ buscarProductoxNombre(String^ Nombre);
			int obtenerCantidadComidas();
			List<String^>^ obtenerComidas();
			int obtenerCantidadBebidas();
			List<String^>^ obtenerBebidas();
			void actualizarStock(String^ nombreProducto, int nuevoStock);

			/*Base de Datos*/
			void abrirConexionBD();
			void cerrarConexionBD();
		};
}