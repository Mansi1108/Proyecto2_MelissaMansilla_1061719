#pragma once

namespace Proyecto2MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::Label^  lblaño;
	private: System::Windows::Forms::Label^  lblMes;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  lblSeleccion;
	private: System::Windows::Forms::Label^  lblAgenda;
	private: System::Windows::Forms::RichTextBox^  RTBrecordatorios;

	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;















	protected:

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
			this->lblaño = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lblSeleccion = (gcnew System::Windows::Forms::Label());
			this->lblAgenda = (gcnew System::Windows::Forms::Label());
			this->RTBrecordatorios = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// lblaño
			// 
			this->lblaño->AutoSize = true;
			this->lblaño->Location = System::Drawing::Point(27, 27);
			this->lblaño->Name = L"lblaño";
			this->lblaño->Size = System::Drawing::Size(42, 20);
			this->lblaño->TabIndex = 1;
			this->lblaño->Text = L"Año:";
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(26, 77);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(43, 20);
			this->lblMes->TabIndex = 2;
			this->lblMes->Text = L"Mes:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 26);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(76, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(126, 26);
			this->textBox2->TabIndex = 4;
			// 
			// lblSeleccion
			// 
			this->lblSeleccion->AutoSize = true;
			this->lblSeleccion->Location = System::Drawing::Point(30, 129);
			this->lblSeleccion->Name = L"lblSeleccion";
			this->lblSeleccion->Size = System::Drawing::Size(293, 20);
			this->lblSeleccion->TabIndex = 5;
			this->lblSeleccion->Text = L"Selecciona una fecha antes de agregar*";
			// 
			// lblAgenda
			// 
			this->lblAgenda->AutoSize = true;
			this->lblAgenda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAgenda->Location = System::Drawing::Point(475, 48);
			this->lblAgenda->Name = L"lblAgenda";
			this->lblAgenda->Size = System::Drawing::Size(141, 40);
			this->lblAgenda->TabIndex = 6;
			this->lblAgenda->Text = L"Agenda";
			// 
			// RTBrecordatorios
			// 
			this->RTBrecordatorios->Location = System::Drawing::Point(433, 171);
			this->RTBrecordatorios->Name = L"RTBrecordatorios";
			this->RTBrecordatorios->ReadOnly = true;
			this->RTBrecordatorios->Size = System::Drawing::Size(203, 269);
			this->RTBrecordatorios->TabIndex = 7;
			this->RTBrecordatorios->Text = L"";
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(284, 27);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(148, 72);
			this->btnAgregar->TabIndex = 8;
			this->btnAgregar->Text = L"Agregar Recordatorios";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(478, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Recordatorios:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(34, 178);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 485);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->RTBrecordatorios);
			this->Controls->Add(this->lblAgenda);
			this->Controls->Add(this->lblSeleccion);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblaño);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
