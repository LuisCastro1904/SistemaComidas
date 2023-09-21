#include "Cocinero.h"
using namespace SistemaComidasModel;
Cocinero::Cocinero() :Persona() {

}
Cocinero::Cocinero(int NumeroPedido) :Persona(codigo, Nombres, Apellidos, DNI)
{
	this->NumeroPedido = NumeroPedido;
}
