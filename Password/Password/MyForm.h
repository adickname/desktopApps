#pragma once

namespace Password {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::GroupBox^ groupBoxPassword;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBoxPersonalData;
	private: System::Windows::Forms::Label^ labelJob;
	private: System::Windows::Forms::Label^ labelSurname;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::ComboBox^ comboBoxJob;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ buttonPassword;
	private: System::Windows::Forms::CheckBox^ checkBoxSpecial;
	private: System::Windows::Forms::CheckBox^ checkBoxDigit;
	private: System::Windows::Forms::CheckBox^ checkBoxCharacters;
	private: System::Windows::Forms::TextBox^ textBoxCharacters;
	private: System::Windows::Forms::Label^ labelCharacters;
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::Button^ buttonConfirm;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxPassword = (gcnew System::Windows::Forms::GroupBox());
			this->buttonPassword = (gcnew System::Windows::Forms::Button());
			this->checkBoxSpecial = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDigit = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCharacters = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxCharacters = (gcnew System::Windows::Forms::TextBox());
			this->labelCharacters = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersonalData = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxJob = (gcnew System::Windows::Forms::ComboBox());
			this->labelJob = (gcnew System::Windows::Forms::Label());
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->groupBoxPassword->SuspendLayout();
			this->groupBoxPersonalData->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxPassword
			// 
			this->groupBoxPassword->Controls->Add(this->buttonPassword);
			this->groupBoxPassword->Controls->Add(this->checkBoxSpecial);
			this->groupBoxPassword->Controls->Add(this->checkBoxDigit);
			this->groupBoxPassword->Controls->Add(this->checkBoxCharacters);
			this->groupBoxPassword->Controls->Add(this->textBoxCharacters);
			this->groupBoxPassword->Controls->Add(this->labelCharacters);
			this->groupBoxPassword->Location = System::Drawing::Point(571, 97);
			this->groupBoxPassword->Name = L"groupBoxPassword";
			this->groupBoxPassword->Size = System::Drawing::Size(390, 369);
			this->groupBoxPassword->TabIndex = 1;
			this->groupBoxPassword->TabStop = false;
			this->groupBoxPassword->Text = L"Generowanie has³a";
			// 
			// buttonPassword
			// 
			this->buttonPassword->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonPassword->ForeColor = System::Drawing::SystemColors::Window;
			this->buttonPassword->Location = System::Drawing::Point(111, 312);
			this->buttonPassword->Name = L"buttonPassword";
			this->buttonPassword->Size = System::Drawing::Size(145, 29);
			this->buttonPassword->TabIndex = 5;
			this->buttonPassword->Text = L"Generuj has³o";
			this->buttonPassword->UseVisualStyleBackColor = false;
			this->buttonPassword->Click += gcnew System::EventHandler(this, &MyForm::buttonPassword_Click);
			// 
			// checkBoxSpecial
			// 
			this->checkBoxSpecial->AutoSize = true;
			this->checkBoxSpecial->Location = System::Drawing::Point(59, 249);
			this->checkBoxSpecial->Name = L"checkBoxSpecial";
			this->checkBoxSpecial->Size = System::Drawing::Size(145, 24);
			this->checkBoxSpecial->TabIndex = 4;
			this->checkBoxSpecial->Text = L"Znaki specjalne";
			this->checkBoxSpecial->UseVisualStyleBackColor = true;
			// 
			// checkBoxDigit
			// 
			this->checkBoxDigit->AutoSize = true;
			this->checkBoxDigit->Location = System::Drawing::Point(59, 196);
			this->checkBoxDigit->Name = L"checkBoxDigit";
			this->checkBoxDigit->Size = System::Drawing::Size(70, 24);
			this->checkBoxDigit->TabIndex = 3;
			this->checkBoxDigit->Text = L"Cyfry";
			this->checkBoxDigit->UseVisualStyleBackColor = true;
			// 
			// checkBoxCharacters
			// 
			this->checkBoxCharacters->AutoSize = true;
			this->checkBoxCharacters->Location = System::Drawing::Point(59, 142);
			this->checkBoxCharacters->Name = L"checkBoxCharacters";
			this->checkBoxCharacters->Size = System::Drawing::Size(163, 24);
			this->checkBoxCharacters->TabIndex = 2;
			this->checkBoxCharacters->Text = L"Ma³e i wielkie litery";
			this->checkBoxCharacters->UseVisualStyleBackColor = true;
			// 
			// textBoxCharacters
			// 
			this->textBoxCharacters->Location = System::Drawing::Point(223, 53);
			this->textBoxCharacters->Name = L"textBoxCharacters";
			this->textBoxCharacters->Size = System::Drawing::Size(151, 26);
			this->textBoxCharacters->TabIndex = 1;
			// 
			// labelCharacters
			// 
			this->labelCharacters->AutoSize = true;
			this->labelCharacters->Location = System::Drawing::Point(42, 51);
			this->labelCharacters->Name = L"labelCharacters";
			this->labelCharacters->Size = System::Drawing::Size(93, 20);
			this->labelCharacters->TabIndex = 0;
			this->labelCharacters->Text = L"Ile znaków\?";
			// 
			// groupBoxPersonalData
			// 
			this->groupBoxPersonalData->Controls->Add(this->textBoxSurname);
			this->groupBoxPersonalData->Controls->Add(this->textBoxName);
			this->groupBoxPersonalData->Controls->Add(this->comboBoxJob);
			this->groupBoxPersonalData->Controls->Add(this->labelJob);
			this->groupBoxPersonalData->Controls->Add(this->labelSurname);
			this->groupBoxPersonalData->Controls->Add(this->labelName);
			this->groupBoxPersonalData->Location = System::Drawing::Point(65, 97);
			this->groupBoxPersonalData->Name = L"groupBoxPersonalData";
			this->groupBoxPersonalData->Size = System::Drawing::Size(350, 369);
			this->groupBoxPersonalData->TabIndex = 0;
			this->groupBoxPersonalData->TabStop = false;
			this->groupBoxPersonalData->Text = L"Dane pracownika";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(139, 100);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(132, 26);
			this->textBoxSurname->TabIndex = 5;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(139, 57);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(132, 26);
			this->textBoxName->TabIndex = 4;
			// 
			// comboBoxJob
			// 
			this->comboBoxJob->FormattingEnabled = true;
			this->comboBoxJob->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Kierownik", L"Starszy Programista", L"M³odszy Programista",
					L"Tester"
			});
			this->comboBoxJob->Location = System::Drawing::Point(139, 157);
			this->comboBoxJob->Name = L"comboBoxJob";
			this->comboBoxJob->Size = System::Drawing::Size(132, 28);
			this->comboBoxJob->TabIndex = 3;
			// 
			// labelJob
			// 
			this->labelJob->AutoSize = true;
			this->labelJob->Location = System::Drawing::Point(18, 160);
			this->labelJob->Name = L"labelJob";
			this->labelJob->Size = System::Drawing::Size(91, 20);
			this->labelJob->TabIndex = 2;
			this->labelJob->Text = L"Stanowisko";
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->Location = System::Drawing::Point(23, 103);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(76, 20);
			this->labelSurname->TabIndex = 1;
			this->labelSurname->Text = L"Nazwisko";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(22, 52);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(39, 20);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Imiê";
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonConfirm->ForeColor = System::Drawing::SystemColors::Window;
			this->buttonConfirm->Location = System::Drawing::Point(279, 547);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(496, 56);
			this->buttonConfirm->TabIndex = 2;
			this->buttonConfirm->Text = L"ZatwierdŸ";
			this->buttonConfirm->UseVisualStyleBackColor = false;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonConfirm_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1149, 639);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->groupBoxPersonalData);
			this->Controls->Add(this->groupBoxPassword);
			this->Name = L"MyForm";
			this->Text = L"Dodaj pracownika";
			this->groupBoxPassword->ResumeLayout(false);
			this->groupBoxPassword->PerformLayout();
			this->groupBoxPersonalData->ResumeLayout(false);
			this->groupBoxPersonalData->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::String^ haslo;

	private: System::Void buttonPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		bool maleLitery = checkBoxCharacters->Checked;
		bool cyfry = checkBoxDigit->Checked;
		bool znakiSpecjalne = checkBoxSpecial->Checked;

		Random^ rand = gcnew Random();


		array<String^>^ maleLiteryTab = gcnew array<String^>{ "abcdefghijklmnopqrstuvwxyz" };
		array<String^>^ wielkieLiteryTab = gcnew array<String^>{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
		array<String^>^ cyfryTab = gcnew array<String^>{ "0123456789" };
		array<String^>^ znakiSpecjalneTab = gcnew array<String^>{ "!@#$%^&*()_+-=<>?/" };


		int ilosc = Int32::Parse(textBoxCharacters->Text);


		String^ dostepneZnaki = "";

		if (maleLitery)
			dostepneZnaki += maleLiteryTab[0];
		if (cyfry)
			dostepneZnaki += cyfryTab[0];
		if (znakiSpecjalne)
			dostepneZnaki += znakiSpecjalneTab[0];
		if (checkBoxCharacters->Checked)
			dostepneZnaki += wielkieLiteryTab[0];


		haslo = "";


		if (znakiSpecjalne) {

			int specjalnyIndex = rand->Next(znakiSpecjalneTab[0]->Length);
			haslo += znakiSpecjalneTab[0][specjalnyIndex];
			ilosc--;
		}

		if (cyfry) {

			int cyfryIndex = rand->Next(cyfryTab[0]->Length);
			haslo += cyfryTab[0][cyfryIndex];
			ilosc--;
		}


		for (int i = 0; i < ilosc; i++) {
			int index = rand->Next(dostepneZnaki->Length);
			haslo += dostepneZnaki[index];
		}


		MessageBox::Show(haslo);
	};


	private: System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ imie = textBoxName->Text;
		System::String^ nazwisko = textBoxSurname->Text;
		System::String^ stanowisko = comboBoxJob->Text;


		MessageBox::Show("Dane pracownika: " + imie + " " + nazwisko + " " + stanowisko + " " + haslo);
	}



	};
}
