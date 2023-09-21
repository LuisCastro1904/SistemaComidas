#include "DetallePedido.h"
using namespace SistemaComidasModel;
DetallePedido::DetallePedido() {

}
DetallePedido::DetallePedido(int codigo, int Cantidad, String^ Descripcion, double PrecioUnitario, double Importe) {
	this->codigo = codigo;
	this->Cantidad = Cantidad;
	this->Descripcion = Descripcion;
	this->PrecioUnitario = PrecioUnitario;
	this->Importe = Importe;
}