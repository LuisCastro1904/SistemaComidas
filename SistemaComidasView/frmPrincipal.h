#pragma once
#include "VistaPedido.h"
#include "frmMantenimientoProyecto.h"
#include "VistaCocinero.h"
#include "VentanaRecepcion.h"

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::MenuStrip^ menuStrip1;




	private: System::Windows::Forms::ToolStripMenuItem^ administracionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gerenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cocineroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recepci�nToolStripMenuItem;









	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->administracionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gerenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cocineroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recepci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(259, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"BIENVENIDO";
			this->label2->Click += gcnew System::EventHandler(this, &frmPrincipal::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(196, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 72);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Presione para realizar su pedido";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->administracionToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(625, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// administracionToolStripMenuItem
			// 
			this->administracionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->gerenteToolStripMenuItem,
					this->cocineroToolStripMenuItem, this->recepci�nToolStripMenuItem
			});
			this->administracionToolStripMenuItem->Name = L"administracionToolStripMenuItem";
			this->administracionToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->administracionToolStripMenuItem->Text = L"Administracion";
			// 
			// gerenteToolStripMenuItem
			// 
			this->gerenteToolStripMenuItem->Name = L"gerenteToolStripMenuItem";
			this->gerenteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->gerenteToolStripMenuItem->Text = L"Gerente";
			this->gerenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::gerenteToolStripMenuItem_Click_1);
			// 
			// cocineroToolStripMenuItem
			// 
			this->cocineroToolStripMenuItem->Name = L"cocineroToolStripMenuItem";
			this->cocineroToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cocineroToolStripMenuItem->Text = L"Cocinero";
			this->cocineroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cocineroToolStripMenuItem_Click);
			// 
			// recepci�nToolStripMenuItem
			// 
			this->recepci�nToolStripMenuItem->Name = L"recepci�nToolStripMenuItem";
			this->recepci�nToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->recepci�nToolStripMenuItem->Text = L"Recepci�n";
			this->recepci�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::recepci�nToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 346);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VistaPedido^ ventanaMantProyectos1  = gcnew VistaPedido();
		//ventanaMantProyectos1 -> MdiParent = this;
		ventanaMantProyectos1 ->Show();
	}

	private: System::Void gerenteToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoProyecto^ ventanaMantProyectos = gcnew frmMantenimientoProyecto();
		//ventanaMantProyectos->MdiParent = this;
		ventanaMantProyectos-> ShowDialog();
	}
private: System::Void cocineroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	VistaCocinero ^ ventanaCocinero = gcnew VistaCocinero();
	//ventanaCocinero->MdiParent = this;
	ventanaCocinero->Show();
}
private: System::Void recepci�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaRecepcion^ vistaRecepcion = gcnew VentanaRecepcion();
	//ventanaRecepcion->MdiParent = this;
	vistaRecepcion->Show();
}
};
	}
