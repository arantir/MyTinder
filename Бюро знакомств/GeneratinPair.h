#pragma once

namespace Бюро_знакомств {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для GeneratinPair
	/// </summary>
	public ref class GeneratinPair : public System::Windows::Forms::Form
	{
	public:
		GeneratinPair(void)
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
		~GeneratinPair()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите участника";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->comboBox1->Location = System::Drawing::Point(184, 47);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(914, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GeneratinPair::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &GeneratinPair::comboBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(859, 266);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GeneratinPair::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 144);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Кандидаты";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(428, 91);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Отобрать кандидатов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GeneratinPair::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(428, 266);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Печать приглашений";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GeneratinPair::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(184, 141);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(914, 24);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &GeneratinPair::comboBox1_SelectedIndexChanged);
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &GeneratinPair::comboBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 226);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Место и время встречи";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 223);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(914, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GeneratinPair::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(417, 10);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Генерирование пары";
			// 
			// GeneratinPair
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1124, 316);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GeneratinPair";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &GeneratinPair::GeneratinPair_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		List<String^>^ RegisrationNumber;
		List<String^>^ RegisrationDate;
		List<String^>^ Gender;
		List<String^>^ AboutYourself;
		List<String^>^ AboutYourselfPart1;
		List<String^>^ AboutYourselfPart2;
		List<String^>^ Requirements;
		List<String^>^ RequirementsPart1;
		List<String^>^ RequirementsPart2;
	private: System::Void GeneratinPair_Load(System::Object^  sender, System::EventArgs^  e) {
				 RegisrationNumber = gcnew List<String^>();
				 RegisrationDate = gcnew List<String^>();
				 Gender = gcnew List<String^>();
				 AboutYourself = gcnew List<String^>();
				 Requirements = gcnew List<String^>();
				 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
				 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 StreamReader^ ReadLine = gcnew StreamReader ( PotencialMarried );
				 StreamReader^ ReadSymbol;
				 StreamWriter^ write;
				 String^ OnePotencialMarryed = nullptr;
				 String^ Symbol;
				 String^ OneCharacteristic;
				 int i = 0;
				 while ((OnePotencialMarryed = ReadLine->ReadLine()) != nullptr)
				 {
					 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
					 write->Write(OnePotencialMarryed);
					 write->Close();
					 ReadSymbol = gcnew StreamReader ( ForSymbol );
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
					 {
						 OneCharacteristic += Symbol;
					 }
					 RegisrationNumber->Add(OneCharacteristic);
					 OneCharacteristic = "";
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
					 {
						 OneCharacteristic += Symbol;
					 }
					 RegisrationDate->Add(OneCharacteristic);
					 OneCharacteristic = "";
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
					 {
						 OneCharacteristic += Symbol;
					 }
					 Gender->Add(OneCharacteristic);
					 OneCharacteristic = "";
					 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
					 {
						 OneCharacteristic += Symbol;
					 }
					 AboutYourself->Add(OneCharacteristic);
					 OneCharacteristic = "";
					 OneCharacteristic = ReadSymbol->ReadToEnd();
					 ReadSymbol->Close();
					 Requirements->Add(OneCharacteristic);
					 OneCharacteristic = "";
					 comboBox1->Items->Add( RegisrationNumber[i] + " дата регистрации:" + RegisrationDate[i] + " пол:" + Gender[i] + " о себе: " + AboutYourself[i] + " требования: " + Requirements[i] );
					 ++i;
				 }
				 ReadLine->Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Items->Clear();
			 RegisrationNumber = gcnew List<String^>();
			 RegisrationDate = gcnew List<String^>();
			 Gender = gcnew List<String^>();
			 AboutYourself = gcnew List<String^>();
			 Requirements = gcnew List<String^>();
			 RequirementsPart1 = gcnew List<String^>();
			 AboutYourselfPart1 = gcnew List<String^>();
			 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
			 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
			 String^ TextLength = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Length.txt";
			 StreamReader^ ReadLine = gcnew StreamReader ( PotencialMarried );
			 StreamReader^ ReadSymbol;
			 StreamReader^ ReadLength;
			 StreamWriter^ write;
			 String^ OnePotencialMarryed = nullptr;
			 String^ Symbol;
			 String^ OneCharacteristic;
			 String^ RegisrationNumber1;
			 int i,j,k,m,l,AboutYourselfLegth1,AboutYourselfLegth2,RequirementsLegth1,RequirementsLegth2;
			 bool Anchor1 = 0,Anchor2 = 0;
			 while ((OnePotencialMarryed = ReadLine->ReadLine()) != nullptr)
			 {
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(OnePotencialMarryed);
				 write->Close();
				 ReadSymbol = gcnew StreamReader ( ForSymbol );
				 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
				 {
					 OneCharacteristic += Symbol;
				 }
				 RegisrationNumber->Add(OneCharacteristic);
				 OneCharacteristic = "";
				 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
				 {
					 OneCharacteristic += Symbol;
				 }
				 RegisrationDate->Add(OneCharacteristic);
				 OneCharacteristic = "";
				 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
				 {
					 OneCharacteristic += Symbol;
				 }
				 Gender->Add(OneCharacteristic);
				 OneCharacteristic = "";
				 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != "|" )
				 {
						OneCharacteristic += Symbol;
				 }
				 AboutYourself->Add(OneCharacteristic);
				 OneCharacteristic = "";
				 OneCharacteristic = ReadSymbol->ReadToEnd();
				 ReadSymbol->Close();
				 Requirements->Add(OneCharacteristic);
				 OneCharacteristic = "";
			 }
			 ReadLine->Close();
			 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
			 write->Write(comboBox1->Text);
			 write->Close();
			 ReadSymbol = gcnew StreamReader ( ForSymbol );
			 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != " " )
			 {
				 RegisrationNumber1 += Symbol;
			 }
			 ReadSymbol->Close();
			 for ( i = 0 ; i < RegisrationNumber->Count ; i++ )
			 {
				 if ( RegisrationNumber1 == RegisrationNumber[i] )
					 break;
			 }
			 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
			 write->Write(Requirements[i]->Trim());
			 write->Close();
			 ReadLength = gcnew StreamReader ( TextLength );
			 RequirementsLegth1 = Requirements[i]->Length;
			 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
			 write->Write(Requirements[i]->Trim());
			 write->Close();
			 ReadSymbol = gcnew StreamReader ( ForSymbol );
			 for ( m = 0 ; m < RequirementsLegth1 ; m++ )
			 {
				 Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read()));
				 if ( Symbol == ";" )
				 {
					 RequirementsPart1->Add(OneCharacteristic);
					 OneCharacteristic = "";
				 }
				 else
				 {
					 OneCharacteristic += Symbol;
				 }
				 if ( m == RequirementsLegth1 - 1 )
				 {
					 RequirementsPart1->Add(OneCharacteristic);
					 OneCharacteristic = "";
				 }
			 }
			 ReadSymbol->Close();
			 ReadLength->Close();
			 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
			 write->Write(AboutYourself[i]->Trim());
			 write->Close();
			 ReadSymbol = gcnew StreamReader ( ForSymbol );
			 write = gcnew StreamWriter(TextLength,false,Encoding::UTF8);
			 write->Write(AboutYourself[i]->Trim());
			 write->Close();
			 ReadLength = gcnew StreamReader ( TextLength );
			 AboutYourselfLegth1 = ReadLength->ReadToEnd()->Length;
			 for ( m = 0 ; m < AboutYourselfLegth1 ; m++ )
			 {
				 Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read()));
				 if ( Symbol == ";" )
				 {
					 AboutYourselfPart1->Add(OneCharacteristic);
					 OneCharacteristic = "";
				 }
				 else
				 {
					 OneCharacteristic += Symbol;
				 }
				 if ( m == AboutYourselfLegth1 - 1 )
				 {
					 AboutYourselfPart1->Add(OneCharacteristic);
					 OneCharacteristic = "";
				 }
			 }
			 ReadSymbol->Close();
			 ReadLength->Close();
			 for ( k = 0 ; k < RegisrationNumber->Count ; k++ )
			 {
				 AboutYourselfPart2 = gcnew List<String^>();
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(AboutYourself[k]->Trim());
				 write->Close();
				 ReadSymbol = gcnew StreamReader ( ForSymbol );
				 write = gcnew StreamWriter(TextLength,false,Encoding::UTF8);
				 write->Write(AboutYourself[k]->Trim());
				 write->Close();
				 ReadLength = gcnew StreamReader ( TextLength );
				 AboutYourselfLegth2 = ReadLength->ReadToEnd()->Length;
				 for ( m = 0 ; m < AboutYourselfLegth2 ; m++ )
				 {
					 Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read()));
					 if ( Symbol == ";" )
					 {
						 AboutYourselfPart2->Add(OneCharacteristic);
						 OneCharacteristic = "";
					 }
					 else
					 {
						 OneCharacteristic += Symbol;
					 }
					 if ( m == AboutYourselfLegth2 - 1 )
					 {
						 AboutYourselfPart2->Add(OneCharacteristic);
						 OneCharacteristic = "";
					 }
				 }
				 ReadSymbol->Close();
				 ReadLength->Close();
				 RequirementsPart2 = gcnew List<String^>();
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(Requirements[k]->Trim());
				 write->Close();
				 ReadSymbol = gcnew StreamReader ( ForSymbol );
				 write = gcnew StreamWriter(TextLength,false,Encoding::UTF8);
				 write->Write(Requirements[k]->Trim());
				 write->Close();
				 ReadLength = gcnew StreamReader ( TextLength );
				 RequirementsLegth2 = ReadLength->ReadToEnd()->Length;
				 for ( m = 0 ; m < RequirementsLegth2 ; m++ )
				 {
					 Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read()));
					 if ( Symbol == ";" )
					 {
						 RequirementsPart2->Add(OneCharacteristic);
						 OneCharacteristic = "";
					 }
					 else
					 {
						 OneCharacteristic += Symbol;
					 }
					 if ( m == RequirementsLegth2 - 1 )
					 {
						 RequirementsPart2->Add(OneCharacteristic);
						 OneCharacteristic = "";
					 }
				 }
				 ReadLength->Close();
				 ReadSymbol->Close();
				 for ( j = 0 ; j < AboutYourselfPart2->Count ; j++ )
				 {
					 for ( l = 0 ; l < RequirementsPart1->Count ; l++ )
					 {
						 if ( RequirementsPart1[l] == AboutYourselfPart2[j] && Gender[i] != Gender[k] && RegisrationNumber[i] != RegisrationNumber[k] )
						 {
							 Anchor1 = 1;
							 break;
						 }
					 }
					 if ( Anchor1 == 1 )
						 break;
				 }
				 if ( Anchor1 == 1 )
				 {
					 for ( j = 0 ; j < AboutYourselfPart1->Count ; j++ )
					 {
						 for ( l = 0 ; l < RequirementsPart2->Count ; l++ )
						 {
							 if ( RequirementsPart2[l] == AboutYourselfPart1[j] && Gender[i] != Gender[k] && RegisrationNumber[i] != RegisrationNumber[k] )
							 {
								 comboBox2->Items->Add( RegisrationNumber[k] + " дата регистрации:" + RegisrationDate[k] + " пол:" + Gender[k] + " о себе: " + AboutYourself[k] + " требования: " + Requirements[k] );
								 Anchor2 = 1;
								 break;
							 }
						 }
						 if ( Anchor2 == 1 )
							 break;
					 }
				 }
				 Anchor1 = 0;
				 Anchor2 = 0;
				 AboutYourselfPart2->Clear();
				 RequirementsPart2->Clear();
			 }
		 }
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Text = "";
			 button2->Enabled = false;
			 button3->Enabled = false;
			 comboBox2->Text = "";
			 comboBox2->Items->Clear();
		 }
		 System::Drawing::Font^ printFont;
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintPreviewDialog^ PrintDialog = gcnew PrintPreviewDialog();
			 printFont = gcnew System::Drawing::Font( "Arial",15 );
			 PrintDocument^ Meet = gcnew PrintDocument;
			 Meet->PrintPage += gcnew PrintPageEventHandler( this, &GeneratinPair::Meet_PrintPage );
			 PrintDialog->Document = Meet;
			 PrintDialog->Show();
		 }
private: void Meet_PrintPage( Object^ , PrintPageEventArgs^ ev )
		 {
			 float yPos = 0;
			 float leftMargin = (float)ev->MarginBounds.Left;
			 String^ line = "Бюро знакомств\r\n\n" + textBox1->Text + "\r\n\n\n\n\n\n\n\nБюро знакомств\r\n\n" + textBox1->Text;
			 yPos += 200;
			 ev->Graphics->DrawString( line, printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat );
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox1->Text != "")
				 button2->Enabled = true;
			 else
				 button2->Enabled = false;
			 if ( comboBox1->Text != "" && comboBox2->Text != "" && textBox1->Text != "" )
				 button3->Enabled = true;
			 else
				 button3->Enabled = false;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox1->Text != "")
				 button2->Enabled = true;
			 else
				 button2->Enabled = false;
			 if ( comboBox1->Text != "" && comboBox2->Text != "" && textBox1->Text != "" )
				 button3->Enabled = true;
			 else
				 button3->Enabled = false;
		 }
private: System::Void comboBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Text = "";
			 button3->Enabled = false;
		 }
};
}
