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

String^ DetallePedido::getDescripcion() {
    return this->Descripcion;
}

void DetallePedido::setDescripcion(String^ Descripcion) {
    this->Descripcion = Descripcion;
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