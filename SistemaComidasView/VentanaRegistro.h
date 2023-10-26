#pragma once
#include "frmMantenimientoProducto.h"
#include "frmMantenimientoLogin.h"

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaRegistro
	/// </summary>
	public ref class VentanaRegistro : public System::Windows::Forms::Form
	{
	public:
		VentanaRegistro(void)
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
		~VentanaRegistro()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 54);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Registrar nuevos usuarios";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaRegistro::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 54);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ir al mantenimiento de los productos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaRegistro::button2_Click);
			// 
			// VentanaRegistro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 281);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"VentanaRegistro";
			this->Text = L"VentanaRegistro";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoLogin^ ventanaMantenimientoLogin = gcnew frmMantenimientoLogin();
		//ventanaMantProductos->MdiParent = this;
		ventanaMantenimientoLogin->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoProducto^ ventanaMantProductos = gcnew frmMantenimientoProducto();
		//ventanaMantProductos->MdiParent = this;
		ventanaMantProductos->ShowDialog();
	}
	};
}
