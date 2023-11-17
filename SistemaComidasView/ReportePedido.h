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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(73, 54);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(600, 475);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// ReportePedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 575);
			this->Controls->Add(this->chart1);
			this->Name = L"ReportePedido";
			this->Text = L"ReportePedido";
			this->Load += gcnew System::EventHandler(this, &ReportePedido::ReportePedido_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReportePedido_Load(System::Object^ sender, System::EventArgs^ e) {
		DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
		List<DetallePedido^>^ listaDetalle = objDetallePedidoController->buscarAll();
		for (int i = 0; i < listaDetalle->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaDetalle[i]->getCantidad());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaDetalle[i]->getNombreProducto();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaDetalle[i]->getNombreProducto();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaDetalle[i]->getCantidad());
		}
	}
	};
}
