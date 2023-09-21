#include "Aviso.h"

using namespace SistemaComidasModel;
Aviso::Aviso() {

}
Aviso::Aviso(int codigo, bool Estado) {
	this->codigo = codigo;
	this->Estado = Estado;
}