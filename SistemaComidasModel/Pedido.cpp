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
int Pedido::getCodigo() {
    return this->codigo;
}

void Pedido::setCodigo(int codigo) {
    this->codigo = codigo;
}

bool Pedido::getEstadoPedido() {
    return this->EstadoPedido;
}

void Pedido::setEstadoPedido(bool EstadoPedido) {
    this->EstadoPedido = EstadoPedido;
}

double Pedido::getTiempoEstimado() {
    return this->TiempoEstimado;
}

void Pedido::setTiempoEstimado(double TiempoEstimado) {
    this->TiempoEstimado = TiempoEstimado;
}

bool Pedido::getEstadoPago() {
    return this->EstadoPago;
}

void Pedido::setEstadoPago(bool EstadoPago) {
    this->EstadoPago = EstadoPago;
}

String^ Pedido::getFecha() {
    return this->Fecha;
}

void Pedido::setFecha(String^ Fecha) {
    this->Fecha = Fecha;
}

String^ Pedido::getDireccion() {
    return this->Direccion;
}

void Pedido::setDireccion(String^ Direccion) {
    this->Direccion = Direccion;
}

double Pedido::getPrecioTotal() {
    return this->PrecioTotal;
}

void Pedido::setPrecioTotal(double PrecioTotal) {
    this->PrecioTotal = PrecioTotal;
}

String^ Pedido::getNombres() {
    return this->Nombres;
}

void Pedido::setNombres(String^ Nombres) {
    this->Nombres = Nombres;
}

String^ Pedido::getApellidos() {
    return this->Apellidos;
}

void Pedido::setApellidos(String^ Apellidos) {
    this->Apellidos = Apellidos;
}

String^ Pedido::getDNI() {
    return this->DNI;
}

void Pedido::setDNI(String^ DNI) {
    this->DNI = DNI;
}

String^ Pedido::getNumeroTarjeta() {
    return this->NumeroTarjeta;
}

void Pedido::setNumeroTarjeta(String^ NumeroTarjeta) {
    this->NumeroTarjeta = NumeroTarjeta;
}

String^ Pedido::getNumeroPedido() {
    return this->NumeroPedido;
}

void Pedido::setNumeroPedido(String^ NumeroPedido) {
    this->NumeroPedido = NumeroPedido;
}

int Pedido::getCodigoRecibido() {
    return this->CodigoRecibido;
}

void Pedido::setCodigoRecibido(int CodigoRecibido) {
    this->CodigoRecibido = CodigoRecibido;
}