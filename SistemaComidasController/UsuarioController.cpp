#include "UsuarioController.h"

using namespace SistemaComidasController;
using namespace System::IO;

UsuarioController::UsuarioController() {

}

List<Usuario^>^ UsuarioController::BuscarUsuario(String^ Tipo) {
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ NombreUsuario = datos[1];
		String^ Contrasena = datos[2];
		String^ TipoUsuario = datos[3];

		if (TipoUsuario->Contains(Tipo)) {
			Usuario^ objUsuario = gcnew Usuario(codigoUsuario, NombreUsuario, Contrasena, TipoUsuario);
			listaUsuariosEncontrados->Add(objUsuario);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ UsuarioController::buscarAll() {
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ NombreUsuario = datos[1];
		String^ Contrasena = datos[2];
		String^ TipoUsuario = datos[3];

		Usuario^ objUsuario = gcnew Usuario(codigoUsuario, NombreUsuario, Contrasena, TipoUsuario);
		listaUsuariosEncontrados->Add(objUsuario);
	}
	return listaUsuariosEncontrados;
}

void UsuarioController::escribirArchivo(List<Usuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);

	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ objUsuario = listaUsuarios[i];
		lineasArchivo[i] = objUsuario->getCodigo() + ";" + objUsuario->getNombreUsuario() + ";" + objUsuario->getContrasena() + ";" + objUsuario->getTipoUsuario();
	}

	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void UsuarioController::agregarUsuario(Usuario^ objUsuario) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	listaUsuarios->Add(objUsuario);
	escribirArchivo(listaUsuarios);
}

void UsuarioController::eliminarUsuarioFisico(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();

	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			listaUsuarios->RemoveAt(i);
		}
	}
	escribirArchivo(listaUsuarios);
}

Usuario^ UsuarioController::buscarUsuarioporCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			return listaUsuarios[i];
		}
	}
}

void UsuarioController::actualizarUsuario(Usuario^ objUsuario) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == objUsuario->getCodigo()) {
			listaUsuarios[i]->setNombreUsuario(objUsuario->getNombreUsuario());
			listaUsuarios[i]->setContrasena(objUsuario->getContrasena());
			listaUsuarios[i]->setTipoUsuario(objUsuario->getTipoUsuario());
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}