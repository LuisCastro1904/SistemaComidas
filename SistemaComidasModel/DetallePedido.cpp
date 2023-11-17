#include "DetallePedido.h"
using namespace SistemaComidasModel;
DetallePedido::DetallePedido() {

}
DetallePedido::DetallePedido(int codigo, int Cantidad, String^ NombreProducto, double PrecioUnitario, double Importe, int CodigoPedido) {
	this->codigo = codigo;
	this->Cantidad = Cantidad;
	this->NombreProducto = NombreProducto;
	this->PrecioUnitario = PrecioUnitario;
	this->Importe = Importe;
    this->CodigoPedido = CodigoPedido;
}
int DetallePedido::getCodigo() {
    return this->codigo;
}

void DetallePedido::setCodigo(int codigo) {
    this->codigo = codigo;
}

int DetallePedido::getCantidad() {
    return this->Cantidad;
}

void DetallePedido::setCantidad(int Cantidad) {
    this->Cantidad = Cantidad;
}

String^ DetallePedido::getNombreProducto() {
    return this->NombreProducto;
}

void DetallePedido::setNombreProducto(String^ NombreProducto) {
    this->NombreProducto = NombreProducto;
}

double DetallePedido::getPrecioUnitario() {
    return this->PrecioUnitario;
}

void DetallePedido::setPrecioUnitario(double PrecioUnitario) {
    this->PrecioUnitario = PrecioUnitario;
}

double DetallePedido::getImporte() {
    return this->Importe;
}

void DetallePedido::setImporte(double Importe) {
    this->Importe = Importe;
}

int DetallePedido::getCodigoPedido() {
    return this->CodigoPedido;
}

void DetallePedido::setCodigoPedido(int CodigoPedido) {
    this->CodigoPedido = CodigoPedido;
}