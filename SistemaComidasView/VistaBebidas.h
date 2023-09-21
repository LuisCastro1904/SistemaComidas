#pragma once
#include "VentanaResumen.h"
namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VistaBebidas
	/// </summary>
	public ref class VistaBebidas : public System::Windows::Forms::Form
	{
	public:
		VistaBebidas(void)
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
		~VistaBebidas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(94, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(721, 687);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bebidas";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &VistaBebidas::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(66, 568);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 89);
			this->button4->TabIndex = 3;
			this->button4->Text = L"AGUA";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(66, 437);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 89);
			this->button6->TabIndex = 5;
			this->button6->Text = L"MARACUYA";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 89);
			this->button1->TabIndex = 7;
			this->button1->Text = L"COCA COLA";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 89);
			this->button2->TabIndex = 6;
			this->button2->Text = L"CHICHA";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(66, 63);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 89);
			this->button3->TabIndex = 8;
			this->button3->Text = L"INKA COLA";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Location = System::Drawing::Point(262, 76);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 450);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resumen de Pedido";
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(515, 568);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(158, 51);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Resumen";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VistaBebidas::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(307, 568);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(158, 51);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Atrás";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// VistaBebidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 766);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Name = L"VistaBebidas";
			this->Text = L"VistaBebidas";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaResumen^ ventanaResumen = gcnew VentanaResumen;
		//ventanaMantProyectos1 -> MdiParent = this;
		ventanaResumen->Show();

	}
};
}
