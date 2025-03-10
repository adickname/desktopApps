#pragma once

namespace Navbar2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Ustawienie niestandardowego renderera, dziêki któremu t³o bêdzie rysowane domyœlnie
		
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cofnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przywróæToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wytnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wklejToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cofnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przywróæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->toolStripMenuItem1, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1318, 113);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->AutoSize = false;
			this->plikToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->plikToolStripMenuItem->Margin = System::Windows::Forms::Padding(20);
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Padding = System::Windows::Forms::Padding(20);
			this->plikToolStripMenuItem->Size = System::Drawing::Size(100, 50);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->AutoSize = false;
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->cofnijToolStripMenuItem,
					this->przywróæToolStripMenuItem, this->wytnijToolStripMenuItem, this->kopiujToolStripMenuItem, this->wklejToolStripMenuItem
			});
			this->toolStripMenuItem1->Margin = System::Windows::Forms::Padding(20);
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(100, 50);
			this->toolStripMenuItem1->Text = L"Edytuj";

			// 
			// cofnijToolStripMenuItem
			// 
			this->cofnijToolStripMenuItem->Name = L"cofnijToolStripMenuItem";
			this->cofnijToolStripMenuItem->Size = System::Drawing::Size(185, 34);
			this->cofnijToolStripMenuItem->Text = L"Cofnij";
			// 
			// przywróæToolStripMenuItem
			// 
			this->przywróæToolStripMenuItem->Name = L"przywróæToolStripMenuItem";
			this->przywróæToolStripMenuItem->Size = System::Drawing::Size(185, 34);
			this->przywróæToolStripMenuItem->Text = L"Przywróæ";
			// 
			// wytnijToolStripMenuItem
			// 
			this->wytnijToolStripMenuItem->Name = L"wytnijToolStripMenuItem";
			this->wytnijToolStripMenuItem->Size = System::Drawing::Size(185, 34);
			this->wytnijToolStripMenuItem->Text = L"Wytnij";
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(185, 34);
			this->kopiujToolStripMenuItem->Text = L"Kopiuj";
			// 
			// wklejToolStripMenuItem
			// 
			this->wklejToolStripMenuItem->Name = L"wklejToolStripMenuItem";
			this->wklejToolStripMenuItem->Size = System::Drawing::Size(185, 34);
			this->wklejToolStripMenuItem->Text = L"Wklej";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->AutoSize = false;
			this->pomocToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->pomocToolStripMenuItem->Margin = System::Windows::Forms::Padding(20);
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(100, 50);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1318, 895);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
