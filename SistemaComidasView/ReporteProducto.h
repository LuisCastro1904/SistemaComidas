#pragma once

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasController;
	using namespace SistemaComidasModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ReporteProducto
	/// </summary>
	public ref class ReporteProducto : public System::Windows::Forms::Form
	{
	public:
		ReporteProducto(void)
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
		~ReporteProducto()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Bebida", L"Comida" });
			this->comboBox1->Location = System::Drawing::Point(266, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(141, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ReporteProducto::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(448, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReporteProducto::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(211, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tipo:";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(47, 90);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(633, 515);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// ReporteProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 707);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"ReporteProducto";
			this->Text = L"ReporteProducto";
			this->Load += gcnew System::EventHandler(this, &ReporteProducto::ReporteProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Tipo = this->comboBox1->Text;
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProductos = objProductoController->BuscarProducto(Tipo);
		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listaProductos->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaProductos[i]->getStock());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaProductos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaProductos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaProductos[i]->getStock());
		}

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ReporteProducto_Load(System::Object^ sender, System::EventArgs^ e) {
	ProductoController^ objProductoController = gcnew ProductoController();
	List<Producto^>^ listaProducto = objProductoController->buscarAll();
	for (int i = 0; i < listaProducto->Count; i++) {
		this->chart1->Series["Series1"]->Points->Add(listaProducto[i]->getStock());
		this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaProducto[i]->getNombre();
		this->chart1->Series["Series1"]->Points[i]->LegendText = listaProducto[i]->getNombre();
		this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaProducto[i]->getStock());
	}

}
};
}
