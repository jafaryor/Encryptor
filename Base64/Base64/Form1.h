#pragma once

namespace Base64 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Text;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			base64Table = gcnew array<Char>{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutBase64ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creatorToolStripMenuItem;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutBase64ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->Location = System::Drawing::Point(6, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(858, 160);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input Text:";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(6, 46);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->richTextBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox2);
			this->splitContainer1->Size = System::Drawing::Size(871, 415);
			this->splitContainer1->SplitterDistance = 192;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(3, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Output Text:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->AcceptsTab = true;
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->AutoWordSelection = true;
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox2->Location = System::Drawing::Point(6, 27);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(858, 183);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(535, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"EnCode";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(651, 467);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"DeCode";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(8, 480);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Creator:  Jafar Yormakhmadzoda";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Colonna MT", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(383, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 51);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Base 64";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->helpToolStripMenuItem, 
				this->aboutBase64ToolStripMenuItem, this->creatorToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(882, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutBase64ToolStripMenuItem
			// 
			this->aboutBase64ToolStripMenuItem->Name = L"aboutBase64ToolStripMenuItem";
			this->aboutBase64ToolStripMenuItem->Size = System::Drawing::Size(113, 24);
			this->aboutBase64ToolStripMenuItem->Text = L"About Base64";
			this->aboutBase64ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutBase64ToolStripMenuItem_Click);
			// 
			// creatorToolStripMenuItem
			// 
			this->creatorToolStripMenuItem->Name = L"creatorToolStripMenuItem";
			this->creatorToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->creatorToolStripMenuItem->Text = L"Creator";
			this->creatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creatorToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(767, 467);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(882, 505);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base 64";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->Clear();
				 richTextBox2->Clear();
			 }

			 String^ DectoBin(Int32 a)
			 {
				 if(a<1) return "";
				 Int32 b(a%2);
				 a=a/2;
				 return gcnew String(DectoBin(a) + b);
			 }

			 Int16 BintoDec(String^ str)
			 {
				 Int16 k(0);
				 for(Int16 i=str->Length-1; i>=0; i--) k += (str[i] == '1' ? Math::Pow(2,str->Length-1-i) : 0);
				 return k;
			 }

	array<Char>^ base64Table;

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			String^ in = gcnew String(richTextBox1->Text);
			String^ out, ^ temp, ^ buf;
			Char zero('0');
			Int32 i(0), j, k, l;

			richTextBox2->Clear();
			while(i < in->Length)
			{
				j=0;
				temp = "";
				while(j++ < 3 && i < in->Length)
				{
					buf = DectoBin(Convert::ToInt32(in[i]));
					for(k=0; k < 8-buf->Length; k++) temp += "0";
					for(k=0; k < buf->Length; k++) temp += buf[k];
					i++;
				}

				for(k=0; k<j; k++)
				{
					buf = "";
					for(l=0; l<6; l++) buf += (l+k*6 < temp->Length ? temp[l+k*6] : zero);
					out += base64Table[BintoDec(buf)];
				}
				if(j==3) out += "=";
				else if(j==2) out += "==";
			}
			
			richTextBox2->Text = out;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 String^ in = gcnew String(richTextBox1->Text);
			 String^ out, ^ temp, ^ buf;
			 Char zero('0');
			 Int32 i(0), j, k, l;

			 richTextBox2->Clear();
			 while(i < in->Length && in[i] != '=')
			 {
				 j=0;
				 temp = "";
				 while(j++ < 4 && i < in->Length && in[i] != '=')
				 {
					 l = Array::IndexOf(base64Table, in[i]);
					 if(l<0)
					 {
						 //MessageBox::Show("[" + in[i] + "]");
						 MessageBox::Show("It is not BASE64 code!!!");
						 return;
					 }
					 buf = DectoBin(l);
					 for(k=0; k < 6-buf->Length; k++) temp += "0";
					 for(k=0; k < buf->Length; k++) temp += buf[k];
					 i++;
				 }
				 
				 for(k=0; k<j-2; k++)
				 {
					 buf = "";
					 for(l=0; l<8; l++) buf += (l+k*8 < temp->Length ? temp[l+k*8] : zero);
					 out += Convert::ToChar(Convert::ToByte(BintoDec(buf)));
				 }
			 }
			 
			 richTextBox2->Text = out;
		 }
private: System::Void creatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 MessageBox::Show("Creator: Jafar Yormakhmadzoda");
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("64Help.txt")) File::Delete("64Help.txt");
			 StreamWriter^ out = File::CreateText("64Help.txt");
			 out->WriteLine("В процессе работы программы создаётся текстовый файл");
			 out->WriteLine("64Help.txt в которой распологается справочная");
			 out->WriteLine("информация и удаляется при закрытии программы.");
			 out->WriteLine("Поэтому рекомендуется поместить программу в");
			 out->WriteLine("отдельную пустую папку со справочным материалом");
			 out->WriteLine("Base64.docx перед запуском.");
			 out->Close();
			 System::Diagnostics::Process::Start("64Help.txt");
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		 {
			 if(File::Exists("64Help.txt")) File::Delete("64Help.txt");
		 }
private: System::Void aboutBase64ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			if(File::Exists("Base64.docx")) System::Diagnostics::Process::Start("Base64.docx");
			else MessageBox::Show("File Base64.docx does not exists");
		 }
};
}

