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
	/// Сводка для ViewPotencialMarried
	/// </summary>
	public ref class ViewPotencialMarried : public System::Windows::Forms::Form
	{
	public:
		ViewPotencialMarried(void)
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
		~ViewPotencialMarried()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	protected: 




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(584, 328);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ViewPotencialMarried::ViewPotencialMarried_Load);
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75));
			this->button1->Location = System::Drawing::Point(0, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(584, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewPotencialMarried::button1_Click_1);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(239, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Все участники";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(584, 328);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(600, 366);
			this->MinimumSize = System::Drawing::Size(600, 366);
			this->Name = L"ViewPotencialMarried";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &ViewPotencialMarried::ViewPotencialMarried_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void ViewPotencialMarried_Load(System::Object^  sender, System::EventArgs^  e) {
				 List<String^>^ RegisrationNumber = gcnew List<String^>();
				 List<String^>^ RegisrationDate = gcnew List<String^>();
				 List<String^>^ Gender = gcnew List<String^>();
				 List<String^>^ AboutYourself = gcnew List<String^>();
				 List<String^>^ Requirements = gcnew List<String^>();
				 String^ PotencialMarried = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Potencial Married.txt";
				 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 StreamReader^ ReadLine = gcnew StreamReader ( PotencialMarried );
				 StreamReader^ ReadSymbol;
				 StreamWriter^ write;
				 String^ AllPotencialMarryed;
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
					 AllPotencialMarryed += "\r\n\r\n" + RegisrationNumber[i] +" пол: " + Gender[i] + "       дата регистрации: " + RegisrationDate[i] + "\r\nО себе: " + AboutYourself[i] + "       Требования: " + Requirements[i];
					 ++i;
				 }
				 RegisrationNumber->Clear();
				 Gender->Clear();
				 RegisrationDate->Clear();
				 AboutYourself->Clear();
				 Requirements->Clear();
				 textBox1->Text = AllPotencialMarryed  + "\r\n";
				 ReadLine->Close();
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(AllPotencialMarryed);
				 write->Close();
			 }
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
};
}
