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
	/// Summary for Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
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
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  TBNombreR;
	protected:
	private: System::Windows::Forms::TextBox^  TBContraseñaR;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnConfirmar;

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
			this->TBNombreR = (gcnew System::Windows::Forms::TextBox());
			this->TBContraseñaR = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TBNombreR
			// 
			this->TBNombreR->Location = System::Drawing::Point(139, 27);
			this->TBNombreR->Name = L"TBNombreR";
			this->TBNombreR->Size = System::Drawing::Size(171, 26);
			this->TBNombreR->TabIndex = 0;
			// 
			// TBContraseñaR
			// 
			this->TBContraseñaR->Location = System::Drawing::Point(139, 69);
			this->TBContraseñaR->Name = L"TBContraseñaR";
			this->TBContraseñaR->PasswordChar = '*';
			this->TBContraseñaR->Size = System::Drawing::Size(171, 26);
			this->TBContraseñaR->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña:";
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Location = System::Drawing::Point(105, 120);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(120, 40);
			this->btnConfirmar->TabIndex = 4;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &Registro::btnConfirmar_Click);
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 172);
			this->Controls->Add(this->btnConfirmar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBContraseñaR);
			this->Controls->Add(this->TBNombreR);
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: String^ global; 
	
private: System::Void btnConfirmar_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ user = TBNombreR->Text;
		String^ contra = TBContraseñaR->Text;
		String^ UsersIN = user + ".csv"; //Crea los archivos csv individuales con los nombres de los usuarios ingresados.	
		if (user != "" && contra != "")
		{
			if (Repetido(user)== false)
			{
				StreamReader^ sr = gcnew StreamReader("Users.csv");
				global = sr->ReadToEnd();
				sr->Close();
				global = global + user + "," + contra + "."; //la cosa es en donde 
				StreamWriter^ sw = gcnew StreamWriter("Users.csv");
				sw->Write(global);
				sw->Close();
				System::Windows::Forms::MessageBox::Show("Registrado :D");
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Usuario ya existente");
			}
		}
		else 
		{
			System::Windows::Forms::MessageBox::Show("Porfavor llenar todos los campos.");
		}

		this->Close();
	}
private: System::Boolean Repetido(String^ user)
{
	StreamReader^ sr2 = gcnew StreamReader("Users.csv");
	String^ cadena = sr2->ReadToEnd();
	int pos;
	
	String^ Ouser;
	String^ Ocontra;
	String^ aux;
	while (cadena != "")
	{
		pos = cadena->IndexOf(",");
		Ouser = cadena->Substring(0, pos);
		aux = cadena;
		cadena = aux->Substring(pos + 1);
		//Se saca la contraseña para no ocasionar problemas al extraer los usuarios y compararlos en tiempo real. 
		pos = cadena->IndexOf(".");
		Ocontra = cadena->Substring(0, pos);
		aux = cadena;
		cadena = aux->Substring(pos + 1);
		if (Ouser == user)
		{
			return true;
		}
	} 
	sr2->Close();
	return false;
}

};
}
