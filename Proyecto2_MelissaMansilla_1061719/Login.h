#pragma once
#include "Calendario.h"
#include "Registro.h"

namespace Proyecto2MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  TBUser;
	protected:
	private: System::Windows::Forms::Label^  lblusuario;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TBContra;

	private: System::Windows::Forms::Button^  btnIngresar;
	private: System::Windows::Forms::Button^  btnRegistro;

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
			this->TBUser = (gcnew System::Windows::Forms::TextBox());
			this->lblusuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBContra = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TBUser
			// 
			this->TBUser->Location = System::Drawing::Point(136, 44);
			this->TBUser->Name = L"TBUser";
			this->TBUser->Size = System::Drawing::Size(192, 26);
			this->TBUser->TabIndex = 0;
			// 
			// lblusuario
			// 
			this->lblusuario->AutoSize = true;
			this->lblusuario->Location = System::Drawing::Point(62, 47);
			this->lblusuario->Name = L"lblusuario";
			this->lblusuario->Size = System::Drawing::Size(68, 20);
			this->lblusuario->TabIndex = 1;
			this->lblusuario->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Contraseña:";
			// 
			// TBContra
			// 
			this->TBContra->Location = System::Drawing::Point(136, 92);
			this->TBContra->Name = L"TBContra";
			this->TBContra->PasswordChar = '*';
			this->TBContra->Size = System::Drawing::Size(192, 26);
			this->TBContra->TabIndex = 2;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(112, 151);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(142, 33);
			this->btnIngresar->TabIndex = 4;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &Login::btnIngresar_Click);
			// 
			// btnRegistro
			// 
			this->btnRegistro->Location = System::Drawing::Point(112, 190);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(142, 33);
			this->btnRegistro->TabIndex = 5;
			this->btnRegistro->Text = L"Registrate";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &Login::btnRegistro_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 229);
			this->Controls->Add(this->btnRegistro);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBContra);
			this->Controls->Add(this->lblusuario);
			this->Controls->Add(this->TBUser);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void btnIngresar_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ user = TBUser->Text;
		String^ contra = TBContra->Text;

		if (user != "" && contra != "")
		{
			if (Existe(user) == true)
			{
				StreamReader^ sr2 = gcnew StreamReader("Users.csv");
				String^ cadena = sr2->ReadToEnd();
				int pos;
				String^ Ouser;
				String^ Ocontra;
				String^ aux;
				bool find = false;

				while ((cadena != "") && (find == false)) 
				{
					pos = cadena->IndexOf(",");
					Ouser = cadena->Substring(0, pos);
					aux = cadena;
					cadena = aux->Substring(pos + 1);

					pos = cadena->IndexOf(".");
					Ocontra = cadena->Substring(0, pos);
					aux = cadena;
					cadena = aux->Substring(pos + 1);

					if ((Ouser == user) && (Ocontra == contra))
					{
						find = true;
						Abrir();
						this->Hide();
					}
					else if ((Ouser != user) && (Ocontra == contra))
					{
						System::Windows::Forms::MessageBox::Show("Usuario inválido");
					}
					else if ((Ouser == user) && (Ocontra != contra))
					{
						System::Windows::Forms::MessageBox::Show("Contraseña inválida");
					}
				}
				sr2->Close();
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Usuario no Registrado");
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Porfavor llenar todos los campos.");
		}
	}
	private: System::Boolean Existe(String^ user)
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

	private: System::Void btnRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
		Registro^ Register = gcnew Registro();
		Register->Show();
	}
private: System::Void Abrir()
{
	Calendario^ Calendario1 = gcnew Calendario();
	Calendario1->Show();
}
};
}
