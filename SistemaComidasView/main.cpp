#include "frmPrincipal.h"
#include "frmMantenimientoProducto.h"
#include "VistaPedido.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SistemaComidasView;

void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmPrincipal ventana;/*Estoy crando el objeto qventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana);/*Aqui estoy ejecutando la ventana inicial*/
}