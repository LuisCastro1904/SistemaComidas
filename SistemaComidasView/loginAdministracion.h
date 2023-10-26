#pragma once
#include "VentanaRegistro.h"
#include "frmMantenimientoLogin.h"

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
	/// Resumen de loginAdministracion
	/// </summary>
	public ref class loginAdministracion : public System::Windows::Forms::Form
	{
	public:
		loginAdministracion(void)
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
		~loginAdministracion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(126, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &loginAdministracion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(153, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 27);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &loginAdministracion::button2_Click);
			// 
			// loginAdministracion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(275, 193);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"loginAdministracion";
			this->Text = L"Iniciar sesión";
			this->Load += gcnew System::EventHandler(this, &loginAdministracion::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UsuarioIngresado = textBox1->Text;
	String^ ContraseñaIngresada = textBox2->Text;
	String^ Tipo = "Administrador";

	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	List<Usuario^>^ listaUsuario = objUsuarioController->BuscarUsuario(Tipo);

	bool usuarioValido = false;

	for (int i = 0; i < listaUsuario->Count; i++) {
		if (listaUsuario[i]->getNombreUsuario() == UsuarioIngresado &&
			listaUsuario[i]->getContrasena() == ContraseñaIngresada) {

			usuarioValido = true;
			break;
		}
	}

	if (usuarioValido) {
		VentanaRegistro^ ventanaResgistro = gcnew VentanaRegistro();
		ventanaResgistro->ShowDialog();
	}
	else {
		MessageBox::Show("Usuario o contraseña incorrectos");
		textBox2->Clear();
		textBox1->Clear();
	}

	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
