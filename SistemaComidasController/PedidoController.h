#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;
using namespace System::Data::SqlClient;

namespace SistemaComidasController {
	public ref class PedidoController {
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		PedidoController();
		void abrirConexionBD();
		void cerrarConexionBD();
		//List<Pedido^>^ BuscarPedido(String^ Tipo);
		//List<Pedido^>^ buscarAll();
		void agregarPedido(bool EstadoPedido, double TiempoEstimado, String^ Fecha, double PrecioTotal, String^ Nombres, String^ Apellidos, String^ DNI, String^ NumeroTarjeta, int CodigoRecibido);
		int obtenerCodigoUltimoPedido();
		int obtenerCodigoRecibidoUltimoPedido(int codigoUltimoPedido);
	};
}