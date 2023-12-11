#pragma once
#pragma once
#include"PedidoController.h"
#include"DetallePedidoController.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;
using namespace System::Data::SqlClient;

namespace SistemaComidasController {
	public ref class CocineroController {
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		CocineroController();
		void abrirConexionBD();
		void cerrarConexionBD();
		List<Pedido^>^ buscarPedidoxEstado();
		void ActualizarEstadoPedido(int codigoPedido);
	};
}