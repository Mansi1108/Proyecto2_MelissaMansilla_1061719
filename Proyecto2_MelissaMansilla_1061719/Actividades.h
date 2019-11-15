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

	protected:





	private: System::Windows::Forms::Button^  btnGuardar;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::RichTextBox^  RTBMateriales;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  RTBDescripccion;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  TBPrioridad;
	private: System::Windows::Forms::TextBox^  TBIDA;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  TBLugar;

	private: System::Windows::Forms::TextBox^  TBHoF;

	private: System::Windows::Forms::TextBox^  TBHoraI;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ComboBox^  CBPersonasI;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  RTBDesR;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  TBPriodidadR;
	private: System::Windows::Forms::TextBox^  TBIDR;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  TBHoraL;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::RichTextBox^  RTBDesA;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  TBPrioridadA;
	private: System::Windows::Forms::TextBox^  TBIdenA;




	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  TBHoraA;

	private: System::Windows::Forms::Label^  label19;

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
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->TBIDA = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TBLugar = (gcnew System::Windows::Forms::TextBox());
			this->TBHoF = (gcnew System::Windows::Forms::TextBox());
			this->TBHoraI = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBPrioridad = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->RTBDescripccion = (gcnew System::Windows::Forms::RichTextBox());
			this->RTBMateriales = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CBPersonasI = (gcnew System::Windows::Forms::ComboBox());
			this->RTBDesR = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TBPriodidadR = (gcnew System::Windows::Forms::TextBox());
			this->TBIDR = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TBHoraL = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->RTBDesA = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TBPrioridadA = (gcnew System::Windows::Forms::TextBox());
			this->TBIdenA = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->TBHoraA = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(148, 541);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(131, 48);
			this->btnGuardar->TabIndex = 6;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Actividades::btnGuardar_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(28, 16);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(367, 519);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->CBPersonasI);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->RTBMateriales);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->RTBDescripccion);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->TBPrioridad);
			this->tabPage1->Controls->Add(this->TBIDA);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->TBLugar);
			this->tabPage1->Controls->Add(this->TBHoF);
			this->tabPage1->Controls->Add(this->TBHoraI);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(359, 486);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Actividades";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Actividades::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->RTBDesR);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->TBPriodidadR);
			this->tabPage2->Controls->Add(this->TBIDR);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->TBHoraL);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(359, 486);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Recordatorios";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->RTBDesA);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->TBPrioridadA);
			this->tabPage3->Controls->Add(this->TBIdenA);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->TBHoraA);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(359, 486);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Alarma";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// TBIDA
			// 
			this->TBIDA->Location = System::Drawing::Point(117, 187);
			this->TBIDA->Multiline = true;
			this->TBIDA->Name = L"TBIDA";
			this->TBIDA->Size = System::Drawing::Size(144, 26);
			this->TBIDA->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(81, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 20);
			this->label9->TabIndex = 27;
			this->label9->Text = L"ID:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label8->Location = System::Drawing::Point(81, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"*Alta, Media, Baja*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Prioridad:";
			// 
			// TBLugar
			// 
			this->TBLugar->Location = System::Drawing::Point(116, 87);
			this->TBLugar->Multiline = true;
			this->TBLugar->Name = L"TBLugar";
			this->TBLugar->Size = System::Drawing::Size(144, 26);
			this->TBLugar->TabIndex = 23;
			// 
			// TBHoF
			// 
			this->TBHoF->Location = System::Drawing::Point(116, 55);
			this->TBHoF->Name = L"TBHoF";
			this->TBHoF->Size = System::Drawing::Size(144, 26);
			this->TBHoF->TabIndex = 22;
			// 
			// TBHoraI
			// 
			this->TBHoraI->Location = System::Drawing::Point(116, 20);
			this->TBHoraI->Name = L"TBHoraI";
			this->TBHoraI->Size = System::Drawing::Size(144, 26);
			this->TBHoraI->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 20);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Lugar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Hora Final:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Hora Inicio:";
			// 
			// TBPrioridad
			// 
			this->TBPrioridad->Location = System::Drawing::Point(116, 124);
			this->TBPrioridad->Multiline = true;
			this->TBPrioridad->Name = L"TBPrioridad";
			this->TBPrioridad->Size = System::Drawing::Size(144, 26);
			this->TBPrioridad->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 297);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 20);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Descripcción:";
			// 
			// RTBDescripccion
			// 
			this->RTBDescripccion->Location = System::Drawing::Point(165, 270);
			this->RTBDescripccion->Name = L"RTBDescripccion";
			this->RTBDescripccion->Size = System::Drawing::Size(145, 81);
			this->RTBDescripccion->TabIndex = 31;
			this->RTBDescripccion->Text = L"";
			// 
			// RTBMateriales
			// 
			this->RTBMateriales->Location = System::Drawing::Point(165, 365);
			this->RTBMateriales->Name = L"RTBMateriales";
			this->RTBMateriales->Size = System::Drawing::Size(145, 81);
			this->RTBMateriales->TabIndex = 33;
			this->RTBMateriales->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 394);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 20);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Materiales a Utilizar:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 20);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Personas Involucradas:";
			// 
			// CBPersonasI
			// 
			this->CBPersonasI->FormattingEnabled = true;
			this->CBPersonasI->Location = System::Drawing::Point(187, 225);
			this->CBPersonasI->Name = L"CBPersonasI";
			this->CBPersonasI->Size = System::Drawing::Size(150, 28);
			this->CBPersonasI->TabIndex = 35;
			// 
			// RTBDesR
			// 
			this->RTBDesR->Location = System::Drawing::Point(165, 264);
			this->RTBDesR->Name = L"RTBDesR";
			this->RTBDesR->Size = System::Drawing::Size(145, 81);
			this->RTBDesR->TabIndex = 48;
			this->RTBDesR->Text = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(41, 291);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 20);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Descripcción:";
			// 
			// TBPriodidadR
			// 
			this->TBPriodidadR->Location = System::Drawing::Point(124, 159);
			this->TBPriodidadR->Multiline = true;
			this->TBPriodidadR->Name = L"TBPriodidadR";
			this->TBPriodidadR->Size = System::Drawing::Size(144, 26);
			this->TBPriodidadR->TabIndex = 46;
			// 
			// TBIDR
			// 
			this->TBIDR->Location = System::Drawing::Point(125, 222);
			this->TBIDR->Multiline = true;
			this->TBIDR->Name = L"TBIDR";
			this->TBIDR->Size = System::Drawing::Size(144, 26);
			this->TBIDR->TabIndex = 45;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(89, 225);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 20);
			this->label13->TabIndex = 44;
			this->label13->Text = L"ID:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label14->Location = System::Drawing::Point(89, 188);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 17);
			this->label14->TabIndex = 43;
			this->label14->Text = L"*Alta, Media, Baja*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(43, 165);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 20);
			this->label15->TabIndex = 42;
			this->label15->Text = L"Prioridad:";
			// 
			// TBHoraL
			// 
			this->TBHoraL->Location = System::Drawing::Point(127, 120);
			this->TBHoraL->Name = L"TBHoraL";
			this->TBHoraL->Size = System::Drawing::Size(144, 26);
			this->TBHoraL->TabIndex = 39;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(70, 126);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 20);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Hora:";
			// 
			// RTBDesA
			// 
			this->RTBDesA->Location = System::Drawing::Point(169, 275);
			this->RTBDesA->Name = L"RTBDesA";
			this->RTBDesA->Size = System::Drawing::Size(145, 81);
			this->RTBDesA->TabIndex = 57;
			this->RTBDesA->Text = L"";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 20);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Descripcción:";
			// 
			// TBPrioridadA
			// 
			this->TBPrioridadA->Location = System::Drawing::Point(128, 170);
			this->TBPrioridadA->Multiline = true;
			this->TBPrioridadA->Name = L"TBPrioridadA";
			this->TBPrioridadA->Size = System::Drawing::Size(144, 26);
			this->TBPrioridadA->TabIndex = 55;
			// 
			// TBIdenA
			// 
			this->TBIdenA->Location = System::Drawing::Point(129, 233);
			this->TBIdenA->Multiline = true;
			this->TBIdenA->Name = L"TBIdenA";
			this->TBIdenA->Size = System::Drawing::Size(144, 26);
			this->TBIdenA->TabIndex = 54;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(93, 236);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 20);
			this->label11->TabIndex = 53;
			this->label11->Text = L"ID:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label16->Location = System::Drawing::Point(93, 199);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(124, 17);
			this->label16->TabIndex = 52;
			this->label16->Text = L"*Alta, Media, Baja*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(47, 176);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 20);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Prioridad:";
			// 
			// TBHoraA
			// 
			this->TBHoraA->Location = System::Drawing::Point(131, 131);
			this->TBHoraA->Name = L"TBHoraA";
			this->TBHoraA->Size = System::Drawing::Size(144, 26);
			this->TBHoraA->TabIndex = 50;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(74, 137);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 20);
			this->label19->TabIndex = 49;
			this->label19->Text = L"Hora:";
			// 
			// Actividades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 601);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnGuardar);
			this->Name = L"Actividades";
			this->Text = L"Actividades";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->Hide();
	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
