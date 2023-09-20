#include "Cocinero.h"

Cocinero::Cocinero() :Persona() {

}
Cocinero::Cocinero(int NumeroPedido) :Persona(codigo, Nombres, Apellidos, DNI)
{
	this->NumeroPedido = NumeroPedido;
}
