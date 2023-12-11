#include"CocineroController.h"

using namespace SistemaComidasController;
using namespace System::IO;
using namespace Collections::Generic;

CocineroController::CocineroController() {
	this->objConexion = gcnew SqlConnection();
}

/*Son los metodos propios del manejo de BD*/
void CocineroController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server = 200.16.7.140; DataBase = a20192506; User Id = a20192506; Password = QMH7NqVu";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void CocineroController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Pedido^>^ CocineroController::buscarPedidoxEstado() {
	List<Pedido^>^ lista = gcnew List<Pedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * FROM SC_Pedido where EstadoPedido=0";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		/*Primero recuperamos los datos del cronograma*/
		int codigo = safe_cast<int>(objData[0]);
		bool EstadoPedido= safe_cast<bool>(objData[1]);
		double TiempoEstimado = safe_cast<double>(objData[2]);
		String^ Fecha = safe_cast<String^>(objData[3]);
		double PrecioTotal = safe_cast<double>(objData[4]);
		String^ Nombre = safe_cast<String^>(objData[5]);
		String^ Apellido = safe_cast<String^>(objData[6]);
		String^ DNI = safe_cast<String^>(objData[7]);
		String^ NroTarjeta = safe_cast<String^>(objData[8]);
		int codigoRecibido = safe_cast<int>(objData[9]);
		Pedido^ objPedido = gcnew Pedido();

		objPedido->setCodigo(codigo);
		objPedido->setEstadoPedido(EstadoPedido);
		objPedido->setTiempoEstimado(TiempoEstimado);
		objPedido->setFecha(Fecha);
		objPedido->setPrecioTotal(PrecioTotal);
		objPedido->setNombres(Nombre);
		objPedido->setApellidos(Apellido);
		objPedido->setDNI(DNI);
		objPedido->setNumeroTarjeta(NroTarjeta);
		objPedido->setCodigoRecibido(codigoRecibido);

		lista->Add(objPedido);
	}
	cerrarConexionBD();
	return lista;
}

void CocineroController::ActualizarEstadoPedido(int codigoPedido) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update SC_Pedido set EstadoPedido=" + 1 + " where codigo = " + codigoPedido;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
