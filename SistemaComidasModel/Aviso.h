#pragma once

using namespace System;

public ref class Aviso {
	/*Definimos los atributos*/
private:
	int codigo;
	bool Estado;
	/*Definimos métodos*/
public:
	Aviso();
	Aviso(int codigo, bool Estado);
};
