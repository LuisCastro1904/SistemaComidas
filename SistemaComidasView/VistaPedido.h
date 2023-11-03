#pragma once
#include "VistaBebidas.h"
#include "modificarPedido.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasModel;
	using namespace SistemaComidasController;

	/// <summary>
	/// Resumen de VistaPedido
	/// </summary>
	public ref class VistaPedido : public System::Windows::Forms::Form
	{
	public:
		VistaPedido(void)
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
		~VistaPedido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

























	private: System::Windows::Forms::RadioButton^ radioButton1;



	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ a;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;














































	protected:

	protected:

	protected:

	protected:

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
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->a = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(29, 26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(346, 450);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Elegir comida y cantidad";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VistaPedido::groupBox1_Enter);
			// 
			// radioButton6
			// 
			this->radioButton6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton6->Location = System::Drawing::Point(192, 276);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton6->Size = System::Drawing::Size(128, 75);
			this->radioButton6->TabIndex = 23;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(165, 379);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 47);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaPedido::button1_Click_1);
			// 
			// radioButton5
			// 
			this->radioButton5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton5->Location = System::Drawing::Point(192, 164);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton5->Size = System::Drawing::Size(128, 75);
			this->radioButton5->TabIndex = 22;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton4->Location = System::Drawing::Point(192, 51);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton4->Size = System::Drawing::Size(128, 75);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ají de Gallina";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(55, 392);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 22);
			this->numericUpDown1->TabIndex = 9;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &VistaPedido::numericUpDown1_ValueChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton3->Location = System::Drawing::Point(26, 276);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton3->Size = System::Drawing::Size(128, 75);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Arroz con pollo";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton2->Location = System::Drawing::Point(26, 164);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton2->Size = System::Drawing::Size(128, 75);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Carapulcra con Sopa Seca";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->radioButton1->Location = System::Drawing::Point(26, 51);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton1->Size = System::Drawing::Size(128, 75);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Papa a la Huancaina";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &VistaPedido::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(412, 26);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(602, 294);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Comidas seleccionadas";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &VistaPedido::groupBox2_Enter_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 55);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Eliminar producto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VistaPedido::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 55);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Editar producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VistaPedido::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Pedido, this->Cantidad, this->a, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 35);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(559, 156);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Pedido
			// 
			this->Pedido->HeaderText = L"Producto";
			this->Pedido->MinimumWidth = 8;
			this->Pedido->Name = L"Pedido";
			this->Pedido->Width = 125;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 8;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 60;
			// 
			// a
			// 
			this->a->HeaderText = L"Precio unit. (S/.)";
			this->a->MinimumWidth = 8;
			this->a->Name = L"a";
			this->a->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Importe (S/.)";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 60;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(498, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 91);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Pasar a las bebidas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VistaPedido::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(744, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 91);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Cancelar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VistaPedido::button5_Click);
			// 
			// VistaPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 503);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VistaPedido";
			this->Text = L"Pedido";
			this->Load += gcnew System::EventHandler(this, &VistaPedido::VistaPedido_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VistaPedido_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvProducts_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	VistaBebidas ^ ventanabebidas = gcnew VistaBebidas ();
	//ventanaMantProyectos1 -> MdiParent = this;
	ventanabebidas -> ShowDialog();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	DetallePedido^ objDetallePedido = objDetallePedidoController->buscarDetallePedidoxCodigo(codigoEditar);
	modificarPedido^ ventanaModificarPedido = gcnew modificarPedido(objDetallePedido);
	ventanaModificarPedido->ShowDialog();
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarAll();
	mostrarGrilla(listaDetallesPedidos);
}
private: System::Void groupBox2_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ ComidaSeleccionada;
	ComidaSeleccionada = ObtenerRadioButtonSeleccionado(sender, e);
	ProductoController^ objProductoController = gcnew ProductoController();
	Producto^ objProducto = objProductoController->buscarProductoxNombre(ComidaSeleccionada);
	int codigo = objProducto->getCodigo();
	int Cantidad = Convert::ToInt32(this->numericUpDown1->Text);
	String^ NombreProducto = ObtenerRadioButtonSeleccionado(sender, e);
	Double PrecioUnitario = objProducto->getPrecio();
	Double Importe = PrecioUnitario * Cantidad;
	DetallePedido^ objDetallePedido = gcnew DetallePedido(codigo, Cantidad, NombreProducto, PrecioUnitario, Importe);
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	objDetallePedidoController->agregarDetallePedido(objDetallePedido);
	MessageBox::Show("El producto se ha agregado con éxito");
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarAll();
	mostrarGrilla(listaDetallesPedidos);
}

private: System::String^ ObtenerRadioButtonSeleccionado(System::Object^ sender, System::EventArgs^ e) {
	String^ textoSeleccionado = ""; // Variable para almacenar el texto del RadioButton seleccionado

	// Recorre todos los controles dentro del GroupBox
	for each (Control ^ control in groupBox1->Controls) {
		// Verifica si el control es un RadioButton y está seleccionado
		if (RadioButton^ radioButton = dynamic_cast<RadioButton^>(control)) {
			if (radioButton->Checked) {
				textoSeleccionado = radioButton->Text; // Obtiene el texto del RadioButton seleccionado
				break; // Sale del bucle una vez que encuentra el RadioButton seleccionado
			}
		}
	}

	// Utiliza el textoSeleccionado como desees (por ejemplo, mostrarlo en un MessageBox)
	return textoSeleccionado;
}

private: void mostrarGrilla(List<DetallePedido^>^ listaDetallesPedidos) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaDetallesPedidos->Count; i++) {
		DetallePedido^ objDetallePedido = listaDetallesPedidos[i];
		array<String^>^ filaGrilla = gcnew array<String^>(5);
		filaGrilla[0] = Convert::ToString(objDetallePedido->getCodigo());
		filaGrilla[1] = objDetallePedido->getDescripcion();
		filaGrilla[2] = Convert::ToString(objDetallePedido->getCantidad());
		filaGrilla[3] = Convert::ToString(objDetallePedido->getPrecioUnitario());
		filaGrilla[4] = Convert::ToString(objDetallePedido->getImporte());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DetallePedidoController^ objDetallePedido;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	objDetallePedido->eliminarDetallePedidoFisico(codigoEliminar);
	MessageBox::Show("El producto ha sido eliminado con éxito");
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarAll();
	mostrarGrilla(listaDetallesPedidos);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VistaBebidas^ ventanaBebidas = gcnew VistaBebidas();
	ventanaBebidas->ShowDialog();
}
};
}
