#pragma once
#include"CocineroDetallePedido.h"
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
	/// Summary for VistaCocinero
	/// </summary>
	public ref class VistaCocinero : public System::Windows::Forms::Form
	{
	public:
		VistaCocinero(void)
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
		~VistaCocinero()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;








	protected:

	protected:

	protected:

	protected:

	protected:




	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(52, 108);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(716, 180);
			this->dataGridView1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 316);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 57);
			this->button1->TabIndex = 9;
			this->button1->Text = L" Ver Detalle Pedido";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaCocinero::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(52, 26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(191, 49);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pedidos:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VistaCocinero::groupBox1_Enter_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(596, 331);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VistaCocinero::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 326);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 37);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Pedido Listo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VistaCocinero::button3_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Estado del pedido";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre del cliente";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tiempo de preparación";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// VistaCocinero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 433);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VistaCocinero";
			this->Text = L"Cocinero";
			this->Load += gcnew System::EventHandler(this, &VistaCocinero::VistaCocinero_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigopedido = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		CocineroDetallePedido^ ventanadetallepedido = gcnew CocineroDetallePedido(codigopedido);
		ventanadetallepedido->ShowDialog();
	}
private: System::Void groupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void VistaCocinero_Load(System::Object^ sender, System::EventArgs^ e) {
	CocineroController^ objCocinero = gcnew CocineroController();
	List<Pedido^>^ lista = objCocinero->buscarPedidoxEstado();
	mostrarGrilla(lista);
}

private: void mostrarGrilla(List<Pedido^>^ listaPedidos) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPedidos->Count; i++) {
		Pedido^ objPedido = listaPedidos[i];
		/*Esta filaGrilla representa una fila del data grid de la pantalla*/
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPedido->getCodigo());
		if (objPedido->getEstadoPedido() == 0) {
			filaGrilla[1] = "En proceso";
		}
		filaGrilla[2] = objPedido->getNombres();
		filaGrilla[3] = Convert::ToString(objPedido->getTiempoEstimado());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());	
	CocineroController^ objeto = gcnew CocineroController();
	objeto->ActualizarEstadoPedido(codigoEditar);
	MessageBox::Show("El Pedido se marco como terminado");

	CocineroController^ objCocinero = gcnew CocineroController();
	List<Pedido^>^ lista = objCocinero->buscarPedidoxEstado();
	mostrarGrilla(lista);
}
};
}
