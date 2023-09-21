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