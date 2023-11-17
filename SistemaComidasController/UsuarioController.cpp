#include "UsuarioController.h"

using namespace SistemaComidasController;
using namespace System::IO;

UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();

}
/*Son los metodos propios del manejo de BD*/
void UsuarioController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server = 200.16.7.140; DataBase = a20192506; User Id = a20192506; Password = QMH7NqVu";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void UsuarioController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Usuario^>^ UsuarioController::BuscarUsuario(String^ Tipo) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Usuario where TipoUsuario like '%" + Tipo + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ NombreUsuario = safe_cast<String^>(objData[1]);
		String^ Contraseña = safe_cast<String^>(objData[2]);
		String^ TipoUsuario = safe_cast<String^>(objData[3]);
		
		Usuario^ objUsuario = gcnew Usuario( codigo, NombreUsuario, Contraseña, TipoUsuario);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexionBD();
	return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarAll() {
	/*List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ NombreUsuario = datos[1];
		String^ Contrasena = datos[2];
		String^ TipoUsuario = datos[3];

		Usuario^ objUsuario = gcnew Usuario(codigoUsuario, NombreUsuario, Contrasena, TipoUsuario);
		listaUsuariosEncontrados->Add(objUsuario);
	}*/

	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Usuario";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ NombreUsuario = safe_cast<String^>(objData[1]);
		String^ Contraseña = safe_cast<String^>(objData[2]);
		String^ TipoUsuario = safe_cast<String^>(objData[3]);

		Usuario^ objUsuario = gcnew Usuario(codigo, NombreUsuario, Contraseña, TipoUsuario);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexionBD();
	return listaUsuarios;
}

/*void UsuarioController::escribirArchivo(List<Usuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);

	for (int i = 0; i < listaUsuarios->Count; i++) {
		Usuario^ objUsuario = listaUsuarios[i];
		lineasArchivo[i] = objUsuario->getCodigo() + ";" + objUsuario->getNombreUsuario() + ";" + objUsuario->getContrasena() + ";" + objUsuario->getTipoUsuario();
	}

	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}*/

void UsuarioController::agregarUsuario( String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into SC_Usuario(NombreUsuario,Contraseña,TipoUsuario) values ('" + NombreUsuario + "','" + Contrasena + "','" + TipoUsuario + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void UsuarioController::eliminarUsuarioFisico(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete SC_Usuario where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

Usuario^ UsuarioController::buscarUsuarioporCodigo(int codigo) {
	Usuario^ objUsuario;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Usuario where codigo=" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ NombreUsuario = safe_cast<String^>(objData[1]);
		String^ Contraseña = safe_cast<String^>(objData[2]);
		String^ TipoUsuario = safe_cast<String^>(objData[3]);
		objUsuario = gcnew Usuario(codigo,NombreUsuario, Contraseña, TipoUsuario);
	}
	cerrarConexionBD();
	return objUsuario;
}

void UsuarioController::actualizarUsuario(int codigo,String^ NombreUsuario, String^ Contrasena, String^ TipoUsuario) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update SC_Usuario set NombreUsuario='" + NombreUsuario + "', Contraseña='" + Contrasena + "', TipoUsuario='" + TipoUsuario +  "' where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}