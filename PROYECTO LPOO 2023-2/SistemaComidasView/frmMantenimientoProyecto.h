#pragma once

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMantenimientoProyecto
	/// </summary>
	public ref class frmMantenimientoProyecto : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoProyecto(void)
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
		~frmMantenimientoProyecto()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido Admi";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(149, 95);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(586, 208);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Busqueda";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(203, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(312, 333);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Agregar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(419, 333);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 36);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Eliminar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(534, 333);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 36);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Salir";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// frmMantenimientoProyecto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 636);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->IsMdiContainer = true;
			this->Name = L"frmMantenimientoProyecto";
			this->Text = L"frmMantenimientoProyecto";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoProyecto::frmMantenimientoProyecto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMantenimientoProyecto_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
