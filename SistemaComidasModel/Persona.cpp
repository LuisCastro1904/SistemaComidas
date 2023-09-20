#include "Persona.h"

Persona::Persona() {

}
Persona::Persona(int codigo, String^ Nombres, String^ Apellidos, String^ DNI) {
	this->codigo = codigo;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->DNI = DNI;
}