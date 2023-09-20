#include "Pedido.h"

Pedido::Pedido() {

}
Pedido::Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, bool EstadoPago, String^ Fecha, String^ Direccion, Double PrecioTotal)
{
	this->codigo = codigo;
	this->EstadoPedido = EstadoPedido;
	this->EstadoPago = EstadoPago;
	this->EstadoPedido = EstadoPedido;
	this->Fecha = Fecha;
	this->Direccion = Direccion;
	this->PrecioTotal = PrecioTotal;
}