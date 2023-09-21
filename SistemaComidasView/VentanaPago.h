#pragma once
#include "VentanaFin.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaPago
	/// </summary>
	public ref class VentanaPago : public System::Windows::Forms::Form
	{
	public:
		VentanaPago(void)
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
		~VentanaPago()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(131, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(427, 687);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"GRACIAS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(210, 86);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &VentanaPago::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(210, 124);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(210, 164);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(76, 582);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 56);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ATRÁS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(256, 582);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 56);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ACEPTAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaPago::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(210, 327);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 26);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"NUMERO DE TARJETA";
			// 
			// VentanaPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 765);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Name = L"VentanaPago";
			this->Text = L"VentanaPago";
			this->Load += gcnew System::EventHandler(this, &VentanaPago::VentanaPago_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VentanaPago_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaFin ^ ventanaFIN = gcnew VentanaFin;
	//ventanaMantProyectos1 -> MdiParent = this;
	ventanaFIN ->Show();

}
};
}
