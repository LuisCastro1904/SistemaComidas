#include "Producto.h"
using namespace SistemaComidasModel;
Producto::Producto() {

}
Producto::Producto(int codigo, String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen) {
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Descripcion = Descripcion;
	this->Precio = Precio;
	this->Tipo = Tipo;
	this->Stock = Stock;
	this->Imagen = Imagen;
}

int Producto::getCodigo() {
	return this->codigo;
}
void Producto::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ Producto::getNombre() {
	return this->Nombre;
}
void Producto::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
String^ Producto::getDescripcion() {
	return this->Descripcion;
}
void Producto::setDescripcion(String^ Descripcion) {
	this->Descripcion = Descripcion;
}
double Producto::getPrecio() {
	return this->Precio;
}
void Producto::setPrecio(double Precio) {
	this->Precio = Precio;
}
String^ Producto::getTipo() {
	return this->Tipo;
}
void Producto::setTipo(String^ Tipo) {
	this->Tipo = Tipo;
}
int Producto::getStock() {
	return this->Stock;
}
void Producto::setStock(int Stock) {
	this->Stock = Stock;
}
String^ Producto::getImagen() {
	return this->Imagen;
}
void Producto::setImagen(String^ Imagen) {
	this->Imagen = Imagen;
}