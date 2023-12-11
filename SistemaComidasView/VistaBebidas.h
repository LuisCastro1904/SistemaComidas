#pragma once
#include "VentanaResumen.h"
#include "modificarPedido.h"

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
	/// Summary for VistaBebidas
	/// </summary>
	public ref class VistaBebidas : public System::Windows::Forms::Form
	{
	public:
		VistaBebidas(void)
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
		~VistaBebidas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ a;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;























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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Pedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->a = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(761, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 91);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Volver a las comidas";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VistaBebidas::button5_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(516, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 91);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Resumen del pedido";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VistaBebidas::button4_Click);
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
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VistaBebidas::dataGridView1_CellContentClick);
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 55);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Editar producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VistaBebidas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 55);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Eliminar producto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VistaBebidas::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(430, 26);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(602, 294);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Bebidas seleccionadas";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(209, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 42);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaBebidas::button1_Click_1);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(101, 447);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 22);
			this->numericUpDown1->TabIndex = 32;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(24, 26);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(375, 395);
			this->flowLayoutPanel1->TabIndex = 34;
			// 
			// VistaBebidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 498);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"VistaBebidas";
			this->Text = L"Bebidas";
			this->Load += gcnew System::EventHandler(this, &VistaBebidas::VistaBebidas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ComidaSeleccionada;
	ComidaSeleccionada = ObtenerRadioButtonSeleccionado(sender, e);
	ProductoController^ objProductoController = gcnew ProductoController();
	Producto^ objProducto = objProductoController->buscarProductoxNombre(ComidaSeleccionada);
	int Cantidad = Convert::ToInt32(this->numericUpDown1->Text);
	String^ NombreProducto = ObtenerRadioButtonSeleccionado(sender, e);
	Double PrecioUnitario = objProducto->getPrecio();
	Double Importe = PrecioUnitario * Cantidad;
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	objDetallePedidoController->agregarDetallePedido(Cantidad, NombreProducto, PrecioUnitario, Importe);
	MessageBox::Show("El producto se ha agregado con éxito");
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosBebidasSinPedido();
	mostrarGrilla(listaDetallesPedidos);
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
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	String^ ProductoSeleccionado = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	DetallePedido^ objDetallePedido = objDetallePedidoController->buscarDetallePedidoxNombreProducto(ProductoSeleccionado);
	modificarPedido^ ventanaModificarPedido = gcnew modificarPedido(objDetallePedido);
	ventanaModificarPedido->ShowDialog();
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosBebidasSinPedido();
	mostrarGrilla(listaDetallesPedidos);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaResumen^ ventanaResumen = gcnew VentanaResumen;
	//ventanaMantProyectos1 -> MdiParent = this;
	ventanaResumen->ShowDialog();
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedido = objDetallePedidoController->buscarDetallesPedidosSinPedido();
	if (listaDetallesPedido->Count == 0) {
		this->Close();
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
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosBebidasSinPedido();
	mostrarGrilla(listaDetallesPedidos);
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void VistaBebidas_Load(System::Object^ sender, System::EventArgs^ e) {
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosBebidasSinPedido();
	mostrarGrilla(listaDetallesPedidos);

	// Definir la cantidad de RadioButtons y la lista de nombres
	ProductoController^ objProductoController = gcnew ProductoController();
	int cantidadRadioButtons = objProductoController->obtenerCantidadBebidas(); // Cambia esto según tu necesidad
	List<String^>^ nombresRadioButtons = objProductoController->obtenerBebidas();

	// Crear y agregar RadioButtons según la cantidad y la lista de nombres
	for (int i = 0; i < cantidadRadioButtons; ++i)
	{
		RadioButton^ radioButton = gcnew RadioButton();
		radioButton->Name = "radioButton" + Convert::ToString(i);
		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->buscarProductoxNombre(nombresRadioButtons[i]);
		String^ Precio = Convert::ToString(objProducto->getPrecio());
		radioButton->Text = nombresRadioButtons[i];
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
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ BebidaSeleccionada;
	BebidaSeleccionada = ObtenerRadioButtonSeleccionado(sender, e);
	ProductoController^ objProductoController = gcnew ProductoController();
	Producto^ objProducto = objProductoController->buscarProductoxNombre(BebidaSeleccionada);
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
		List<DetallePedido^>^ listaDetallesPedidos = objDetallePedidoController->buscarDetallesPedidosBebidasSinPedido();
		mostrarGrilla(listaDetallesPedidos);
	}
}
};
}
