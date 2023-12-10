#include "ProductoController.h"

using namespace SistemaComidasController;
using namespace System::IO;

ProductoController::ProductoController() {
	this->objConexion = gcnew SqlConnection();
}

List<Producto^>^ ProductoController::BuscarProducto(String^ Tipo) {
	///*En esta lista vamos a colocar la información de los productos que encontremos en el archivo de texto*/
	//List<Producto^>^ listaProductosEncontrados = gcnew List<Producto^>();
	//array<String^>^ lineas = File::ReadAllLines("Productos.txt");
	//String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	//for each (String ^ lineaProducto in lineas) {

	//	array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());

	//	int codigoProducto = Convert::ToInt32(datos[0]);
	//	String^ NombreProducto = datos[1];
	//	String^ DescripcionProducto = datos[2];
	//	double PrecioProducto = Convert::ToDouble(datos[3]);
	//	String^ TipoProducto = datos[4];
	//	int StockProducto = Convert::ToInt32(datos[5]);

	//	if (TipoProducto->Contains(Tipo)) {
	//		Producto^ objProducto = gcnew Producto(codigoProducto, NombreProducto, DescripcionProducto, PrecioProducto, TipoProducto, StockProducto);
	//		listaProductosEncontrados->Add(objProducto);
	//	}
	//}
	//return listaProductosEncontrados;

	List<Producto^>^ listaProductos = gcnew List<Producto^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where tipo like '%" + Tipo + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Descripcion = safe_cast<String^>(objData[2]);
		double Precio = safe_cast<double>(objData[3]);
		String^ Tipo = safe_cast<String^>(objData[4]);
		int Stock = safe_cast<int>(objData[5]);
		String^ Imagen = safe_cast<String^>(objData[6]);
		Producto^ objProducto = gcnew Producto(codigo, Nombre, Descripcion, Precio, Tipo, Stock, Imagen);
		listaProductos->Add(objProducto);
	}
	cerrarConexionBD();
	return listaProductos;
}

List<Producto^>^ ProductoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los productos que encontremos en el archivo de texto*/
	/*
	List<Producto^>^ listaProductosEncontrados = gcnew List<Producto^>();
	array<String^>^ lineas = File::ReadAllLines("Productos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea

	for each (String ^ lineaProducto in lineas) {

		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());

		int codigoProducto = Convert::ToInt32(datos[0]);
		String^ NombreProducto = datos[1];
		String^ DescripcionProducto = datos[2];
		double PrecioProducto = Convert::ToDouble(datos[3]);
		String^ TipoProducto = datos[4];
		int StockProducto = Convert::ToInt32(datos[5]);

		Producto^ objProducto = gcnew Producto(codigoProducto, NombreProducto, DescripcionProducto, PrecioProducto, TipoProducto, StockProducto);
		listaProductosEncontrados->Add(objProducto);
	}*/

	List<Producto^>^ listaProductos = gcnew List<Producto^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Descripcion = safe_cast<String^>(objData[2]);
		double Precio = safe_cast<double>(objData[3]);
		String^ Tipo = safe_cast<String^>(objData[4]);
		int Stock = safe_cast<int>(objData[5]);
		String^ Imagen = safe_cast<String^>(objData[6]);
		Producto^ objProducto = gcnew Producto(codigo, Nombre, Descripcion, Precio, Tipo, Stock, Imagen);
		listaProductos->Add(objProducto);
	}
	cerrarConexionBD();
	return listaProductos;
}

/*void ProductoController::escribirArchivo(List<Producto^>^ listaProductos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);

	for (int i = 0; i < listaProductos->Count; i++){
		Producto^ objProducto = listaProductos[i];
		lineasArchivo[i] = objProducto->getCodigo() + ";" + objProducto->getNombre() + ";" + objProducto->getDescripcion() + ";" + objProducto->getPrecio() + ";" + objProducto->getTipo() + ";" + objProducto->getStock();
	}

	File::WriteAllLines("Productos.txt", lineasArchivo);
}*/

void ProductoController::eliminarProductoFisico(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete SC_Producto where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void ProductoController::agregarProducto(String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into SC_Producto(Nombre,Descripcion,Precio,Tipo,Stock,Imagen) values ('" + Nombre + "','" + Descripcion + "','" + Precio + "','" + Tipo + "','" + Stock + "','" + Imagen + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

Producto^ ProductoController::buscarProductoporCodigo(int codigo) {
	Producto^ objProducto;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where codigo=" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Descripcion = safe_cast<String^>(objData[2]);
		double Precio = safe_cast<double>(objData[3]);
		String^ Tipo = safe_cast<String^>(objData[4]);
		int Stock = safe_cast<int>(objData[5]);
		String^ Imagen = safe_cast<String^>(objData[6]);
		objProducto = gcnew Producto(codigo, Nombre, Descripcion, Precio, Tipo, Stock, Imagen);
	}
	cerrarConexionBD();
	return objProducto;
}

void ProductoController::actualizarProducto(int codigo, String^ Nombre, String^ Descripcion, double Precio, String^ Tipo, int Stock, String^ Imagen) {
	//List<Producto^>^ listaProductos = buscarAll();
	//for (int i = 0; i < listaProductos->Count; i++) {
	//	if (listaProductos[i]->getCodigo() == objProducto->getCodigo()) {
	//		listaProductos[i]->setNombre(objProducto->getNombre());
	//		listaProductos[i]->setDescripcion(objProducto->getDescripcion());
	//		listaProductos[i]->setPrecio(objProducto->getPrecio());
	//		listaProductos[i]->setTipo(objProducto->getTipo());
	//		listaProductos[i]->setStock(objProducto->getStock());
	//		break;
	//	}
	//}
	//escribirArchivo(listaProductos);
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update SC_Producto set Nombre='" + Nombre + "', Descripcion='" + Descripcion + "', Precio='" + Precio + "', Tipo='" + Tipo + "', Stock='" + Stock  + "', Imagen='" + Imagen + "' where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
List<String^>^ ProductoController::obtenerProductos() {
	List<Producto^>^ listaProductos = buscarAll();
	List<String^>^ listaNombres = gcnew List<String^>();
	for (int i = 0; i < listaProductos->Count; i++) {
		String^ Nombre = listaProductos[i]->getNombre();
		int existe = 0;
		for (int j = 0; j < listaNombres->Count; j++) {
			if (listaNombres[j]->Contains(Nombre)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaNombres->Add(Nombre);
		}
	}
	return listaNombres;
}

Producto^ ProductoController::buscarProductoxNombre(String^ Nombre) {
	List<Producto^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->getNombre() == Nombre) {
			return listaProductos[i];
		}
	}
}

/*Base de datos*/
void ProductoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20192506;User Id=a20192506;Password=QMH7NqVu";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void ProductoController::cerrarConexionBD() {
	this->objConexion->Close();
}

int ProductoController::obtenerCantidadComidas() {
	int cantComidas=0;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where tipo = 'Comida'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		cantComidas++;
	}
	cerrarConexionBD();
	return cantComidas;
}

List<String^>^ ProductoController::obtenerComidas() {
	List<String^>^ listaComidas = gcnew List<String^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where tipo = 'Comida'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ Nombre = safe_cast<String^>(objData[1]);
		listaComidas->Add(Nombre);
	}
	cerrarConexionBD();
	return listaComidas;
}

int ProductoController::obtenerCantidadBebidas() {
	int cantBebidas = 0;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where tipo = 'Bebida'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		cantBebidas++;
	}
	cerrarConexionBD();
	return cantBebidas;
}

List<String^>^ ProductoController::obtenerBebidas() {
	List<String^>^ listaBebidas = gcnew List<String^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from SC_Producto where tipo = 'Bebida'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ Nombre = safe_cast<String^>(objData[1]);
		listaBebidas->Add(Nombre);
	}
	cerrarConexionBD();
	return listaBebidas;
}