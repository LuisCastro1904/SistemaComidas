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

	protected:





























	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ a;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;





















































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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Pedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->a = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(215, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 42);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaPedido::button1_Click_1);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(107, 447);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 22);
			this->numericUpDown1->TabIndex = 9;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &VistaPedido::numericUpDown1_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(436, 26);
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Pedido,
					this->Cantidad, this->a, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 35);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(559, 156);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VistaPedido::dataGridView1_CellContentClick_1);
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
			this->button4->Location = System::Drawing::Point(536, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 91);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Pasar a las bebidas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VistaPedido::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(749, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 91);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Cancelar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VistaPedido::button5_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(30, 26);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(375, 395);
			this->flowLayoutPanel1->TabIndex = 23;
			// 
			// VistaPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 494);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VistaPedido";
			this->Text = L"Pedido";
			this->Load += gcnew System::EventHandler(this, &VistaPedido::VistaPedido_Load);
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
		DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
		List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosComidasSinPedido();
		mostrarGrilla(listaDetallesPedidos);

		// Definir la cantidad de RadioButtons y la lista de nombres
		ProductoController^ objProductoController = gcnew ProductoController();
		int cantidadRadioButtons = objProductoController->obtenerCantidadComidas(); // Cambia esto según tu necesidad
		List<String^>^ nombresRadioButtons = objProductoController->obtenerComidas();

		// Crear y agregar RadioButtons según la cantidad y la lista de nombres
		for (int i = 0; i < cantidadRadioButtons; ++i)
		{
			RadioButton^ radioButton = gcnew RadioButton();
			radioButton->Name = "radioButton" + Convert::ToString(i);
			ProductoController^ objProductoController = gcnew ProductoController();
			Producto^ objProducto = objProductoController->buscarProductoxNombre(nombresRadioButtons[i]);
			String^ Precio = Convert::ToString(objProducto->getPrecio());
			radioButton->Text = nombresRadioButtons[i] + " (S/ "+Precio+")";
			//radioButton->BackColor = Color::DarkGray;
			radioButton->Width = 120;
			radioButton->Height = 60;
			radioButton->TextAlign = ContentAlignment::MiddleCenter;
			radioButton->Font = gcnew System::Drawing::Font(radioButton->Font, FontStyle::Bold);
			radioButton->Margin = System::Windows::Forms::Padding(10);
			radioButton->Padding = System::Windows::Forms::Padding(5);

			// URL de la imagen de fondo
			String^ urlImagenFondo = objProducto->getImagen();
			// Cargar la imagen desde la URL
			Image^ imagenFondo = Image::FromStream(System::Net::WebRequest::Create(urlImagenFondo)->GetResponse()->GetResponseStream());
			radioButton->BackgroundImage = imagenFondo;
			radioButton->BackgroundImageLayout = ImageLayout::Stretch;

			// Agregar el RadioButton al GroupBox
			flowLayoutPanel1->Controls->Add(radioButton);
		}

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
	String^ ProductoSeleccionado = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	DetallePedido^ objDetallePedido = objDetallePedidoController->buscarDetallePedidoxNombreProducto(ProductoSeleccionado);
	modificarPedido^ ventanaModificarPedido = gcnew modificarPedido(objDetallePedido);
	ventanaModificarPedido->ShowDialog();
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosComidasSinPedido();
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
	int Cantidad = Convert::ToInt32(this->numericUpDown1->Text);
	if (Cantidad > objProducto->getStock()) {
		MessageBox::Show("Se ha excedido el límite de stock del producto. Quedan " + objProducto->getStock() + " unidades");
	}
	else {
		String^ NombreProducto = objProducto->getNombre();
		Double PrecioUnitario = objProducto->getPrecio();
		Double Importe = PrecioUnitario * Cantidad;
		DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
		objDetallePedidoController->agregarDetallePedido(Cantidad, NombreProducto, PrecioUnitario, Importe);
		MessageBox::Show("El producto se ha agregado con éxito");
		List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosComidasSinPedido();
		mostrarGrilla(listaDetallesPedidos);
	}
}

private: System::String^ ObtenerRadioButtonSeleccionado(System::Object^ sender, System::EventArgs^ e) {
	String^ textoSeleccionado = ""; // Variable para almacenar el texto del RadioButton seleccionado

	// Recorre todos los controles dentro del GroupBox
	for each (Control ^ control in flowLayoutPanel1->Controls) {
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
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = objDetallePedido->getNombreProducto();
		filaGrilla[1] = Convert::ToString(objDetallePedido->getCantidad());
		filaGrilla[2] = Convert::ToString(objDetallePedido->getPrecioUnitario());
		filaGrilla[3] = Convert::ToString(objDetallePedido->getImporte());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	String^ ProductoSeleccionado = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	DetallePedido^ objDetallePedido = objDetallePedidoController->buscarDetallePedidoxNombreProducto(ProductoSeleccionado);
	int codigoEliminar = objDetallePedido->getCodigo();
	objDetallePedidoController->eliminarDetallePedidoFisico(codigoEliminar);
	MessageBox::Show("El producto ha sido eliminado con éxito");
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosComidasSinPedido();
	mostrarGrilla(listaDetallesPedidos);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	objDetallePedidoController->eliminarDetallesPedidoSinPedido();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VistaBebidas^ ventanaBebidas = gcnew VistaBebidas();
	ventanaBebidas->ShowDialog();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedido = objDetallePedidoController->buscarDetallesPedidosSinPedido();
	if (listaDetallesPedido->Count == 0) {
		this->Close();
	}
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
