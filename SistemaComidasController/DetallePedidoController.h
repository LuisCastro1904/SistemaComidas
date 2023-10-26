#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class DetallePedidoController {
	public:
		DetallePedidoController();
		List<DetallePedido^>^ BuscarDetalle(int codigoPedido);
		List<DetallePedido^>^ buscarAll();
		void escribirArchivo(List<DetallePedido^>^ DetallePedido);
		void eliminarDetalleFisico(int codigo);
		void agregarDetalle(DetallePedido^ objDetallePedido);
		Producto^ buscarDetalleporCodigo(int codigo);
		void actualizarDetalle(DetallePedido^ objDetallePedido);
		List<String^>^ obtenerProductos();
	};
}