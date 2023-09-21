#pragma once
#include "VentanaPago.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaResumen
	/// </summary>
	public ref class VentanaResumen : public System::Windows::Forms::Form
	{
	public:
		VentanaResumen(void)
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
		~VentanaResumen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ListBox^ PEDIDO;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView1;

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
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PEDIDO = (gcnew System::Windows::Forms::ListBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->listView1);
			this->groupBox1->Controls->Add(this->PEDIDO);
			this->groupBox1->Location = System::Drawing::Point(234, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(434, 758);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RESUMEN";
			// 
			// PEDIDO
			// 
			this->PEDIDO->FormattingEnabled = true;
			this->PEDIDO->ItemHeight = 20;
			this->PEDIDO->Location = System::Drawing::Point(62, 79);
			this->PEDIDO->Name = L"PEDIDO";
			this->PEDIDO->Size = System::Drawing::Size(298, 564);
			this->PEDIDO->TabIndex = 0;
			this->PEDIDO->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaResumen::PEDIDO_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(111, 160);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(198, 352);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(242, 673);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ACEPTAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaResumen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 673);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 56);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ATRÁS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// VentanaResumen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 828);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Name = L"VentanaResumen";
			this->Text = L"VentanaResumen";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PEDIDO_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaPago^ ventanapago  = gcnew VentanaPago;
		//ventanaMantProyectos1 -> MdiParent = this;
		ventanapago -> Show();
	}
};
}
