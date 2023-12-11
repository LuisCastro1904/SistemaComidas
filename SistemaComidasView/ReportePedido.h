#pragma once

namespace SistemaComidasView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaComidasController;
	using namespace SistemaComidasModel;
	/// <summary>
	/// Resumen de ReportePedido
	/// </summary>
	public ref class ReportePedido : public System::Windows::Forms::Form
	{
	public:
		ReportePedido(void)
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
		~ReportePedido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(50, 85);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(696, 485);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(305, 35);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(129, 22);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(240, 35);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Fecha:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(463, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReportePedido::button1_Click);
			// 
			// ReportePedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 608);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->chart1);
			this->Name = L"ReportePedido";
			this->Text = L"ReportePedido";
			this->Load += gcnew System::EventHandler(this, &ReportePedido::ReportePedido_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportePedido_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fechaSeleccionada = this->dateTimePicker1->Text;
		DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
		List<String^>^ listaProductos = objDetallePedidoController->buscarDetallesPedidosxFecha(fechaSeleccionada);
		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listaProductos->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(objDetallePedidoController->obtenerCantidadProductos(listaProductos[i], fechaSeleccionada));
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaProductos[i];
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaProductos[i];
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(objDetallePedidoController->obtenerCantidadProductos(listaProductos[i], fechaSeleccionada));
		}
	}
};
}
