#include "DetallePedidoController.h"

using namespace SistemaComidasController;
using namespace System::IO;

DetallePedidoController::DetallePedidoController() {

}

List<DetallePedido^>^ DetallePedidoController::buscarAll() {
	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	array<String^>^ lineas = File::ReadAllLines("DetallesPedidos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		int Cantidad = Convert::ToInt32(datos[1]);
		String^ Descripcion = datos[2];
		Double PrecioUnitario = Convert::ToDouble(datos[3]);
		Double Importe = Convert::ToDouble(datos[4]);

		DetallePedido^ objDetallePedido = gcnew DetallePedido(codigo, Cantidad, Descripcion, PrecioUnitario, Importe);
		listaDetallePedidos->Add(objDetallePedido);
	}
	return listaDetallePedidos;
}

void DetallePedidoController::escribirArchivo(List<DetallePedido^>^ listaDetallePedidos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDetallePedidos->Count);

	for (int i = 0; i < listaDetallePedidos->Count; i++) {
		DetallePedido^ objDetallePedido = listaDetallePedidos[i];
		lineasArchivo[i] = objDetallePedido->getCodigo() + ";" + objDetallePedido->getCantidad() + ";" + objDetallePedido->getDescripcion() + ";" + objDetallePedido->getPrecioUnitario() + ";" + objDetallePedido->getImporte();
	}

	File::WriteAllLines("DetallesPedidos.txt", lineasArchivo);
}

void DetallePedidoController::agregarDetallePedido(DetallePedido^ objDetallePedido) {
	List<DetallePedido^>^ listaDetallesPedidos = buscarAll();
	listaDetallesPedidos->Add(objDetallePedido);
	escribirArchivo(listaDetallesPedidos);
}

void DetallePedidoController::eliminarDetallePedidoFisico(int codigo) {
	List<DetallePedido^>^ listaDetallesPedidos = buscarAll();

	for (int i = 0; i < listaDetallesPedidos->Count; i++) {
		if (listaDetallesPedidos[i]->getCodigo() == codigo) {
			listaDetallesPedidos->RemoveAt(i);
		}
	}
	escribirArchivo(listaDetallesPedidos);
}

DetallePedido^ DetallePedidoController::buscarDetallePedidoxCodigo(int codigo) {
	List<DetallePedido^>^ listaDetallesPedidos = buscarAll();
	for (int i = 0; i < listaDetallesPedidos->Count; i++) {
		if (listaDetallesPedidos[i]->getCodigo() == codigo) {
			return listaDetallesPedidos[i];
		}
	}
}

void DetallePedidoController::actualizarDetallePedido(DetallePedido^ objDetallePedido) {
	List<DetallePedido^>^ listaDetallesPedidos = buscarAll();
	for (int i = 0; i < listaDetallesPedidos->Count; i++) {
		if (listaDetallesPedidos[i]->getCodigo() == objDetallePedido->getCodigo()) {
			listaDetallesPedidos[i]->setCantidad(objDetallePedido->getCantidad());
			listaDetallesPedidos[i]->setDescripcion(objDetallePedido->getDescripcion());
			listaDetallesPedidos[i]->setPrecioUnitario(objDetallePedido->getPrecioUnitario());
			listaDetallesPedidos[i]->setImporte(objDetallePedido->getImporte());
			break;
		}
	}
	escribirArchivo(listaDetallesPedidos);
}