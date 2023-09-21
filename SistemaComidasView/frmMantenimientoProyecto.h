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

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido Admi";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::label1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(213, 417);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 29);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(310, 417);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 29);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Agregar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(405, 417);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 29);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Eliminar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(508, 417);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 29);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Salir";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Codigo de Producto";
			this->label2->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Tipo de Producto";
			this->label3->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Nombre del Producto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(85, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Descripcion del Prodcuto";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Precio del Producto";
			this->label6->Click += gcnew System::EventHandler(this, &frmMantenimientoProyecto::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ingredientes";
			// 
			// frmMantenimientoProyecto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 509);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
