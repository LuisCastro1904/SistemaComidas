#pragma once
#include "VentanaPago.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasController;
	using namespace SistemaComidasModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for VentanaResumen
	/// </summary>
	public ref class VentanaResumen : public System::Windows::Forms::Form
	{
	public:
		VentanaResumen(void)
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
		~VentanaResumen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ListBox^ PEDIDO;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::TextBox^ textBox1;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PEDIDO = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->PEDIDO);
			this->groupBox1->Location = System::Drawing::Point(29, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(556, 575);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RESUMEN";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VentanaResumen::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(407, 407);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &VentanaResumen::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(373, 409);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"S/.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &VentanaResumen::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(89, 409);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Importe total:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(93, 101);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(376, 286);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VentanaResumen::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cant.";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Producto";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Importe";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(300, 495);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ATRÁS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaResumen::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 495);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ACEPTAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaResumen::button1_Click);
			// 
			// PEDIDO
			// 
			this->PEDIDO->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PEDIDO->FormattingEnabled = true;
			this->PEDIDO->ItemHeight = 16;
			this->PEDIDO->Location = System::Drawing::Point(55, 63);
			this->PEDIDO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PEDIDO->Name = L"PEDIDO";
			this->PEDIDO->Size = System::Drawing::Size(449, 388);
			this->PEDIDO->TabIndex = 0;
			this->PEDIDO->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaResumen::PEDIDO_SelectedIndexChanged);
			// 
			// VentanaResumen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 607);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VentanaResumen";
			this->Text = L"Resumen";
			this->Load += gcnew System::EventHandler(this, &VentanaResumen::VentanaResumen_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PEDIDO_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaPago^ ventanapago  = gcnew VentanaPago;
		//ventanapago -> MdiParent = this;
		ventanapago->ShowDialog();
		DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
		List<DetallePedido^>^ listaDetallesPedido = objDetallePedidoController->buscarDetallesPedidosSinPedido();
		if (listaDetallesPedido->Count == 0) {
			this->Close();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VentanaResumen_Load(System::Object^ sender, System::EventArgs^ e) {
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedido = objDetallePedidoController->buscarDetallesPedidosSinPedido();
	double ImporteTotal = mostrarGrillayCalcularImporteTotal(listaDetallesPedido);
	this->textBox1->Text = Convert::ToString(ImporteTotal);
}

private: double mostrarGrillayCalcularImporteTotal(List<DetallePedido^>^ listaDetallesPedido) {
	double ImporteTotal = 0.00;
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaDetallesPedido->Count; i++) {
		DetallePedido^ objDetallePedido = listaDetallesPedido[i];
		array<String^>^ filaGrilla = gcnew array<String^>(3);
		filaGrilla[0] = Convert::ToString(objDetallePedido->getCantidad());
		filaGrilla[1] = objDetallePedido->getNombreProducto();
		filaGrilla[2] = Convert::ToString(objDetallePedido->getImporte());
		this->dataGridView1->Rows->Add(filaGrilla);
		ImporteTotal = ImporteTotal + (objDetallePedido->getImporte());
	}
	return ImporteTotal;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
