#include "Pedido.h"
using namespace SistemaComidasModel;
Pedido::Pedido() {

}
Pedido::Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, bool EstadoPago, String^ Fecha, String^ Direccion, Double PrecioTotal, String^ Nombres, String^ Apellidos, String^ DNI, String^ NumeroTarjeta, String^ NumeroPedido, int CodigoRecibido)
{
	this->codigo = codigo;
	this->EstadoPedido = EstadoPedido;
	this->EstadoPago = EstadoPago;
	this->EstadoPedido = EstadoPedido;
	this->Fecha = Fecha;
	this->Direccion = Direccion;
	this->PrecioTotal = PrecioTotal;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->DNI = DNI;
	this->NumeroTarjeta = NumeroTarjeta;
	this->NumeroPedido = NumeroPedido;
	this->CodigoRecibido = CodigoRecibido;
}