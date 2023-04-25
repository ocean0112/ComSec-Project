#pragma once
#include "secondForm.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components; private: System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ event1;
		System::Windows::Forms::Label^ event3;
		System::Windows::Forms::Label^ event2;
		System::Windows::Forms::GroupBox^ EventList;
		System::Windows::Forms::GroupBox^ Box2;
		System::Windows::Forms::GroupBox^ Box1;
		System::Windows::Forms::GroupBox^ Box3;
		System::Windows::Forms::GroupBox^ Box5;
		System::Windows::Forms::GroupBox^ Box4;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::GroupBox^ Ad_space;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::ToolStripMenuItem^ hOMEToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ sPORTSToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ cONCERTSToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ oTHEREVENTSToolStripMenuItem;
		System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 484);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->event1 = (gcnew System::Windows::Forms::Label());
			this->event2 = (gcnew System::Windows::Forms::Label());
			this->event3 = (gcnew System::Windows::Forms::Label());
			this->EventList = (gcnew System::Windows::Forms::GroupBox());
			this->Box5 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Box4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Box3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Box1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Box2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Ad_space = (gcnew System::Windows::Forms::GroupBox());
			this->hOMEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sPORTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cONCERTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oTHEREVENTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->EventList->SuspendLayout();
			this->Box5->SuspendLayout();
			this->Box4->SuspendLayout();
			this->Box3->SuspendLayout();
			this->Box1->SuspendLayout();
			this->Box2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(855, 105);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(660, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FIGHTS. SPORTS. CHEERS.";
			// 
			// event1
			// 
			this->event1->AutoSize = true;
			this->event1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->event1->Location = System::Drawing::Point(6, 16);
			this->event1->Name = L"event1";
			this->event1->Size = System::Drawing::Size(552, 32);
			this->event1->TabIndex = 2;
			this->event1->Text = L"Cool Bar Presents:  Business Casual Brawls";
			// 
			// event2
			// 
			this->event2->AutoSize = true;
			this->event2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F));
			this->event2->Location = System::Drawing::Point(6, 16);
			this->event2->Name = L"event2";
			this->event2->Size = System::Drawing::Size(387, 64);
			this->event2->TabIndex = 6;
			this->event2->Text = L"Fight club! \r\nHosted by \"Lady with Glasses\"\r\n";
			// 
			// event3
			// 
			this->event3->AutoSize = true;
			this->event3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F));
			this->event3->Location = System::Drawing::Point(6, 16);
			this->event3->Name = L"event3";
			this->event3->Size = System::Drawing::Size(463, 64);
			this->event3->TabIndex = 7;
			this->event3->Text = L"Rage in the Cage:\r\nThe Voices in my Head vs Some Pills\r\n";
			// 
			// EventList
			// 
			this->EventList->BackColor = System::Drawing::Color::White;
			this->EventList->Controls->Add(this->Box5);
			this->EventList->Controls->Add(this->Box4);
			this->EventList->Controls->Add(this->Box3);
			this->EventList->Controls->Add(this->Box1);
			this->EventList->Controls->Add(this->Box2);
			this->EventList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EventList->Location = System::Drawing::Point(12, 112);
			this->EventList->Name = L"EventList";
			this->EventList->Size = System::Drawing::Size(703, 604);
			this->EventList->TabIndex = 10;
			this->EventList->TabStop = false;
			this->EventList->Text = L"Upcoming Events!";
			// 
			// Box5
			// 
			this->Box5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Box5->Controls->Add(this->label3);
			this->Box5->Controls->Add(this->button5);
			this->Box5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box5->Location = System::Drawing::Point(6, 463);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(691, 100);
			this->Box5->TabIndex = 14;
			this->Box5->TabStop = false;
			this->Box5->Text = L"Dec. 7";
			this->Box5->MouseHover += gcnew System::EventHandler(this, &Form1::box5_mouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F));
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(557, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Calculus 3 Homework vs My Desire to Game";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(601, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Buy Now";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Box4
			// 
			this->Box4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Box4->Controls->Add(this->button4);
			this->Box4->Controls->Add(this->label2);
			this->Box4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box4->Location = System::Drawing::Point(6, 357);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(691, 100);
			this->Box4->TabIndex = 13;
			this->Box4->TabStop = false;
			this->Box4->Text = L"Dec. 4";
			this->Box4->MouseHover += gcnew System::EventHandler(this, &Form1::box4_mouseHover);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(601, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Buy Now";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F));
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(490, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Austin \"Wildcats\" vs. Detroit \"Wildcats\"";
			// 
			// Box3
			// 
			this->Box3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Box3->Controls->Add(this->button3);
			this->Box3->Controls->Add(this->event3);
			this->Box3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box3->Location = System::Drawing::Point(6, 231);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(691, 120);
			this->Box3->TabIndex = 11;
			this->Box3->TabStop = false;
			this->Box3->Text = L"Dec. 2";
			this->Box3->MouseHover += gcnew System::EventHandler(this, &Form1::box3_mouseHover);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(601, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Buy Now";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Box1
			// 
			this->Box1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Box1->Controls->Add(this->button1);
			this->Box1->Controls->Add(this->event1);
			this->Box1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box1->Location = System::Drawing::Point(6, 19);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(691, 100);
			this->Box1->TabIndex = 11;
			this->Box1->TabStop = false;
			this->Box1->Text = L"Nov. 30";
			this->Box1->MouseHover += gcnew System::EventHandler(this, &Form1::box1_mouseHover);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(601, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buy Now";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Box2
			// 
			this->Box2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Box2->Controls->Add(this->button2);
			this->Box2->Controls->Add(this->event2);
			this->Box2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box2->Location = System::Drawing::Point(6, 125);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(691, 100);
			this->Box2->TabIndex = 12;
			this->Box2->TabStop = false;
			this->Box2->Text = L"Dec. 2";
			this->Box2->MouseHover += gcnew System::EventHandler(this, &Form1::box2_mouseHover);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(601, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Buy Now";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Ad_space
			// 
			this->Ad_space->BackColor = System::Drawing::Color::Gray;
			this->Ad_space->Location = System::Drawing::Point(721, 237);
			this->Ad_space->Name = L"Ad_space";
			this->Ad_space->Size = System::Drawing::Size(123, 305);
			this->Ad_space->TabIndex = 11;
			this->Ad_space->TabStop = false;
			this->Ad_space->Text = L"Your Ad Here!";
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(856, 728);
			this->Controls->Add(this->Ad_space);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->EventList);
			this->MinimumSize = System::Drawing::Size(872, 520);
			this->Name = L"MyForm";
			this->Text = L"Totally Legit Ticket Purchasing Site";
			this->Load += gcnew System::EventHandler(this, &Form1::Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->EventList->ResumeLayout(false);
			this->Box5->ResumeLayout(false);
			this->Box5->PerformLayout();
			this->Box4->ResumeLayout(false);
			this->Box4->PerformLayout();
			this->Box3->ResumeLayout(false);
			this->Box3->PerformLayout();
			this->Box1->ResumeLayout(false);
			this->Box1->PerformLayout();
			this->Box2->ResumeLayout(false);
			this->Box2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) {
		}
			   //
			   //button events
			   //
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to buy a ticket?\nFor the formal, yet also casual price of $99.99!", "Buy Ticket", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				secondForm^ form = gcnew secondForm;
				form->ShowDialog();
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to buy a ticket?\nFor the small price of $99.99!\n\n\"Warning: we ask that anyone with glasses to switch to contact lens.\nLady with Glasses will not reimburse you\"", "Buy Ticket", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes) {
				secondForm^ form = gcnew secondForm;
				form->ShowDialog();
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to buy a ticket?\nFor the small price of $99.99!\n\nEvery penny help me regain my sanity.", "Buy Ticket", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes) {
				secondForm^ form = gcnew secondForm;
				form->ShowDialog();
			}
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to buy a ticket?\nFor the small price of $99.99!\n\nGo Wildcats!", "Buy Ticket", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				secondForm^ form = gcnew secondForm;
				form->ShowDialog();
			}
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to buy a ticket?\nFor the small price of $99.99!\n\n\"Warning this money will be used on Genshin Impact Lootboxes.\"", "Buy Ticket", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				secondForm^ form = gcnew secondForm;
				form->ShowDialog();
			}
		}
		/*
		* just mouse hover events each box
		*/
		private: void box1_mouseHover(Object^ sender, System::EventArgs^ e) {
			this->Box1->BackColor = Color::NavajoWhite;
		}
		private: void box2_mouseHover(Object^ sender, System::EventArgs^ e) {
			this->Box2->BackColor = Color::NavajoWhite;
		}
		private: void box3_mouseHover(Object^ sender, System::EventArgs^ e) {
			this->Box3->BackColor = Color::NavajoWhite;
		}
		private: void box4_mouseHover(Object^ sender, System::EventArgs^ e) {
			this->Box4->BackColor = Color::NavajoWhite;
		}
		private: void box5_mouseHover(Object^ sender, System::EventArgs^ e) {
			this->Box5->BackColor = Color::NavajoWhite;
		}
	};
}
