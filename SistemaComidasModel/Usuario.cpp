#include "Usuario.h"

using namespace SistemaComidasModel;
Usuario::Usuario() {

}
Usuario::Usuario(int codigo, String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario) {
	this->codigo = codigo;
	this->NombreUsuario = NombreUsuario;
	this->Contrasena = Contrasena;
	this->TipoUsuario = TipoUsuario;
}

int Usuario::getCodigo() {
	return this->codigo;
}
void Usuario::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ Usuario::getNombreUsuario() {
	return this->NombreUsuario;
}
void Usuario::setNombreUsuario(String^ NombreUsuario) {
	this->NombreUsuario = NombreUsuario;
}
String^ Usuario::getContrasena() {
	return this->Contrasena;
}
void Usuario::setContrasena(String^ Contrasena) {
	this->Contrasena = Contrasena;
}
String^ Usuario::getTipoUsuario() {
	return this->TipoUsuario;
}
void Usuario::setTipoUsuario(String^ TipoUsuario) {
	this->TipoUsuario = TipoUsuario;
}