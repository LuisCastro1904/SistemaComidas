#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;
using namespace System::Data::SqlClient;

namespace SistemaComidasController {
	public ref class DetallePedidoController {
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		DetallePedidoController();
		void abrirConexionBD();
		void cerrarConexionBD();
		List<DetallePedido^>^ buscarAll();
		//void escribirArchivo(List<DetallePedido^>^ DetallePedido);
		void agregarDetallePedido(int Cantidad, String^ NombreProducto, double	PrecioUnitario, double	Importe);
		void eliminarDetallePedidoFisico(int codigo);
		DetallePedido^ buscarDetallePedidoxNombreProducto(String^ NombreProducto);
		void actualizarDetallePedido(int Cantidad);
		/*List<DetallePedido^>^ BuscarDetalle(int codigoPedido);
		List<String^>^ obtenerProductos();*/
	};
}