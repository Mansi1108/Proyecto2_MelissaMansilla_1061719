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

	private: System::Windows::Forms::Label^  lblAgenda;
	private: System::Windows::Forms::Label^  lblSeleccion;

	private: System::Windows::Forms::TextBox^  TBaño;

	private: System::Windows::Forms::Label^  lblaño;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  lbluser;
	public: System::Windows::Forms::Label^  lblprueba;

	private: System::Windows::Forms::Label^  lblMes;
	private: System::Windows::Forms::TextBox^  Tbmonth;
	private: System::Windows::Forms::TextBox^  TBDia;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::ListBox^  LBVista;
	public:
	private:


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
			this->lblAgenda = (gcnew System::Windows::Forms::Label());
			this->lblSeleccion = (gcnew System::Windows::Forms::Label());
			this->TBaño = (gcnew System::Windows::Forms::TextBox());
			this->lblaño = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbluser = (gcnew System::Windows::Forms::Label());
			this->lblprueba = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->Tbmonth = (gcnew System::Windows::Forms::TextBox());
			this->TBDia = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LBVista = (gcnew System::Windows::Forms::ListBox());
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
			this->CalendarioM->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Calendario::CalendarioM_DateSelected);
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
			this->lblSeleccion->Location = System::Drawing::Point(37, 159);
			this->lblSeleccion->Name = L"lblSeleccion";
			this->lblSeleccion->Size = System::Drawing::Size(293, 20);
			this->lblSeleccion->TabIndex = 16;
			this->lblSeleccion->Text = L"Selecciona una fecha antes de agregar*";
			// 
			// TBaño
			// 
			this->TBaño->Location = System::Drawing::Point(83, 38);
			this->TBaño->Name = L"TBaño";
			this->TBaño->Size = System::Drawing::Size(126, 26);
			this->TBaño->TabIndex = 14;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(242, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Usuario:";
			// 
			// lbluser
			// 
			this->lbluser->AutoSize = true;
			this->lbluser->Location = System::Drawing::Point(319, 18);
			this->lbluser->Name = L"lbluser";
			this->lbluser->Size = System::Drawing::Size(73, 20);
			this->lbluser->TabIndex = 24;
			this->lbluser->Text = L"Usuario1";
			// 
			// lblprueba
			// 
			this->lblprueba->AutoSize = true;
			this->lblprueba->Location = System::Drawing::Point(242, 117);
			this->lblprueba->Name = L"lblprueba";
			this->lblprueba->Size = System::Drawing::Size(49, 20);
			this->lblprueba->TabIndex = 25;
			this->lblprueba->Text = L"fecha";
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(33, 81);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(43, 20);
			this->lblMes->TabIndex = 13;
			this->lblMes->Text = L"Mes:";
			// 
			// Tbmonth
			// 
			this->Tbmonth->Location = System::Drawing::Point(83, 75);
			this->Tbmonth->Name = L"Tbmonth";
			this->Tbmonth->Size = System::Drawing::Size(126, 26);
			this->Tbmonth->TabIndex = 15;
			// 
			// TBDia
			// 
			this->TBDia->Location = System::Drawing::Point(83, 111);
			this->TBDia->Name = L"TBDia";
			this->TBDia->Size = System::Drawing::Size(126, 26);
			this->TBDia->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Dia:";
			// 
			// LBVista
			// 
			this->LBVista->FormattingEnabled = true;
			this->LBVista->ItemHeight = 20;
			this->LBVista->Location = System::Drawing::Point(441, 189);
			this->LBVista->Name = L"LBVista";
			this->LBVista->Size = System::Drawing::Size(185, 264);
			this->LBVista->TabIndex = 32;
			// 
			// Calendario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 464);
			this->Controls->Add(this->LBVista);
			this->Controls->Add(this->TBDia);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblprueba);
			this->Controls->Add(this->lbluser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->CalendarioM);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblAgenda);
			this->Controls->Add(this->lblSeleccion);
			this->Controls->Add(this->Tbmonth);
			this->Controls->Add(this->TBaño);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblaño);
			this->Name = L"Calendario";
			this->Text = L"Calendario";
			this->Load += gcnew System::EventHandler(this, &Calendario::Calendario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String^ user ;

private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
		MonthCalendar^ Calendario = gcnew MonthCalendar();
		String^ day = TBDia->Text;
		int dia = System::Convert::ToInt16(day);
		String^ month = Tbmonth->Text;
		int mes = System::Convert::ToInt16(month);
		String^ year = TBaño->Text;
		//Validaciones de los numeros del dia y del mes, para que no ingresen numeros invalidos.
		if (mes >= 1 && mes <= 12)
		{
			switch (mes)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (dia >= 1 && dia <= 31)
				{
					String^ cadena = day + "/" + month + "/" + year;
					DateTime fechaP = System::Convert::ToDateTime(day + "/" + month + "/" + year);

					CalendarioM->SetDate(fechaP);
					lblprueba->Text = cadena;
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Ingrese dia válido.");
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (dia >= 1 && dia <= 30)
				{
					String^ cadena = day + "/" + month + "/" + year;
					DateTime fechaP = System::Convert::ToDateTime(day + "/" + month + "/" + year);

					CalendarioM->SetDate(fechaP);
					lblprueba->Text = cadena;
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Ingrese dia válido.");
				}
				break;
			case 2:
				if (dia >= 1 && dia <= 29)
				{
					String^ cadena = day + "/" + month + "/" + year;
					DateTime fechaP = System::Convert::ToDateTime(day + "/" + month + "/" + year);

					CalendarioM->SetDate(fechaP);
					lblprueba->Text = cadena;
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Ingrese dia válido.");
				}
				break;
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Ingrese mes válido.");
		}
		
	}
private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Se toman datos de forms anteriores y se llevan a otro label para contener la información anterior.
	Actividades^ actividadesForm = gcnew Actividades();
	actividadesForm->lblfecha->Text = lblprueba->Text;
	actividadesForm->lblFechaAl->Text = lblprueba->Text;
	actividadesForm->lblFechaREc->Text = lblprueba->Text;
	actividadesForm->lbluserAC->Text = lbluser->Text;
	actividadesForm->lbluserAl->Text = lbluser->Text;
	actividadesForm->lbluserRe->Text = lbluser->Text;
	actividadesForm->Show();
}
private: System::Void Calendario_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void CalendarioM_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	LBVista->Items->Clear();
	String^ fecha = CalendarioM->SelectionRange->Start.ToShortDateString;

	StreamReader^ sr = gcnew StreamReader(user + ".csv");

}
};
}
