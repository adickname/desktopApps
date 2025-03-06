#pragma once

namespace sprawdzian {

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
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timerTick);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(114, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Licze czas ile czssu trzymasz kursor na buttonie w sekundach";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Button";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::timerStart);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::timerStop);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 519);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}

#pragma endregion
		int seconds = 0;
	private: System::Void timerTick(System::Object^ sender, System::EventArgs^ e) {
		seconds++;
		label1->Text = "Licze czas ile czssu trzymasz kursor na buttonie w sekundach: \n" + seconds;
	}
	private: System::Void timerStart(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	private: System::Void timerStop(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();
	}
	};
}
