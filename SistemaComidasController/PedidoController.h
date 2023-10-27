#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class PedidoController {
	public:
		PedidoController();
		List<Pedido^>^ BuscarPedido(String^ Tipo);
		List<Pedido^>^ buscarAll();
		void escribirArchivo(List<Pedido^>^ ListaPedido);
		void eliminaPedidoFisico(int codigo);
		void agregarPedido(Pedido^ objPedido);
		Pedido^ buscarPedidoporCodigo(int Pedido);
		void actualizarPedido(Pedido^ objPedido);
		List<String^>^ obtenerPedidos();
	};
}