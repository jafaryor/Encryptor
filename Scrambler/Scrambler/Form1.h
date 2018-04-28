#pragma once

using namespace System::IO;

namespace Scrambler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
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
			//TODO: добавьте код конструктора
			if(File::Exists("output.txt")) File::Delete("output.txt");
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutScramblerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creatorToolStripMenuItem;
	private: System::Windows::Forms::Label^  label5;







	protected: 



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutScramblerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(688, 567);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Encrypt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(67, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(1006, 58);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 145);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(516, 414);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(8, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 23);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Key:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Message:";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(953, 565);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(534, 145);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(539, 414);
			this->textBox3->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(538, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Encrypted Message:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(827, 565);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 50);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Show the state of keys";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 596);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Creator:   Jafar Yormakhmadzoda";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkCyan;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->helpToolStripMenuItem, 
				this->aboutScramblerToolStripMenuItem, this->creatorToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1085, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutScramblerToolStripMenuItem
			// 
			this->aboutScramblerToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->aboutScramblerToolStripMenuItem->Name = L"aboutScramblerToolStripMenuItem";
			this->aboutScramblerToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->aboutScramblerToolStripMenuItem->Text = L"About Scrambler";
			this->aboutScramblerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutScramblerToolStripMenuItem_Click);
			// 
			// creatorToolStripMenuItem
			// 
			this->creatorToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->creatorToolStripMenuItem->Name = L"creatorToolStripMenuItem";
			this->creatorToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->creatorToolStripMenuItem->Text = L"Creator";
			this->creatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creatorToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Colonna MT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(449, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 35);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Scrambler";
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(1085, 622);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Scrambler";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 textBox1->Clear();
				 textBox2->Clear();
				 textBox3->Clear();
				 File::Delete("output.txt");
			 }
			 //unacceptable

			String^ Message,^ Key,^ EncryptedMessage,^ buf;
			StreamWriter^ out;

			Char Add(Char ch1, Char ch2)
			{
				if(ch1 == '0') return ch2;
				if(ch2 == '0') return ch1;
				return '0';
			}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 register Int32 i, j;
			 register Char sum_result;
			 Boolean IsZero(true);
			 
			 Key = textBox1->Text;
			 Message = textBox2->Text;
			 Key->Trim();
			 Message->Trim();
			 //Checking for accesbility...
			 if(Key->Length == 0 || Message->Length == 0) return;

			 for(i=0; i<Key->Length; i++)
			 {
				 if(Key[i] != '1' && Key[i] != '0')
				 {
					 MessageBox::Show("Unacceptable Key, try again");
					 return;
				 }
				 if(Key[i] == '1') IsZero = false;
			 }
			 if(IsZero)
			 {
				 MessageBox::Show("The Zero Key entered, try again");
				 return;
			 }

			 for(i=0; i<Message->Length; i++)
			 {
				 if(Message[i] != '1' && Message[i] != '0')
				 {
					 MessageBox::Show("Unacceptable Message, try again");
					 return;
				 }
			 }
			 //Starting the encrypting process...
			 array<Int32>^ operands = gcnew array<Int32>(0);
			 for(i=0; i<Key->Length; i++)
			 {
				 if(Key[i]=='1')
				 {
					 Array::Resize(operands, operands->Length+1);
					 operands[operands->Length-1] = i;
				 }
			 }
			 out = File::CreateText("output.txt");
			 EncryptedMessage = gcnew String("");
			 for(i=0; i<Message->Length; i++)
			 {
				 out->WriteLine(Key);
				 EncryptedMessage += Add(Message[i], Key[Key->Length-1]);

				 sum_result = Key[operands[operands->Length-1]];
				 for(j=operands->Length-2; j>=0; j--) sum_result = Add(sum_result, Key[operands[j]]);

				 buf = Convert::ToString(sum_result);
				 for(j=0; j<Key->Length-1; j++) buf += Key[j];
				 Key = buf;
			 }
			 out->Close();
			 textBox3->Text = EncryptedMessage;
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				 System::Diagnostics::Process::Start("output.txt");
			 }
			 catch(Exception^)
			 {
				 MessageBox::Show("\a The file is empty !!!");
			 }
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		 {
			 if(File::Exists("output.txt")) File::Delete("output.txt");
			 if(File::Exists("SHelp.txt")) File::Delete("SHelp.txt");
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("output.txt")) File::Delete("output.txt");
			 if(File::Exists("SHelp.txt")) File::Delete("SHelp.txt");
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("SHelp.txt")) File::Delete("SHelp.txt");
			 StreamWriter^ out = File::CreateText("SHelp.txt");
			 out->WriteLine("Данная программа создаёт этот текстовый файл SHelp.txt");
			 out->WriteLine("и output.txt. Программа удаляет их при закрытии.");
			 out->WriteLine("Рекомендуется поместить прогамму в отдельную папку ");
			 out->WriteLine("с файлом справки Scrambler.docx. Удачи!");
			 out->Close();
			 System::Diagnostics::Process::Start("SHelp.txt");
		 }
private: System::Void creatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 MessageBox::Show("Creator: Jafar Yormakhmadzoda");
		 }
private: System::Void aboutScramblerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			if(File::Exists("Scrambler.docx")) System::Diagnostics::Process::Start("Scrambler.docx");
			else MessageBox::Show("File Scrambler.docx has not been found !!!");
		 }
};
}

