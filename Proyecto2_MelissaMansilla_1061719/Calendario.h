#pragma once
#include "Actividades.h"

namespace Proyecto2MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Calendario
	/// </summary>
	public ref class Calendario : public System::Windows::Forms::Form
	{
	public:
		Calendario(void)
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
		~Calendario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBuscar;
	protected:
	private: System::Windows::Forms::MonthCalendar^  CalendarioM;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::RichTextBox^  RTBrecordatorios;
	private: System::Windows::Forms::Label^  lblAgenda;
	private: System::Windows::Forms::Label^  lblSeleccion;
	private: System::Windows::Forms::TextBox^  Tbmonth;
	private: System::Windows::Forms::TextBox^  TBaño;
	private: System::Windows::Forms::Label^  lblMes;
	private: System::Windows::Forms::Label^  lblaño;

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
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->CalendarioM = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->RTBrecordatorios = (gcnew System::Windows::Forms::RichTextBox());
			this->lblAgenda = (gcnew System::Windows::Forms::Label());
			this->lblSeleccion = (gcnew System::Windows::Forms::Label());
			this->Tbmonth = (gcnew System::Windows::Forms::TextBox());
			this->TBaño = (gcnew System::Windows::Forms::TextBox());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->lblaño = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(227, 59);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(130, 40);
			this->btnBuscar->TabIndex = 22;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseMnemonic = false;
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Calendario::btnBuscar_Click);
			// 
			// CalendarioM
			// 
			this->CalendarioM->Location = System::Drawing::Point(41, 189);
			this->CalendarioM->MaxSelectionCount = 1;
			this->CalendarioM->Name = L"CalendarioM";
			this->CalendarioM->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(449, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 20);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Recordatorios y Tareas:";
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(469, 73);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(148, 72);
			this->btnAgregar->TabIndex = 19;
			this->btnAgregar->Text = L"Agregar Recordatorios";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Calendario::btnAgregar_Click);
			// 
			// RTBrecordatorios
			// 
			this->RTBrecordatorios->Location = System::Drawing::Point(440, 192);
			this->RTBrecordatorios->Name = L"RTBrecordatorios";
			this->RTBrecordatorios->ReadOnly = true;
			this->RTBrecordatorios->Size = System::Drawing::Size(203, 249);
			this->RTBrecordatorios->TabIndex = 18;
			this->RTBrecordatorios->Text = L"";
			// 
			// lblAgenda
			// 
			this->lblAgenda->AutoSize = true;
			this->lblAgenda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAgenda->Location = System::Drawing::Point(476, 18);
			this->lblAgenda->Name = L"lblAgenda";
			this->lblAgenda->Size = System::Drawing::Size(141, 40);
			this->lblAgenda->TabIndex = 17;
			this->lblAgenda->Text = L"Agenda";
			// 
			// lblSeleccion
			// 
			this->lblSeleccion->AutoSize = true;
			this->lblSeleccion->Location = System::Drawing::Point(37, 140);
			this->lblSeleccion->Name = L"lblSeleccion";
			this->lblSeleccion->Size = System::Drawing::Size(293, 20);
			this->lblSeleccion->TabIndex = 16;
			this->lblSeleccion->Text = L"Selecciona una fecha antes de agregar*";
			// 
			// Tbmonth
			// 
			this->Tbmonth->Location = System::Drawing::Point(83, 82);
			this->Tbmonth->Name = L"Tbmonth";
			this->Tbmonth->Size = System::Drawing::Size(126, 26);
			this->Tbmonth->TabIndex = 15;
			// 
			// TBaño
			// 
			this->TBaño->Location = System::Drawing::Point(83, 38);
			this->TBaño->Name = L"TBaño";
			this->TBaño->Size = System::Drawing::Size(126, 26);
			this->TBaño->TabIndex = 14;
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(33, 88);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(43, 20);
			this->lblMes->TabIndex = 13;
			this->lblMes->Text = L"Mes:";
			// 
			// lblaño
			// 
			this->lblaño->AutoSize = true;
			this->lblaño->Location = System::Drawing::Point(34, 38);
			this->lblaño->Name = L"lblaño";
			this->lblaño->Size = System::Drawing::Size(42, 20);
			this->lblaño->TabIndex = 12;
			this->lblaño->Text = L"Año:";
			// 
			// Calendario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 464);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->CalendarioM);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->RTBrecordatorios);
			this->Controls->Add(this->lblAgenda);
			this->Controls->Add(this->lblSeleccion);
			this->Controls->Add(this->Tbmonth);
			this->Controls->Add(this->TBaño);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblaño);
			this->Name = L"Calendario";
			this->Text = L"Calendario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
		MonthCalendar^ Calendario = gcnew MonthCalendar();
		String^ month = Tbmonth->Text;
		String^ year = TBaño->Text;
		DateTime fecha = System::Convert::ToDateTime("01/" + month + "/" + year);
		CalendarioM->SetDate(fecha);
	}
private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ seleccionFe = Convert::ToString(CalendarioM->SelectionRange->Start);
	Actividades^ actividadesForm = gcnew Actividades();
	actividadesForm->Show();
}
};
}
