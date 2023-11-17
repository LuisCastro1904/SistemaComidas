#pragma once

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasModel;
	using namespace SistemaComidasController;

	/// <summary>
	/// Resumen de frmNuevoProducto
	/// </summary>
	public ref class frmNuevoProducto : public System::Windows::Forms::Form
	{
	public:
		frmNuevoProducto(void)
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
		~frmNuevoProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2Tipo;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2Tipo);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(36, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 341);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del producto";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoProducto::groupBox1_Enter);
			// 
			// comboBox2Tipo
			// 
			this->comboBox2Tipo->FormattingEnabled = true;
			this->comboBox2Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comida", L"Bebida" });
			this->comboBox2Tipo->Location = System::Drawing::Point(242, 188);
			this->comboBox2Tipo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2Tipo->Name = L"comboBox2Tipo";
			this->comboBox2Tipo->Size = System::Drawing::Size(161, 24);
			this->comboBox2Tipo->TabIndex = 14;
			this->comboBox2Tipo->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevoProducto::comboBox2Tipo_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(242, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(242, 92);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(242, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 22);
			this->textBox2->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(285, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoProducto::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoProducto::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Stock:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre: ";
			// 
			// frmNuevoProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 409);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoProducto";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &frmNuevoProducto::frmNuevoProducto_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int codigo = Convert::ToInt32(this->textBox1->Text);*/
		String^ Nombre = this->textBox5->Text;
		String^ Descripcion = this->textBox4->Text;
		double Precio = Convert::ToDouble(this->textBox2->Text);
		String^ Tipo = this-> comboBox2Tipo ->Text;
		int Stock = Convert::ToInt32(this->textBox3->Text);
		/*Producto^ objProducto = gcnew Producto(codigo, Nombre, Descripcion, Precio, Tipo, Stock);*/
		ProductoController^ objProductoController = gcnew ProductoController();
		objProductoController->agregarProducto(Nombre, Descripcion, Precio, Tipo, Stock);
		MessageBox::Show("El producto se ha agregado con éxito");
		this->Close();
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2Tipo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmNuevoProducto_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
