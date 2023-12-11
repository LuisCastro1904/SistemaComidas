#include "Pedido.h"
using namespace SistemaComidasModel;
Pedido::Pedido() {

}
Pedido::Pedido(int codigo, bool EstadoPedido, double TiempoEstimado, String^ Fecha, Double PrecioTotal, String^ Nombres, String^ Apellidos, String^ DNI, String^ NumeroTarjeta, int CodigoRecibido, List<DetallePedido^>^ listaDetalles, bool EstadoRecojo)
{
	this->codigo = codigo;
	this->EstadoPedido = EstadoPedido;
    this->TiempoEstimado = TiempoEstimado;
	this->Fecha = Fecha;
	this->PrecioTotal = PrecioTotal;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->DNI = DNI;
	this->NumeroTarjeta = NumeroTarjeta;
	this->CodigoRecibido = CodigoRecibido;
    this->listaDetalles = listaDetalles;
    this->EstadoRecojo = EstadoRecojo;
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

String^ Pedido::getFecha() {
    return this->Fecha;
}

void Pedido::setFecha(String^ Fecha) {
    this->Fecha = Fecha;
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

int Pedido::getCodigoRecibido() {
    return this->CodigoRecibido;
}

void Pedido::setCodigoRecibido(int CodigoRecibido) {
    this->CodigoRecibido = CodigoRecibido;
}
List<DetallePedido^>^ Pedido::getLlistaDetalles() {
    return this->listaDetalles;
}
void  Pedido::setlistaDetalles(List<DetallePedido^>^ listaDetalles) {
    this->listaDetalles = listaDetalles;
}

bool Pedido::getEstadoRecojo() {
    return this->EstadoRecojo;
}
void Pedido::setEstadoRecojo(bool EstadoRecojo) {
    this->EstadoRecojo = EstadoRecojo;
}