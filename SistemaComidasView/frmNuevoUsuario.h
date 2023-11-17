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
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmNuevoUsuario
	/// </summary>
	public ref class frmNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoUsuario(void)
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
		~frmNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(43, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(352, 235);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del nuevo usuario";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(179, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 22);
			this->textBox3->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Administrador", L"Cocinero" });
			this->comboBox1->Location = System::Drawing::Point(179, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button2_Click);
			// 
			// frmNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 382);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoUsuario";
			this->Text = L"frmNuevoUsuario";
			this->Load += gcnew System::EventHandler(this, &frmNuevoUsuario::frmNuevoUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int codigo = Convert::ToInt32(this->textBox1->Text);*/
		String^ NombreUsuario = this->textBox2->Text;
		String^ Contrasena = this->textBox3->Text;
		String^ TipoUsuario = this->comboBox1->Text;
		/*Usuario^ objUsuario = gcnew Usuario( NombreUsuario, Contrasena, TipoUsuario);*/
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioController->agregarUsuario(NombreUsuario, Contrasena,  TipoUsuario);
		MessageBox::Show("El nuevo ususario se ha agregado con éxito");
		this->Close();
	}
private: System::Void frmNuevoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
