#include "DetallePedidoController.h"
#include "ProductoController.h"

using namespace SistemaComidasController;
using namespace System::IO;

DetallePedidoController::DetallePedidoController() {
	this->objConexion = gcnew SqlConnection();
}

/*Son los metodos propios del manejo de BD*/
void DetallePedidoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server = 200.16.7.140; DataBase = a20192506; User Id = a20192506; Password = QMH7NqVu";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void DetallePedidoController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<DetallePedido^>^ DetallePedidoController::buscarAll() {
	/*List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	array<String^>^ lineas = File::ReadAllLines("DetallesPedidos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		int Cantidad = Convert::ToInt32(datos[1]);
		String^ NombreProducto = datos[2];
		Double PrecioUnitario = Convert::ToDouble(datos[3]);
		Double Importe = Convert::ToDouble(datos[4]);

		DetallePedido^ objDetallePedido = gcnew DetallePedido(codigo, Cantidad, NombreProducto, PrecioUnitario, Importe);
		listaDetallePedidos->Add(objDetallePedido);
	}
	return listaDetallePedidos;*/

	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_DetallePedido";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		int Cantidad = safe_cast<int>(objData[1]);
		String^ NombreProducto = safe_cast<String^>(objData[2]);
		double PrecioUnitario = safe_cast<double>(objData[3]);
		double Importe = safe_cast<double>(objData[4]);
		int CodigoPedido = safe_cast<int>(objData[5]);

		DetallePedido^ objDetallePedido = gcnew DetallePedido(Codigo, Cantidad, NombreProducto, PrecioUnitario, Importe, CodigoPedido);
		listaDetallePedidos->Add(objDetallePedido);
	}
	cerrarConexionBD();
	return listaDetallePedidos;
}

/*void DetallePedidoController::escribirArchivo(List<DetallePedido^>^ listaDetallePedidos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDetallePedidos->Count);

	for (int i = 0; i < listaDetallePedidos->Count; i++) {
		DetallePedido^ objDetallePedido = listaDetallePedidos[i];
		lineasArchivo[i] = objDetallePedido->getCodigo() + ";" + objDetallePedido->getCantidad() + ";" + objDetallePedido->getNombreProducto() + ";" + objDetallePedido->getPrecioUnitario() + ";" + objDetallePedido->getImporte();
	}

	File::WriteAllLines("DetallesPedidos.txt", lineasArchivo);
}*/

void DetallePedidoController::agregarDetallePedido(int Cantidad, String^ NombreProducto, double	PrecioUnitario, double	Importe) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into SC_DetallePedido(Cantidad,NombreProducto,PrecioUnitario,Importe, codigoPedido) values ('" + Cantidad + "','" + NombreProducto + "','" + PrecioUnitario + "','" + Importe + "', 0)";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void DetallePedidoController::eliminarDetallePedidoFisico(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete SC_DetallePedido where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

DetallePedido^ DetallePedidoController::buscarDetallePedidoxNombreProducto(String^ NombreProducto) {
	List<DetallePedido^>^ listaDetallesPedidos = buscarAll();
	for (int i = 0; i < listaDetallesPedidos->Count; i++) {
		if (listaDetallesPedidos[i]->getNombreProducto() == NombreProducto) {
			return listaDetallesPedidos[i];
		}
	}
}

void DetallePedidoController::actualizarDetallePedido(int Cantidad, int codigoEditar, int nuevoImporte) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update SC_DetallePedido set Cantidad=" + Cantidad+ ", Importe =" + nuevoImporte +" where Codigo = " + codigoEditar;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<DetallePedido^>^ DetallePedidoController::buscarDetallesPedidosSinPedido() {
	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_DetallePedido where codigoPedido = 0";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		int Cantidad = safe_cast<int>(objData[1]);
		String^ NombreProducto = safe_cast<String^>(objData[2]);
		double PrecioUnitario = safe_cast<double>(objData[3]);
		double Importe = safe_cast<double>(objData[4]);
		int CodigoPedido = safe_cast<int>(objData[5]);

		DetallePedido^ objDetallePedido = gcnew DetallePedido(Codigo, Cantidad, NombreProducto, PrecioUnitario, Importe, CodigoPedido);
		listaDetallePedidos->Add(objDetallePedido);
	}
	cerrarConexionBD();
	return listaDetallePedidos;
}

void  DetallePedidoController::actualizarCodigoPedido(int codigoUltimoPedido) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update SC_DetallePedido set codigoPedido=" + codigoUltimoPedido + " where codigoPedido = 0";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<DetallePedido^>^ DetallePedidoController::buscarDetallesPedidosComidasSinPedido() {
	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_DetallePedido where codigoPedido = 0";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		int Cantidad = safe_cast<int>(objData[1]);
		String^ NombreProducto = safe_cast<String^>(objData[2]);
		double PrecioUnitario = safe_cast<double>(objData[3]);
		double Importe = safe_cast<double>(objData[4]);
		int CodigoPedido = safe_cast<int>(objData[5]);
		
		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->buscarProductoxNombre(NombreProducto);

		if (objProducto->getTipo() == "Comida") {
			DetallePedido^ objDetallePedido = gcnew DetallePedido(Codigo, Cantidad, NombreProducto, PrecioUnitario, Importe, CodigoPedido);
			listaDetallePedidos->Add(objDetallePedido);
		}
	}
	cerrarConexionBD();
	return listaDetallePedidos;
}

List<DetallePedido^>^ DetallePedidoController::buscarDetallesPedidosBebidasSinPedido() {
	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_DetallePedido where codigoPedido = 0";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		int Cantidad = safe_cast<int>(objData[1]);
		String^ NombreProducto = safe_cast<String^>(objData[2]);
		double PrecioUnitario = safe_cast<double>(objData[3]);
		double Importe = safe_cast<double>(objData[4]);
		int CodigoPedido = safe_cast<int>(objData[5]);

		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->buscarProductoxNombre(NombreProducto);

		if (objProducto->getTipo() == "Bebida") {
			DetallePedido^ objDetallePedido = gcnew DetallePedido(Codigo, Cantidad, NombreProducto, PrecioUnitario, Importe, CodigoPedido);
			listaDetallePedidos->Add(objDetallePedido);
		}
	}
	cerrarConexionBD();
	return listaDetallePedidos;
}

void DetallePedidoController::eliminarDetallesPedidoSinPedido() {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "delete SC_DetallePedido where codigoPedido = 0";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<DetallePedido^>^ DetallePedidoController::VerDetallePedido(int codigoPedido) {
	List<DetallePedido^>^ listaDetallePedidos = gcnew List<DetallePedido^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_DetallePedido where codigo=" + codigoPedido;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		int Cantidad = safe_cast<int>(objData[1]);
		String^ NombreProducto = safe_cast<String^>(objData[2]);
		double PrecioUnitario = safe_cast<double>(objData[3]);
		double Importe = safe_cast<double>(objData[4]);
		int CodigoPedido = safe_cast<int>(objData[5]);

		DetallePedido^ objDetallePedido = gcnew DetallePedido(Codigo, Cantidad, NombreProducto, PrecioUnitario, Importe, CodigoPedido);
		listaDetallePedidos->Add(objDetallePedido);
	}
	cerrarConexionBD();
	return listaDetallePedidos;
}
