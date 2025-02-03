#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ FirstName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LastName;
	private: System::Windows::Forms::Label^ Welcome;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Button^ OkButton;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::TextBox());
			this->Welcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// FirstName
			// 
			this->FirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FirstName->BackColor = System::Drawing::SystemColors::InfoText;
			this->FirstName->ForeColor = System::Drawing::SystemColors::Info;
			this->FirstName->Location = System::Drawing::Point(13, 40);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(347, 20);
			this->FirstName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name";
			// 
			// LastName
			// 
			this->LastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LastName->BackColor = System::Drawing::SystemColors::MenuText;
			this->LastName->ForeColor = System::Drawing::SystemColors::Info;
			this->LastName->Location = System::Drawing::Point(13, 108);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(347, 20);
			this->LastName->TabIndex = 3;
			// 
			// Welcome
			// 
			this->Welcome->AutoSize = true;
			this->Welcome->Location = System::Drawing::Point(129, 150);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Size = System::Drawing::Size(0, 13);
			this->Welcome->TabIndex = 4;
			this->Welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Welcome->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->ClearButton, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->OkButton, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(40, 295);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(288, 48);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->ClearButton->Location = System::Drawing::Point(147, 3);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(138, 42);
			this->ClearButton->TabIndex = 1;
			this->ClearButton->Text = L"CLEAR";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MainForm::ClearButton_Click);
			// 
			// OkButton
			// 
			this->OkButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OkButton->Location = System::Drawing::Point(3, 3);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(138, 42);
			this->OkButton->TabIndex = 0;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &MainForm::OkButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(372, 369);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Welcome);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(700, 700);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"MainForm";
			this->Text = L"Personal Data Form";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ lastName = this->LastName->Text;
	this->Welcome->Text = "Helloooooo " + this->FirstName->Text + " " + lastName;
}
private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->LastName->Text = "";
	this->FirstName->Text = "";
	this->Welcome->Text = "";

}
};
}
