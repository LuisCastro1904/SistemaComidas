#include "Cliente.h"

Cliente::Cliente() :Persona() {

}
Cliente::Cliente(String^ NumeroTarjeta, String^ NumeroPedido, int CodigoRecibido) :Persona(codigo, Nombres, Apellidos, DNI)
{
	this->NumeroTarjeta = NumeroTarjeta;
	this->NumeroPedido = NumeroPedido;
	this->CodigoRecibido = CodigoRecibido;
}