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
	/// Сводка для DeletePotencialMarried
	/// </summary>
	public ref class DeletePotencialMarried : public System::Windows::Forms::Form
	{
	public:
		DeletePotencialMarried(void)
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
		~DeletePotencialMarried()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(169, 82);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(619, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DeletePotencialMarried::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &DeletePotencialMarried::comboBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 85);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите участника:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(329, 134);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Удалить участника";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeletePotencialMarried::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(591, 134);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DeletePotencialMarried::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(273, 28);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Удаление участника проекта";
			// 
			// DeletePotencialMarried
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(815, 192);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DeletePotencialMarried";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &DeletePotencialMarried::DeletePotencialMarried_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List<String^>^ RegisrationNumber;
		List<String^>^ RegisrationDate;
		List<String^>^ Gender;
		List<String^>^ AboutYourself;
		List<String^>^ AboutYourselfPart;
		List<String^>^ Requirements;
		List<String^>^ RequirementsPart;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 RegisrationNumber = gcnew List<String^>();
				 RegisrationDate = gcnew List<String^>();
				 Gender = gcnew List<String^>();
				 AboutYourself = gcnew List<String^>();
				 Requirements = gcnew List<String^>();
				 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
				 String^ Married = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Married.txt";
				 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 StreamReader^ Read = gcnew StreamReader ( PotencialMarried );
				 StreamReader^ ReadSymbol;
				 StreamWriter^ write;
				 String^ OnePotencialMarried = nullptr;
				 String^ Deleted;
				 String^ Symbol;
				 String^ NewText = "";
				 String^ OneCharacteristic;
				 int i = 0,j = 0;
				 while ((OnePotencialMarried = Read->ReadLine()) != nullptr)
				 {
					 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
					 write->Write(OnePotencialMarried);
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
				 Read->Close();
				 String^ RegisrationNumber1;
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(comboBox1->Text);
				 write->Close();
				 ReadSymbol = gcnew StreamReader ( ForSymbol );
				 while ( ( Symbol = Convert::ToString(Convert::ToChar(ReadSymbol->Read())) ) != " " )
				 {
					 RegisrationNumber1 += Symbol;
				 }
				 for ( i = 0 ; i < RegisrationNumber->Count ; i++ )
				 {
					 if ( RegisrationNumber1 == RegisrationNumber[i] )
					 {
						 break;
					 }
				 }
				 for ( j = 0 ; j < RegisrationNumber->Count ; j++ )
				 {
					 if ( j == i )
					 {
						 Deleted =  RegisrationNumber[j] + "|" + RegisrationDate[j] + "|" + Gender[j] + "|" + AboutYourself[j] + "|" + Requirements[j];
					 }
					 else
					 {
						 if ( NewText == "" )
						 {
							 NewText =  RegisrationNumber[j] + "|" + RegisrationDate[j] + "|" + Gender[j] + "|" + AboutYourself[j] + "|" + Requirements[j];
						 }
						 else
						 {
							 NewText += "\r\n" +  RegisrationNumber[j] + "|" + RegisrationDate[j] + "|" + Gender[j] + "|" + AboutYourself[j] + "|" + Requirements[j];
						 }
					 }
				 }
				 ReadSymbol->Close();
				 RegisrationNumber->Clear();
				 RegisrationDate->Clear();
				 Gender->Clear();
				 AboutYourself->Clear();
				 Requirements->Clear();
				 write = gcnew StreamWriter(PotencialMarried,false,Encoding::UTF8);
				 write->Write(NewText);
				 write->Close();
				 Read = gcnew StreamReader ( Married );
				 NewText = Read->ReadToEnd() + "\r\n" + Deleted;
				 Read->Close();
				 write = gcnew StreamWriter(Married,false,Encoding::UTF8);
				 write->Write(NewText);
				 write->Close();
				 NewText = "";
				 comboBox1->Items->Clear();
				 comboBox1->Text = "";
				 MessageBox::Show( RegisrationNumber1 + " был удалён" );
				 Read = gcnew StreamReader ( PotencialMarried );
				 String^ OnePotencialMarryed = nullptr;
				 i = 0;
				 while ((OnePotencialMarryed = Read->ReadLine()) != nullptr)
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
				 Read->Close();
			 }
private: System::Void DeletePotencialMarried_Load(System::Object^  sender, System::EventArgs^  e) {
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
			 RegisrationNumber->Clear();
			 RegisrationDate->Clear();
			 Gender->Clear();
			 AboutYourself->Clear();
			 Requirements->Clear();
		 }
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Text = "";
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ( comboBox1->Text == "" )
				 button1->Enabled = false;
			 else
				 button1->Enabled = true;
		 }
};
}
