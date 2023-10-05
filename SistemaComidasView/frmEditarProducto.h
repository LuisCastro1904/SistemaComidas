#pragma once

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasController;
	using namespace SistemaComidasModel;

	/// <summary>
	/// Resumen de frmEditarProducto
	/// </summary>
	public ref class frmEditarProducto : public System::Windows::Forms::Form
	{
	public:
		frmEditarProducto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarProducto(Producto^ objProducto)
		{
			InitializeComponent();
			this->objProducto = objProducto;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Producto^ objProducto;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ComboBox^ comboBox1Tipo;


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
			this->comboBox1Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1Tipo);
			this->groupBox1->Controls->Add(this->listView1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(58, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 475);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del producto";
			// 
			// comboBox1Tipo
			// 
			this->comboBox1Tipo->FormattingEnabled = true;
			this->comboBox1Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comida", L"Bebida" });
			this->comboBox1Tipo->Location = System::Drawing::Point(276, 292);
			this->comboBox1Tipo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox1Tipo->Name = L"comboBox1Tipo";
			this->comboBox1Tipo->Size = System::Drawing::Size(180, 28);
			this->comboBox1Tipo->TabIndex = 15;
			this->comboBox1Tipo->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEditarProducto::comboBox1Tipo_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(8, 28);
			this->listView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(180, 147);
			this->listView1->TabIndex = 14;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(276, 111);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 26);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmEditarProducto::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(276, 172);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(181, 33);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(276, 357);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 26);
			this->textBox3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(276, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 26);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(276, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 26);
			this->textBox1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(326, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarProducto::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarProducto::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(60, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Stock:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// frmEditarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 588);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarProducto";
			this->Text = L"Editar Producto";
			this->Load += gcnew System::EventHandler(this, &frmEditarProducto::frmEditarProducto_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Convert::ToString(this->objProducto->getCodigo());
		this->textBox5->Text = this->objProducto->getNombre();
		this->textBox4->Text = this->objProducto->getDescripcion();
		this->textBox2->Text = Convert::ToString(this->objProducto->getPrecio());
		this->comboBox1Tipo->SelectedValue = this->objProducto->getTipo();
		this->textBox3->Text = Convert::ToString(this->objProducto->getStock());
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	String^ Nombre = this->textBox5->Text;
	String^ Descripcion = this->textBox4->Text;
	double Precio = Convert::ToDouble(this->textBox2->Text);
	String^ Tipo = this->comboBox1Tipo->SelectedText;
	int Stock = Convert::ToInt32(this->textBox3->Text);
	Producto^ objProducto = gcnew Producto(codigo, Nombre, Descripcion, Precio, Tipo, Stock);
	ProductoController^ objProductoController = gcnew ProductoController();
	objProductoController->actualizarProducto(objProducto);
	MessageBox::Show("El producto se ha actualizado correctamente");
	this->Close();
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1Tipo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
