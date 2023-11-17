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
	objSentencia->CommandText = "insert into SC_Pedidoo(EstadoPedido,TiempoEstimado,Fecha,PrecioTotal, Nombres, Apellidos, DNI, NumeroTarjeta, CodigoRecibido) values ('" + EstadoPedido + "','" + TiempoEstimado + "','" + Fecha + "','" + PrecioTotal + "','" + Nombres + "','" + Apellidos + "','" + DNI + "','" + NumeroTarjeta + "','" + CodigoRecibido + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}