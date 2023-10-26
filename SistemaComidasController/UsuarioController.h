#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class UsuarioController {
	public:
		UsuarioController();
		List<Usuario^>^ BuscarUsuario(String^ Tipo);
		List<Usuario^>^ buscarAll();
		void escribirArchivo(List<Usuario^>^ listaUsuarios);
		void agregarUsuario(Usuario^ objUsuario);
		void eliminarUsuarioFisico(int codigo);
		Usuario^ buscarUsuarioporCodigo(int codigo);
		void actualizarUsuario(Usuario^ objUsuario);
	};
}