#pragma once

namespace LenthelZiff {

	using namespace System;
	using namespace System::IO;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutAlgorithmToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creatorToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutAlgorithmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->AllowDrop = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 26);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(852, 195);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			this->textBox2->AllowDrop = true;
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 26);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(852, 204);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(477, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Comress";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(758, 524);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Text:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Compressed Text:";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 539);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Creator:  Jafar Yormakhmadzoda";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->BackColor = System::Drawing::Color::AliceBlue;
			this->splitContainer1->Location = System::Drawing::Point(5, 39);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(858, 475);
			this->splitContainer1->SplitterDistance = 225;
			this->splitContainer1->SplitterWidth = 20;
			this->splitContainer1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(615, 524);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 38);
			this->button3->TabIndex = 7;
			this->button3->Text = L"DeCompress";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SteelBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->helpToolStripMenuItem, 
				this->aboutAlgorithmToolStripMenuItem, this->creatorToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(869, 28);
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
			// aboutAlgorithmToolStripMenuItem
			// 
			this->aboutAlgorithmToolStripMenuItem->Name = L"aboutAlgorithmToolStripMenuItem";
			this->aboutAlgorithmToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->aboutAlgorithmToolStripMenuItem->Text = L"About Algorithm";
			this->aboutAlgorithmToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutAlgorithmToolStripMenuItem_Click);
			// 
			// creatorToolStripMenuItem
			// 
			this->creatorToolStripMenuItem->Name = L"creatorToolStripMenuItem";
			this->creatorToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->creatorToolStripMenuItem->Text = L"Creator";
			this->creatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creatorToolStripMenuItem_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(309, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 29);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Lempell - Ziv Algorithm";
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(869, 570);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zip Algorithm";
			this->TransparencyKey = System::Drawing::SystemColors::ActiveCaption;
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 textBox1->Clear();
			 textBox2->Clear();
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 register Int32 i(0);
			 Int32 pos, end_pos;
			 String^ str = gcnew String(textBox1->Text);
			 String^ comp_str(gcnew String(""));		//Compressed string
			 String^ buf,^ buff(gcnew String(""));
			 
			 while(i < str->Length)
			 {
				 end_pos = i;
				 buf = "";
				 while(i < str->Length)
				 {
					 if(str->IndexOf(buf+str[i], 0, end_pos) >= 0)
					 {
						buf += str[i];
						pos = str->IndexOf(buf, 0, end_pos);
						i++;
					 }
					 else
					 {
						 if(buf->Length == 0) i++;
						 break;
					 }
				 }

				 buff = ( (i-pos).ToString() + Convert::ToInt32(buf->Length).ToString() );
				 if(buf == "") comp_str += str[i-1];
				 else if( (buf->Length) < (buff->Length + 1) ) comp_str += buf;
				 else comp_str += ( "[" + (i-pos-buf->Length).ToString() + "," + buf->Length + "]" );
			 }
			
			 textBox2->Text = comp_str;
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 register Int32 i(0);
			 Int32 j, pos, length;
			 Int32 start_pos;
			 String^ str = gcnew String(textBox1->Text);
			 String^ decomp_str = nullptr,^ buf;
			 try
			 {
				 while(i < str->Length)
				 {
					if(str[i] == '[')
					{
						buf = "";
						i++;
						while(str[i] != ',') buf += str[i++];
						start_pos = Convert::ToInt32(buf);
						buf = "";
						i++;
						while(str[i] != ']') buf += str[i++];
						length = Convert::ToInt32(buf);
						pos = decomp_str->Length - start_pos;
						for(j=0; j<length; j++) decomp_str += decomp_str[pos+j];
					}
					else decomp_str += str[i];

					i++;
				 }
				textBox2->Text = decomp_str;
			 }
			 catch(Exception^)
			 {
				 MessageBox::Show("The wrong Compressed Text entered !!!");
			 }
		 }

private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("LZHelp.txt")) File::Delete("LZHelp.txt");
			 StreamWriter^ out = File::CreateText("LZHelp.txt");
			 out->WriteLine("Данная программа создаёт текстовый файл: LZHelp.txt");
			 out->WriteLine("который удаляется с закрытием программы.");
			 out->WriteLine("Рекомендуется запустить программу в пустой папке.");
			 out->WriteLine("Незабудте про справочный документ Lempel - Ziv.docx.");
			 out->Close();
			 System::Diagnostics::Process::Start("LZHelp.txt");
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		 {
			 if(File::Exists("LZHelp.txt")) File::Delete("LZHelp.txt");
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("LZHelp.txt")) File::Delete("LZHelp.txt");
		 }
private: System::Void aboutAlgorithmToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(File::Exists("Lempel - Ziv.docx")) System::Diagnostics::Process::Start("Lempel - Ziv.docx");
			 else MessageBox::Show("File Lempel - Ziv.docx has not been found");
		 }
private: System::Void creatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 MessageBox::Show("Creator: Jafar Yormakhmadzoda");
		 }
};
}

