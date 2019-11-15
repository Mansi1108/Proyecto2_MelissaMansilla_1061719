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
	/// Summary for Actividades
	/// </summary>
	public ref class Actividades : public System::Windows::Forms::Form
	{
	public:
		Actividades(void)
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
		~Actividades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  RTBActividades;
	private: System::Windows::Forms::RichTextBox^  RTBrecordatorios;
	private: System::Windows::Forms::RichTextBox^  RTBAlarma;
	private: System::Windows::Forms::Button^  btnGuardar;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RTBActividades = (gcnew System::Windows::Forms::RichTextBox());
			this->RTBrecordatorios = (gcnew System::Windows::Forms::RichTextBox());
			this->RTBAlarma = (gcnew System::Windows::Forms::RichTextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Actividades";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Alarma";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Recordatorios";
			// 
			// RTBActividades
			// 
			this->RTBActividades->Location = System::Drawing::Point(31, 50);
			this->RTBActividades->Name = L"RTBActividades";
			this->RTBActividades->Size = System::Drawing::Size(847, 96);
			this->RTBActividades->TabIndex = 3;
			this->RTBActividades->Text = L"";
			// 
			// RTBrecordatorios
			// 
			this->RTBrecordatorios->Location = System::Drawing::Point(28, 185);
			this->RTBrecordatorios->Name = L"RTBrecordatorios";
			this->RTBrecordatorios->Size = System::Drawing::Size(847, 96);
			this->RTBrecordatorios->TabIndex = 4;
			this->RTBrecordatorios->Text = L"";
			// 
			// RTBAlarma
			// 
			this->RTBAlarma->Location = System::Drawing::Point(28, 322);
			this->RTBAlarma->Name = L"RTBAlarma";
			this->RTBAlarma->Size = System::Drawing::Size(847, 96);
			this->RTBAlarma->TabIndex = 5;
			this->RTBAlarma->Text = L"";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(374, 436);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(131, 48);
			this->btnGuardar->TabIndex = 6;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Actividades::btnGuardar_Click);
			// 
			// Actividades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 498);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->RTBAlarma);
			this->Controls->Add(this->RTBrecordatorios);
			this->Controls->Add(this->RTBActividades);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Actividades";
			this->Text = L"Actividades";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->Hide();
	}
};
}
