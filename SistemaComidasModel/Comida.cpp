#include "Comida.h"

Comida::Comida() {

}
Comida::Comida(int codigo, String^ Nombre, String^ Descripcion, String^ Ingredientes, double precio)
{
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Descripcion = Descripcion;
	this->Ingredientes = Ingredientes;
	this->precio = precio;
}
