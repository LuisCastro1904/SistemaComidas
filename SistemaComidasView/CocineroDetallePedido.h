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
	/// Resumen de CocineroDetallePedido
	/// </summary>
	public ref class CocineroDetallePedido : public System::Windows::Forms::Form
	{
	public:
		CocineroDetallePedido(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		CocineroDetallePedido(int codigopedido)
		{
			InitializeComponent();
			this->codigopedido = codigopedido;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CocineroDetallePedido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::Button^ button1;
	private: int codigopedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 25);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(397, 259);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 314);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CocineroDetallePedido::button1_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"NombreProducto";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// CocineroDetallePedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 387);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"CocineroDetallePedido";
			this->Text = L"CocineroDetallePedido";
			this->Load += gcnew System::EventHandler(this, &CocineroDetallePedido::CocineroDetallePedido_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void CocineroDetallePedido_Load(System::Object^ sender, System::EventArgs^ e) {
		DetallePedidoController^ objPedido = gcnew DetallePedidoController();
		List<DetallePedido^>^ list = objPedido->VerDetallePedido(this->codigopedido);
		mostrarGrilla(list);
	}
	private: void mostrarGrilla(List<DetallePedido^>^ listaPedidos) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPedidos->Count; i++) {
			DetallePedido^ objDetalle = listaPedidos[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(3);
			filaGrilla[0] = objDetalle->getNombreProducto();
			filaGrilla[1] = Convert::ToString(objDetalle->getCantidad());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
}

};
}
