#include "ArduinoController.h"


using namespace SistemaComidasController;
using namespace System::IO;

ArduinoController::ArduinoController() {
	
}

/*Son los metodos propios del manejo de BD*/
void ArduinoController::Ejecutar() {
	SerialPort port("COM5", 9600);
	port.Open();
	port.Write("EJECUTAR");
}
