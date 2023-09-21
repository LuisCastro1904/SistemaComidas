#pragma once
#include "VistaBebidas.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VistaPedido
	/// </summary>
	public ref class VistaPedido : public System::Windows::Forms::Form
	{
	public:
		VistaPedido(void)
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
		~VistaPedido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;







	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;









	protected:

	protected:

	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(39, 42);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1069, 602);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Popular Items";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VistaPedido::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Location = System::Drawing::Point(602, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 450);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resumen de Pedido";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &VistaPedido::groupBox2_Enter);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(117, 47);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(198, 26);
			this->numericUpDown1->TabIndex = 9;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(90, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(269, 225);
			this->dataGridView1->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(234, 356);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 60);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Quitar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &VistaPedido::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(90, 356);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 60);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Agregar";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(350, 408);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(202, 129);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Comida 6";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(676, 499);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(274, 51);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Siguiente Bebidas";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &VistaPedido::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(350, 231);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(202, 129);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Comida 5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(350, 48);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(202, 129);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Comida 4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 408);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(202, 129);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Comida 3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 231);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 129);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Comida 2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 48);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 129);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Comida 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VistaPedido::button1_Click);
			// 
			// VistaPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 675);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"VistaPedido";
			this->Text = L"VistaPedido";
			this->Load += gcnew System::EventHandler(this, &VistaPedido::VistaPedido_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VistaPedido_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvProducts_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	VistaBebidas ^ ventanabebidas = gcnew VistaBebidas ();
	//ventanaMantProyectos1 -> MdiParent = this;
	ventanabebidas -> Show();
}
};
}
