#pragma once

namespace Бюро_знакомств {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для NewPotencialMarried
	/// </summary>
	public ref class NewPotencialMarried : public System::Windows::Forms::Form
	{
	public:
		NewPotencialMarried(void)
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
		~NewPotencialMarried()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(79, 281);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Утвердить участника";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewPotencialMarried::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 64);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Пол:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 138);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Сведения о себе:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 202);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Требования к партнёру:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 135);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(375, 56);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &NewPotencialMarried::textBox4_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NewPotencialMarried::textBox_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(220, 199);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(375, 54);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &NewPotencialMarried::textBox4_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NewPotencialMarried::textBox_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(395, 281);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewPotencialMarried::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 64);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Регистрационный номер:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(418, 61);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(165, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &NewPotencialMarried::textBox4_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(395, 66);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &NewPotencialMarried::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(230, 9);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Добавление участника";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"м", L"ж"});
			this->comboBox1->Location = System::Drawing::Point(89, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(103, 24);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &NewPotencialMarried::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(157, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(315, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Введите сведения о себе и требования через ;";
			// 
			// NewPotencialMarried
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(601, 320);
			this->ControlBox = false;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(617, 358);
			this->MinimumSize = System::Drawing::Size(617, 358);
			this->Name = L"NewPotencialMarried";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &NewPotencialMarried::NewPotencialMarried_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int TestRegisrationNumber = Convert::ToInt32(textBox4->Text);
				 bool Anchor = 0;
				 Random^ rand = gcnew Random ();
				 List<int>^ RegisrationNumber = gcnew List<int>();
				 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
				 String^ PotencialMarriedSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 StreamReader^ ReadLineRegisrationNumber = gcnew StreamReader(PotencialMarried);
				 StreamReader^ ReadSymbolRegisrationNumber;
				 StreamWriter^ write;
				 String^ Symbol;
				 String^ result;
				 String^ line = nullptr;
				 while ((line = ReadLineRegisrationNumber->ReadLine()) != nullptr)
				 {
					 write = gcnew StreamWriter(PotencialMarriedSymbol,false,Encoding::UTF8);
					 write->Write(line);
					 write->Close();
					 ReadSymbolRegisrationNumber = gcnew StreamReader(PotencialMarriedSymbol);
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbolRegisrationNumber->Read())) ) != "|" )
					 {
						 result = result + Symbol;
					 }
					 RegisrationNumber->Add(Convert::ToInt32(result));
					 result = "";
					 ReadSymbolRegisrationNumber->Close();
				 }
				 ReadLineRegisrationNumber->Close();
				 for ( int i = 0 ; i < RegisrationNumber->Count ; i++ )
				 {
					 if ( RegisrationNumber[i] == TestRegisrationNumber ) Anchor = 1;
				 }
				 if ( Anchor == 0 )
				 {
					 String^ RegistrationDate = __DATE__;
					 StreamReader^ ReadOldText = gcnew StreamReader(PotencialMarried);
					 String^ OldText = ReadOldText->ReadToEnd();
			/*		 String^ delimStr = ";",^s1,^s2,^s;
					 array<Char>^ delimiter = delimStr->ToCharArray( );
					array<String^>^ words = textBox2->Text->Split( delimiter );
					for (int word=0; word<words->Length; word++)
					{
						
						if(words[word]->Length) 
						{
							String^ delimStr1 = " ";
							array<Char>^ delimiter1 = delimStr1->ToCharArray( );
							array<String^>^ words1 = words[word]->Split( delimiter1 );
							for (int word1=0; word1<words1->Length-1; word1++)
								if(words1[word1]->Length)  s+=words1[word1]+" ";
							s+=words1[words1->Length-1];
						}
						s1+=s+";";


					}*/
					 String^ WriteText = OldText + "\r\n" + textBox4->Text + "|" + RegistrationDate +"|" + comboBox1->Text + "|" + textBox2->Text->Trim() + "|" + textBox3->Text->Trim();
					 ReadOldText->Close();
					 StreamWriter^ Write;
					 Write = gcnew StreamWriter(PotencialMarried,false,Encoding::UTF8);
					 Write->Write( WriteText );
					 Write->Close();
					 MessageBox::Show("Запись завершена");
					 comboBox1->Text = "";
					 textBox2->Clear();
					 textBox3->Clear();
				 }
				 else
				 {
					 MessageBox::Show("Такой регистрационный номер уже существует.\r\nВведите новый регистрационный номер.");
				 }
				 TestRegisrationNumber = 0;
				 while ( Anchor != 1 )
				 {
					 Anchor = 1;
					 TestRegisrationNumber = rand->Next(100000);
					 if ( RegisrationNumber->Count > 0 )
					 {
						 for ( int i = 0 ; i < RegisrationNumber->Count ; i++ )
						 {
							 if ( RegisrationNumber[i] == TestRegisrationNumber ) Anchor = 0;
						 }
					 }
				 }
				 RegisrationNumber->Clear();
				 textBox4->Text = Convert::ToString(TestRegisrationNumber);
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ( textBox4->Enabled == true )
				 textBox4->Enabled = false;
			 else
				 textBox4->Enabled = true;
		 }
private: System::Void NewPotencialMarried_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
				 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 List<int>^ RegisrationNumber = gcnew List<int>();
				 int TestRegisrationNumber;
				 bool Anchor = 0;
				 Random^ rand = gcnew Random ();
				 StreamReader^ ReadLineRegisrationNumber = gcnew StreamReader(PotencialMarried);
				 StreamReader^ ReadSymbolRegisrationNumber;
				 StreamWriter^ write;
				 String^ Symbol;
				 String^ result;
				 String^ line = nullptr;
				 while ((line = ReadLineRegisrationNumber->ReadLine()) != nullptr)
				 {
					 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
					 write->Write(line);
					 write->Close();
					 ReadSymbolRegisrationNumber = gcnew StreamReader(ForSymbol);
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbolRegisrationNumber->Read())) ) != "|" )
					 {
						 result = result + Symbol;
					 }
					 RegisrationNumber->Add(Convert::ToInt32(result));
					 result = "";
					 ReadSymbolRegisrationNumber->Close();
				 }
				 ReadLineRegisrationNumber->Close();
				 while ( Anchor != 1 )
				 {
					 Anchor = 1;
					 TestRegisrationNumber = rand->Next(100000);
					 if ( RegisrationNumber->Count > 0 )
					 {
						 for ( int i = 0 ; i < RegisrationNumber->Count ; i++ )
						 {
							 if ( RegisrationNumber[i] == TestRegisrationNumber ) Anchor = 0;
						 }
					 }
				 }
				 RegisrationNumber->Clear();
				 textBox4->Text = Convert::ToString(TestRegisrationNumber);
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {
				 Convert::ToInt32(textBox4->Text);
			 }
			 catch (Exception^ ex)
			 {
				 textBox4->Text = "";
			 }
			 if ( comboBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" )
				 button1->Enabled = false;
			 else
				 button1->Enabled = true;
			 if ( comboBox1->Text != "м" && comboBox1->Text != "ж" )
				 comboBox1->Text = "";
		 }
		 String^ space;
private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ( space == " " && Convert::ToString( e->KeyChar ) == " " )
				 return;
			 if ( Convert::ToString( e->KeyChar ) == " " )
				 space = " ";
		 }
};
}
