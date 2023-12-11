#pragma once
#include "VentanaFin.h"
#include <random>
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasController;
	using namespace SistemaComidasModel;

	/// <summary>
	/// Summary for VentanaPago
	/// </summary>
	public ref class VentanaPago : public System::Windows::Forms::Form
	{
	public:
		VentanaPago(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaPago()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(35, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(493, 423);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Realice su pago";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VentanaPago::groupBox1_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Fecha:";
			this->label5->Click += gcnew System::EventHandler(this, &VentanaPago::label5_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(221, 249);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(203, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(221, 196);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 22);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Número de tarjeta:";
			this->label4->Click += gcnew System::EventHandler(this, &VentanaPago::label4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 332);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ATRÁS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaPago::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 332);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 44);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ACEPTAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaPago::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(221, 155);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(221, 111);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(221, 69);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &VentanaPago::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellidos:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombres:";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaPago::label1_Click);
			// 
			// VentanaPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 495);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VentanaPago";
			this->Text = L"Pago";
			this->Load += gcnew System::EventHandler(this, &VentanaPago::VentanaPago_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VentanaPago_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool EstadoPedido = 0;
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedido = objDetallePedidoController->buscarDetallesPedidosSinPedido();
	double TiempoEstimado;
	int cantComidas = 0, cantBebidas = 0;
	for (int i = 0; i < listaDetallesPedido->Count; i++) {
		String^ NombreProducto = listaDetallesPedido[i]->getNombreProducto();
		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->buscarProductoxNombre(NombreProducto);
		String^ TipoProducto = objProducto->getTipo();
		if (TipoProducto == "Comida") {
			cantComidas = cantComidas + listaDetallesPedido[i]->getCantidad();
		}
		else {
			cantBebidas = cantBebidas + listaDetallesPedido[i]->getCantidad();
		}
	}
	if (cantBebidas > 0) {
		TiempoEstimado = 5;
	}
	else {
		TiempoEstimado = 0;
	}
	PedidoController^ objPedidoController = gcnew PedidoController();
	double TiempoPendiente = objPedidoController->obtenerTiempoUltimoPedido();
	TiempoEstimado = TiempoPendiente + TiempoEstimado + ((cantComidas+2)/3) * 15;
	String^ Fecha = this->dateTimePicker1->Text;
	double PrecioTotal = 0;
	for (int i = 0; i < listaDetallesPedido->Count; i++) {
		DetallePedido^ objDetallePedido = listaDetallesPedido[i];
		PrecioTotal = PrecioTotal + (objDetallePedido->getImporte());
	}
	String^ Nombres = this->textBox1->Text;
	String^ Apellidos = this->textBox2->Text;
	String^ DNI = this->textBox3->Text;
	String^ NumeroTarjeta = this->textBox4->Text;
	// Crear un generador de números aleatorios
	std::random_device rd;
	std::mt19937 generador(rd());
	// Definir el rango del número aleatorio (entre 1 y 1000)
	std::uniform_int_distribution<int> distribucion(0, 1000);
	// Generar un número aleatorio
	int CodigoRecibido = distribucion(generador);
	bool EstadoRecojo = 0;
	objPedidoController->agregarPedido(EstadoPedido, TiempoEstimado, Fecha, PrecioTotal, Nombres, Apellidos, DNI, NumeroTarjeta, CodigoRecibido, EstadoRecojo);
	int codigoUltimoPedido = objPedidoController->obtenerCodigoUltimoPedido();
	objDetallePedidoController->actualizarCodigoPedido(codigoUltimoPedido);
	List<String^>^ listaNombres = objDetallePedidoController->obtenerProductosRetirados(codigoUltimoPedido);
	List<int>^ listaCantidades = objDetallePedidoController->obtenerCantidadesRetiradas(codigoUltimoPedido);
	for (int i = 0; i < listaNombres->Count; i++) {
		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->buscarProductoxNombre(listaNombres[i]);
		int nuevoStock = objProducto->getStock() - listaCantidades[i];
		objProductoController->actualizarStock(listaNombres[i], nuevoStock);
	}
	VentanaFin ^ ventanaFIN = gcnew VentanaFin;
	//ventanaMantProyectos1 -> MdiParent = this;
	ventanaFIN ->ShowDialog();
	this->Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
