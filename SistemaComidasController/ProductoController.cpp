#include "ProductoController.h"

using namespace SistemaComidasController;
using namespace System::IO;

ProductoController::ProductoController() {

}
List<Producto^>^ ProductoController::BuscarProducto(String^ Tipo) {
	/*En esta lista vamos a colocar la información de los productos que encontremos en el archivo de texto*/
	List<Producto^>^ listaProductosEncontrados = gcnew List<Producto^>();
	array<String^>^ lineas = File::ReadAllLines("Productos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaProducto in lineas) {

		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());

		int codigoProducto = Convert::ToInt32(datos[0]);
		String^ NombreProducto = datos[1];
		String^ DescripcionProducto = datos[2];
		double PrecioProducto = Convert::ToDouble(datos[3]);
		String^ TipoProducto = datos[4];
		int StockProducto = Convert::ToInt32(datos[5]);

		if (TipoProducto->Contains(Tipo)) {
			Producto^ objProducto = gcnew Producto(codigoProducto, NombreProducto, DescripcionProducto, PrecioProducto, TipoProducto, StockProducto);
			listaProductosEncontrados->Add(objProducto);
		}
	}
	return listaProductosEncontrados;
}

List<Producto^>^ ProductoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los productos que encontremos en el archivo de texto*/
	List<Producto^>^ listaProductosEncontrados = gcnew List<Producto^>();
	array<String^>^ lineas = File::ReadAllLines("Productos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

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
	}
	return listaProductosEncontrados;
}

void ProductoController::escribirArchivo(List<Producto^>^ listaProductos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);

	for (int i = 0; i < listaProductos->Count; i++){
		Producto^ objProducto = listaProductos[i];
		lineasArchivo[i] = objProducto->getCodigo() + ";" + objProducto->getNombre() + ";" + objProducto->getDescripcion() + ";" + objProducto->getPrecio() + ";" + objProducto->getTipo() + ";" + objProducto->getStock();
	}

	File::WriteAllLines("Productos.txt", lineasArchivo);
}

void ProductoController::eliminarProductoFisico(int codigo) {
	List<Producto^>^ listaProductos = buscarAll();

	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->getCodigo() == codigo) {
			listaProductos->RemoveAt(i);
		}
	}
	escribirArchivo(listaProductos);
}

void ProductoController::agregarProducto(Producto^ objProducto) {
	List<Producto^>^ listaProductos = buscarAll();
	listaProductos->Add(objProducto);
	escribirArchivo(listaProductos);
}

Producto^ ProductoController::buscarProductoporCodigo(int codigo) {
	List<Producto^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->getCodigo() == codigo) {
			return listaProductos[i];
		}
	}
}

void ProductoController::actualizarProducto(Producto^ objProducto) {
	List<Producto^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->getCodigo() == objProducto->getCodigo()) {
			listaProductos[i]->setNombre(objProducto->getNombre());
			listaProductos[i]->setDescripcion(objProducto->getDescripcion());
			listaProductos[i]->setPrecio(objProducto->getPrecio());
			listaProductos[i]->setTipo(objProducto->getTipo());
			listaProductos[i]->setStock(objProducto->getStock());
			break;
		}
	}
	escribirArchivo(listaProductos);
}
List<String^>^ ProductoController::obtenerProductos() {
	List<Producto^>^ listaProductos = buscarAll();
	List<String^>^ listaNombres = gcnew List<String^>();
	for (int i = 0; i < listaProductos->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ Nombre = listaProductos[i]->getNombre();
		/*Voy a buscarlo en la listaDepartamentos*/
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