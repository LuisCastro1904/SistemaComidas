#include "Producto.h"

Producto::Producto() {

}
Producto::Producto(int codigo, String^ Nombre, double Precio, String^ Ingredientes, String^ Tipo) {
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->Ingredientes = Ingredientes;
	this->Tipo = Tipo;
}