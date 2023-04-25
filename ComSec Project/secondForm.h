#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for secondForm
	/// </summary>
	public ref class secondForm : public System::Windows::Forms::Form
	{
	public:
		secondForm(void)
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
		~secondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Payment;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ CardNum;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Confirm;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label5;


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
			this->Payment = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->CardNum = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Confirm = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Payment
			// 
			this->Payment->AutoSize = true;
			this->Payment->Location = System::Drawing::Point(8, 18);
			this->Payment->Name = L"Payment";
			this->Payment->Size = System::Drawing::Size(137, 18);
			this->Payment->TabIndex = 0;
			this->Payment->Text = L"Method of Payment";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 136);
			this->textBox1->MaxLength = 16;
			this->textBox1->PasswordChar = '#';
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(409, 24);
			this->textBox1->TabIndex = 1;
			// 
			// CardNum
			// 
			this->CardNum->AutoSize = true;
			this->CardNum->Location = System::Drawing::Point(8, 115);
			this->CardNum->Name = L"CardNum";
			this->CardNum->Size = System::Drawing::Size(140, 18);
			this->CardNum->TabIndex = 2;
			this->CardNum->Text = L"Credit Card Number";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Visa", L"American Express", L"Discovery" });
			this->checkedListBox1->Location = System::Drawing::Point(11, 39);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(215, 61);
			this->checkedListBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"CVV";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 186);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '#';

			this->textBox2->Size = System::Drawing::Size(99, 24);
			this->textBox2->TabIndex= 5;			
			this->textBox2->PasswordChar = '#';
			
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Experation Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Zip Code";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(136, 184);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(281, 24);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 245);
			this->textBox3->MaxLength = 5;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 24);
			this->textBox3->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->Confirm);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Controls->Add(this->CardNum);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->Payment);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 146);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(442, 361);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// Confirm
			// 
			this->Confirm->Location = System::Drawing::Point(171, 300);
			this->Confirm->Name = L"Confirm";
			this->Confirm->Size = System::Drawing::Size(75, 23);
			this->Confirm->TabIndex = 10;
			this->Confirm->Text = L"Submit";
			this->Confirm->UseVisualStyleBackColor = true;
			this->Confirm->Click += gcnew System::EventHandler(this, &secondForm::Confirm_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(616, 134);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(129, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(387, 42);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Give Me Your Money";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(471, 162);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(156, 344);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Your Ad Here";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"It\'s Free Real Estate";
			// 
			// secondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 519);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MinimumSize = System::Drawing::Size(656, 558);
			this->Name = L"secondForm";
			this->Text = L"Very Legit";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//button event
	private: System::Void Confirm_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		acts a confirmation to check if user inputs are correct
		*/
		if (MessageBox::Show("Is the Credit Card Information you entered correct", "Is this right?", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes) {
			//this is just a joke
			MessageBox::Show("Thank you for your Purchase.", "Ha Got'em!", MessageBoxButtons::OK);
			Application::Exit();
		}
	}
	};
}
