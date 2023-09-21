#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaComidasModel;

namespace SistemaComidasController {
	public ref class ProductoController {
	public:
		ProductoController();
		List<Producto^>^ BuscarProducto(String^ Tipo);
	};
}