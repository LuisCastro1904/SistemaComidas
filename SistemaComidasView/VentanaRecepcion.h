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
	/// Resumen de VentanaRecepcion
	/// </summary>
	public ref class VentanaRecepcion : public System::Windows::Forms::Form
	{
	public:
		VentanaRecepcion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaRecepcion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 41);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(460, 199);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RECOGE TU PEDIDO";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VentanaRecepcion::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 67);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"INGRESE SU CODIGO:";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaRecepcion::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(247, 61);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 105);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"CONFIRMAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaRecepcion::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(361, 293);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 290);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 5;
			// 
			// VentanaRecepcion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 327);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"VentanaRecepcion";
			this->Text = L"Recepcion";
			this->Load += gcnew System::EventHandler(this, &VentanaRecepcion::VentanaRecepcion_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ CodigoIngresado = textBox1->Text;
		String^ fechaActual = this->dateTimePicker1->Text;

		PedidoController^ objPedidoController = gcnew PedidoController();
		List<String^>^ listaCodigos = objPedidoController->buscarCodigosxFecha(fechaActual);

		bool codigoValidado = false;

		for (int i = 0; i < listaCodigos->Count; i++) {
			if (listaCodigos[i] == CodigoIngresado) {
				codigoValidado = true;
				break;
			}
		}

		if (codigoValidado) {
			ArduinoController^ objArduinoController = gcnew ArduinoController();
			objArduinoController->Ejecutar();
		}
		else {
			MessageBox::Show("Código ingresado incorrecto");
			textBox1->Clear();
		}
	}

	private: System::Void VentanaRecepcion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
