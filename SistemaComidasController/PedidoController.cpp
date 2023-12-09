#include "PedidoController.h"

using namespace SistemaComidasController;
using namespace System::IO;

PedidoController::PedidoController() {
	this->objConexion = gcnew SqlConnection();
}

/*Son los metodos propios del manejo de BD*/
void PedidoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server = 200.16.7.140; DataBase = a20192506; User Id = a20192506; Password = QMH7NqVu";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void PedidoController::cerrarConexionBD() {
	this->objConexion->Close();
}

//List<Pedido^>^ PedidoController::buscarAll();

void PedidoController::agregarPedido(bool EstadoPedido, double TiempoEstimado, String^ Fecha, double PrecioTotal, String^ Nombres, String^ Apellidos, String^ DNI, String^ NumeroTarjeta, int CodigoRecibido) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into SC_Pedido(EstadoPedido,TiempoEstimado,Fecha,PrecioTotal, Nombres, Apellidos, DNI, NumeroTarjeta, CodigoRecibido) values ('" + EstadoPedido + "','" + TiempoEstimado + "','" + Fecha + "','" + PrecioTotal + "','" + Nombres + "','" + Apellidos + "','" + DNI + "','" + NumeroTarjeta + "','" + CodigoRecibido + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

int PedidoController::obtenerCodigoUltimoPedido() {
	int CodigoUltimoPedido = 0;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Pedido";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		if (Codigo > CodigoUltimoPedido) {
			CodigoUltimoPedido = Codigo;
		}
	}
	cerrarConexionBD();
	return CodigoUltimoPedido;
}

int PedidoController::obtenerCodigoRecibidoUltimoPedido(int codigoUltimoPedido) {
	int CodigoRecibidoUltimoPedido;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Pedido where codigo =" + codigoUltimoPedido;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		CodigoRecibidoUltimoPedido = safe_cast<int>(objData[9]);
	}
	cerrarConexionBD();
	return CodigoRecibidoUltimoPedido;
}