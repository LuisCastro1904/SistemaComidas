#include "Bebida.h"

Bebida::Bebida() {

}
Bebida::Bebida(int codigo, String^ Nombre, String^ Descripcion, double precio)
{
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Descripcion = Descripcion;
	this->precio = precio;
	
}
