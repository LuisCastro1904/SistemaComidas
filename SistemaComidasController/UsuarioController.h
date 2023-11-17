#pragma once



namespace SistemaComidasController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaComidasModel;
	using namespace System::Data::SqlClient;

	public ref class UsuarioController {
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		void abrirConexionBD();
		void cerrarConexionBD();
		UsuarioController();
		List<Usuario^>^ BuscarUsuario(String^ Tipo);
		List<Usuario^>^ buscarAll();
		//void escribirArchivo(List<Usuario^>^ listaUsuarios);
		void agregarUsuario( String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario);
		void eliminarUsuarioFisico(int codigo);
		Usuario^ buscarUsuarioporCodigo(int codigo);
		void actualizarUsuario(int codigo,String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario);
		
	};
}