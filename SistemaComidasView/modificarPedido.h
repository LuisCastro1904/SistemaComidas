#pragma once

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
	/// Resumen de modificarPedido
	/// </summary>
	public ref class modificarPedido : public System::Windows::Forms::Form
	{
	public:
		modificarPedido(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		modificarPedido(DetallePedido^ objDetallePedido)
		{
			InitializeComponent();
			this->objDetallePedido = objDetallePedido;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~modificarPedido()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: DetallePedido^ objDetallePedido;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(285, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 37);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &modificarPedido::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(50, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(352, 216);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del producto";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &modificarPedido::groupBox1_Enter);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(179, 48);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(143, 22);
			this->numericUpDown1->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(179, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(179, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"PrecioUnitario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Producto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad:";
			// 
			// modificarPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 338);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"modificarPedido";
			this->Text = L"modificarPedido";
			this->Load += gcnew System::EventHandler(this, &modificarPedido::modificarPedido_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void modificarPedido_Load(System::Object^ sender, System::EventArgs^ e) {
		this->numericUpDown1->Text = Convert::ToString(this->objDetallePedido->getCantidad());
		this->textBox2->Text = this->objDetallePedido->getNombreProducto();
		this->textBox3->Text = Convert::ToString(this->objDetallePedido->getPrecioUnitario());
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int Cantidad = Convert::ToInt32(this->numericUpDown1->Text);
	int codigoEditar = objDetallePedido->getCodigo();
	int nuevoImporte = Cantidad * (objDetallePedido->getPrecioUnitario());
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	objDetallePedidoController->actualizarDetallePedido(Cantidad, codigoEditar, nuevoImporte);
	MessageBox::Show("La cantidad se ha modificado correctamente");
	this->Close();
}
};
}
