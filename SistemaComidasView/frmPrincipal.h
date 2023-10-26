#pragma once
#include "VistaPedido.h"
#include "VentanaRecepcion.h"
#include "loginAdministracion.h"
#include "loginCocinero.h"
#include "ReporteEstado.h"
#include "ReportePedido.h"
#include "ReporteProducto.h"
#include "MantenimientoPedidos.h"

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::MenuStrip^ menuStrip1;




	private: System::Windows::Forms::ToolStripMenuItem^ administracionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gerenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cocineroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recepciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadoToolStripMenuItem;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->administracionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gerenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cocineroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recepciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(452, 190);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(351, 145);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Presione para realizar su pedido";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->administracionToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1227, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// administracionToolStripMenuItem
			// 
			this->administracionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->gerenteToolStripMenuItem,
					this->cocineroToolStripMenuItem, this->recepciónToolStripMenuItem
			});
			this->administracionToolStripMenuItem->Name = L"administracionToolStripMenuItem";
			this->administracionToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->administracionToolStripMenuItem->Text = L"Ventanas";
			this->administracionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::administracionToolStripMenuItem_Click);
			// 
			// gerenteToolStripMenuItem
			// 
			this->gerenteToolStripMenuItem->Name = L"gerenteToolStripMenuItem";
			this->gerenteToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->gerenteToolStripMenuItem->Text = L"Administración";
			this->gerenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::gerenteToolStripMenuItem_Click_1);
			// 
			// cocineroToolStripMenuItem
			// 
			this->cocineroToolStripMenuItem->Name = L"cocineroToolStripMenuItem";
			this->cocineroToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->cocineroToolStripMenuItem->Text = L"Cocinero";
			this->cocineroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cocineroToolStripMenuItem_Click);
			// 
			// recepciónToolStripMenuItem
			// 
			this->recepciónToolStripMenuItem->Name = L"recepciónToolStripMenuItem";
			this->recepciónToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->recepciónToolStripMenuItem->Text = L"Recepción";
			this->recepciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::recepciónToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pToolStripMenuItem,
					this->pedidosToolStripMenuItem, this->estadoToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pToolStripMenuItem->Text = L"Productos";
			this->pToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::pToolStripMenuItem_Click);
			// 
			// pedidosToolStripMenuItem
			// 
			this->pedidosToolStripMenuItem->Name = L"pedidosToolStripMenuItem";
			this->pedidosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pedidosToolStripMenuItem->Text = L"Pedidos";
			this->pedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::pedidosToolStripMenuItem_Click);
			// 
			// estadoToolStripMenuItem
			// 
			this->estadoToolStripMenuItem->Name = L"estadoToolStripMenuItem";
			this->estadoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->estadoToolStripMenuItem->Text = L"Estado";
			this->estadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::estadoToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1227, 545);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"Principal";
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
		//VistaPedido^ ventanaPedido = gcnew VistaPedido();
		////ventanaMantProductos1 -> MdiParent = this;
		//ventanaPedido-> ShowDialog();
		////this->Close();
		MantenimientoPedidos^ ventanaPedido = gcnew MantenimientoPedidos();
		ventanaPedido->ShowDialog();

	}

	private: System::Void gerenteToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		loginAdministracion^ ventanaLoginAdministracion = gcnew loginAdministracion();
		//ventanaMantProductos->MdiParent = this;
		ventanaLoginAdministracion-> ShowDialog();
	}
private: System::Void cocineroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	loginCocinero^ ventanaLoginCocinero = gcnew loginCocinero();
	//ventanaCocinero->MdiParent = this;
	ventanaLoginCocinero->ShowDialog();
}
private: System::Void recepciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaRecepcion^ vistaRecepcion = gcnew VentanaRecepcion();
	//ventanaRecepcion->MdiParent = this;
	vistaRecepcion->ShowDialog();
}
private: System::Void administracionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteProducto^ ReporteProd = gcnew ReporteProducto();
	//ventanaRecepcion->MdiParent = this;
	ReporteProd->ShowDialog();
}
private: System::Void pedidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportePedido^ ReportePed = gcnew ReportePedido();
	//ventanaRecepcion->MdiParent = this;
	ReportePed->ShowDialog();
}

private: System::Void estadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteEstado^ ReporteEst = gcnew ReporteEstado();
	//ventanaRecepcion->MdiParent = this;
	ReporteEst->ShowDialog();
}
};
	}
