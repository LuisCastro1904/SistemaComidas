#pragma once

using namespace System;
namespace SistemaComidasModel {

	public ref class Usuario {
		/*Definimos los atributos*/
	private:
		int codigo;
		String^ NombreUsuario;
		String^ Contrasena;
		String^ TipoUsuario;

		/*Definimos métodos*/
	public:
		Usuario();
		Usuario(int codigo, String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreUsuario();
		void setNombreUsuario(String^ NombreUsuario);
		String^ getContrasena();
		void setContrasena(String^ Contrasena);
		String^ getTipoUsuario();
		void setTipoUsuario(String^ TipoUsuario);
	};
}