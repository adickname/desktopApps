#pragma once

namespace Albumy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"obraz3.png";
			this->pictureBox1->Location = System::Drawing::Point(42, 102);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 108);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"obraz2.png";
			this->pictureBox2->Location = System::Drawing::Point(1108, 102);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 108);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"obraz.png";
			this->pictureBox3->Location = System::Drawing::Point(260, 18);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(303, 320);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(585, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 64);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(588, 189);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 40);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label3->Location = System::Drawing::Point(602, 286);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label4->Location = System::Drawing::Point(776, 286);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label5->Location = System::Drawing::Point(302, 402);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(456, 368);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 68);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Pobierz";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(1602, 605);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MojeDŸwiêki, Wykona³ : 00000000000";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int numberAlbum;
		List<Int32>^ pobraneTablica = gcnew List<Int32>;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ sr = gcnew StreamReader("Data.txt");
		String^ artysta= sr->ReadLine();
		String^ album = sr->ReadLine();
		int liczbaPiosenek = Int32::Parse(sr->ReadLine());
		int rok = Int32::Parse(sr->ReadLine());
		int pobrane = Int32::Parse(sr->ReadLine());
		sr->Close();
		label1->Text = artysta;
		label2->Text = album;
		label3->Text = liczbaPiosenek.ToString()+" utworów";
		label4->Text = rok.ToString();
		label5->Text = pobrane.ToString();
		numberAlbum=1;

		sr = gcnew StreamReader("Data.txt");
		int i = 0;
		Int32 indexPobrane = 0;
		while (!sr->EndOfStream)
		{
			i++;
			if (i % 5 == 0) {
				pobraneTablica->Add(Convert::ToInt32(sr->ReadLine()));
			}
			else {
				sr->ReadLine();
			}
			if (i == 6) {
				i = 0;
			}
			
		}

	}
		 


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ sr = gcnew StreamReader("Data.txt");
	int lineNumber = 0;
	while (!sr->EndOfStream)
	{
		String^ line = sr->ReadLine();
		lineNumber++;
	}
	sr->Close();
	sr = gcnew StreamReader("Data.txt");
	if (numberAlbum == 1) {
		for (int i =0; i < lineNumber-5; i++) {
			sr->ReadLine();
		}
		String^ artysta = sr->ReadLine();
		String^ album = sr->ReadLine();
		int liczbaPiosenek = Int32::Parse(sr->ReadLine());
		int rok = Int32::Parse(sr->ReadLine());
		int pobrane = Int32::Parse(sr->ReadLine());
		sr->Close();
		label1->Text = artysta;
		label2->Text = album;
		label3->Text = liczbaPiosenek.ToString() + " utworów";
		label4->Text = rok.ToString();
		label5->Text = pobrane.ToString();
		numberAlbum = lineNumber / 6;
	}
	else {
		numberAlbum--;
		sr = gcnew StreamReader("Data.txt");
		for (int i = 0; i <  (numberAlbum * 6); i++) {
			sr->ReadLine();
		}
		String^ artysta = sr->ReadLine();
		String^ album = sr->ReadLine();
		int liczbaPiosenek = Int32::Parse(sr->ReadLine());
		int rok = Int32::Parse(sr->ReadLine());
		int pobrane = Int32::Parse(sr->ReadLine());
		sr->Close();
		label1->Text = artysta;
		label2->Text = album;
		label3->Text = liczbaPiosenek.ToString() + " utworów";
		label4->Text = rok.ToString();
		label5->Text = pobrane.ToString();
		
	}

	
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	int lineNumber = 0;
	StreamReader^ sr = gcnew StreamReader("Data.txt");
	while (!sr->EndOfStream)
	{
		String^ line = sr->ReadLine();
		lineNumber++;
	}
	sr->Close();
	sr = gcnew StreamReader("Data.txt");
	if (numberAlbum == lineNumber / 6) {
		numberAlbum = 1;
		String^ artysta = sr->ReadLine();
		String^ album = sr->ReadLine();
		int liczbaPiosenek = Int32::Parse(sr->ReadLine());
		int rok = Int32::Parse(sr->ReadLine());
		int pobrane = Int32::Parse(sr->ReadLine());
		sr->Close();
		label1->Text = artysta;
		label2->Text = album;
		label3->Text = liczbaPiosenek.ToString() + " utworów";
		label4->Text = rok.ToString();
		label5->Text = pobrane.ToString();
	}
	else {
		numberAlbum++;
		sr = gcnew StreamReader("Data.txt");
		for (int i = 0; i < (numberAlbum * 6); i++) {
			sr->ReadLine();
		}
		String^ artysta = sr->ReadLine();
		String^ album = sr->ReadLine();
		int liczbaPiosenek = Int32::Parse(sr->ReadLine());
		int rok = Int32::Parse(sr->ReadLine());
		int pobrane = Int32::Parse(sr->ReadLine());
		sr->Close();
		label1->Text = artysta;
		label2->Text = album;
		label3->Text = liczbaPiosenek.ToString() + " utworów";
		label4->Text = rok.ToString();
		label5->Text = pobrane.ToString();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numberAlbum == 1) {
		pobraneTablica[numberAlbum-1] = pobraneTablica[numberAlbum-1] + 1;
		this->label5->Text = pobraneTablica[numberAlbum-1].ToString();
	}
	else {
		pobraneTablica[numberAlbum] = pobraneTablica[numberAlbum] + 1;
		this->label5->Text = pobraneTablica[numberAlbum].ToString();
	}

}
};
}
