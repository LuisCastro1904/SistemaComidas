#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class DetallePedidoController {
	public:
		DetallePedidoController();
		List<DetallePedido^>^ buscarAll();
		void escribirArchivo(List<DetallePedido^>^ DetallePedido);
		void agregarDetallePedido(DetallePedido^ objDetallePedido);
		void eliminarDetallePedidoFisico(int codigo);
		DetallePedido^ buscarDetallePedidoxCodigo(int codigo);
		void actualizarDetallePedido(DetallePedido^ objDetallePedido);
		/*List<DetallePedido^>^ BuscarDetalle(int codigoPedido);
		List<String^>^ obtenerProductos();*/
	};
}