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
	/// Resumen de frmEditarUsuario
	/// </summary>
	public ref class frmEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		frmEditarUsuario(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: int codigo;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(291, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(56, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(352, 286);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del usuario";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmEditarUsuario::groupBox1_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"C�digo:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(179, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 22);
			this->textBox3->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Administrador", L"Cocinero" });
			this->comboBox1->Location = System::Drawing::Point(179, 224);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmEditarUsuario::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(179, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrase�a:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// frmEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 446);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarUsuario";
			this->Text = L"frmEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &frmEditarUsuario::frmEditarUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->buscarUsuarioporCodigo(this->codigo);
		this->textBox1->Text = Convert::ToString(objUsuario->getCodigo());
		this->textBox2->Text = objUsuario->getNombreUsuario();
		this->textBox3->Text = objUsuario->getContrasena();
		this->comboBox1->Text = objUsuario->getTipoUsuario();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ NombreUsuario = this->textBox2->Text;
		String^ Contrase�a = this->textBox3->Text;
		String^ TipoUsuario = this->comboBox1->Text;
		
		Usuario^ objUsuario = gcnew Usuario(codigo, NombreUsuario, Contrase�a, TipoUsuario);
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioController->actualizarUsuario(codigo, NombreUsuario, Contrase�a, TipoUsuario);
		MessageBox::Show("El Usuario se ha actualizado correctamente");
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
