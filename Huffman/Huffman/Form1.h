#pragma once
#include "tree.h"
#include "Form2.h"

namespace Huffman {

	using namespace System;
	using namespace System::IO;
	//using namespace System::Threading::Tasks::Parallel;
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
		Form1(void): form2(gcnew Form2())
		{
			InitializeComponent();

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
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creatorToolStripMenuItem;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(964, 471);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(440, 471);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Compress";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(575, 471);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"DeCompress";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(4, 502);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Creator:  Jafar Yormakhmadzoda";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 36);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->richTextBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox2);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Size = System::Drawing::Size(1048, 427);
			this->splitContainer1->SplitterDistance = 157;
			this->splitContainer1->SplitterWidth = 20;
			this->splitContainer1->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 30);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1048, 123);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Text:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->AcceptsTab = true;
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->AutoWordSelection = true;
			this->richTextBox2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->richTextBox2->Location = System::Drawing::Point(0, 30);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(1048, 217);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Comressed Text:";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(846, 471);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Show Code";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(709, 471);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Show Statistic";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(463, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(378, 30);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Huffman\'s Compress Algorithm";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 471);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 21);
			this->label5->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Orange;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->helpToolStripMenuItem, 
				this->aboutToolStripMenuItem, this->creatorToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1048, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->aboutToolStripMenuItem->Text = L"About algorithm";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// creatorToolStripMenuItem
			// 
			this->creatorToolStripMenuItem->Name = L"creatorToolStripMenuItem";
			this->creatorToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->creatorToolStripMenuItem->Text = L"Creator";
			this->creatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creatorToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->button2;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->CancelButton = this->button1;
			this->ClientSize = System::Drawing::Size(1048, 527);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Huffman";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
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

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 richTextBox1->Clear();
			 richTextBox2->Clear();
			 form2->richTextBox1->Clear();
			 form2->richTextBox2->Clear();
			 label5->Text = "";
			 if(File::Exists("HCode.txt")) File::Delete("HCode.txt");
			 if(File::Exists("HStatistic.txt")) File::Delete("HStatistic.txt");
		 }
		 Form2^ form2;
		 Tree^ tree;

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			if(String::IsNullOrEmpty(richTextBox1->Text->Trim())) return;
			StreamWriter^ out;
			Int32 i, j, k(0);		//k -- количество символов \n, \t, ' ', \v
			array<Char>^ sym;
			String^ sym_str = gcnew String("");
			array<Int64>^ freq = gcnew array<Int64>(0);
			String^ str = gcnew String(richTextBox1->Text);

			for(i=0; i<str->Length; i++)
			{
				if(str[i] == '\n') {k++; continue;}
				j = sym_str->IndexOf(str[i]);
				if(j >= 0) freq[j] = freq[j] + 1;
				else
				{
					sym_str += str[i];
					Array::Resize(freq, freq->Length+1);
					freq[freq->Length-1] = 1;
				}
			}
			sym = sym_str->ToCharArray();
		//Write statistic to text file HStatistic.txt
			out = File::CreateText("HStatistic.txt");
			for(i=0; i<sym->Length; i++) out->WriteLine("[" + sym[i] + "] - " + Convert::ToString(freq[i]));
			out->Close();
		//Create tree
			tree = gcnew Tree(sym, freq);
			//	richTextBox2->Text = tree->ToString();
		//Set weight of ribs
			tree->Encode(tree->Root);
		//Write code of symbols in text file HCode.txt
			out = File::CreateText("HCode.txt");
			for(i=0; i<sym->Length; i++) out->WriteLine("[" + sym[i] + "] = " + tree->FindCode(sym[i]));
			out->Close();
		//Using parallel programing comress the initial message
			richTextBox2->Clear();
			for(i=0; i<str->Length; i++)
			{
				if(str[i] == '\n') richTextBox2->Text += str[i];
				else richTextBox2->Text += tree->FindCode(str[i]);
			}
		//Copy Compressed text to second form
			form2->richTextBox1->Text = richTextBox2->Text;
		//Show gained memory
			label5->Text = ("Gained Memory: " + (str->Length*8 - k*8 - richTextBox2->Text->Length - k) + " bits");
			button3->Enabled = true;
		}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			form2->DeCompress(tree);
			form2->Show();
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("HStatistic.txt")) System::Diagnostics::Process::Start("HStatistic.txt");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("HCode.txt")) System::Diagnostics::Process::Start("HCode.txt");
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("HHelp.txt")) File::Delete("HHelp.txt");
			 StreamWriter^ out = File::CreateText("HHelp.txt");
			 out->WriteLine("Данная программа создаёт два текстовых файла");
			 out->WriteLine("во время работы: HCode.txt и HStatic.txt и");
			 out->WriteLine(" удаляет их при окончании работы. Поэтому лучше");
			 out->WriteLine("запускать программу располагая предваритель");
			 out->WriteLine("расположив в пустую папку и не забудьте про");
			 out->WriteLine("файл справки Huffman's Algorithm.docx");
			 out->Close();
			 System::Diagnostics::Process::Start("HHelp.txt");
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			if(File::Exists("Huffman's Algorithm.docx")) System::Diagnostics::Process::Start("Huffman's Algorithm.docx");
			else MessageBox::Show("The file in not found");
		 }
private: System::Void creatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 MessageBox::Show("Creator: Jafar Yormakhmadzoda");
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		 {
			 if(File::Exists("HCode.txt")) File::Delete("HCode.txt");
			 if(File::Exists("HStatistic.txt")) File::Delete("HStatistic.txt");
			 if(File::Exists("HHelp.txt")) File::Delete("HHelp.txt");
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("HCode.txt")) File::Delete("HCode.txt");
			 if(File::Exists("HStatistic.txt")) File::Delete("HStatistic.txt");
			 if(File::Exists("HHelp.txt")) File::Delete("HHelp.txt");
		 }
};
}

