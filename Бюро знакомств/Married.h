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
	/// Сводка для Married
	/// </summary>
	public ref class Married : public System::Windows::Forms::Form
	{
	public:
		Married(void)
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
		~Married()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;



	private: 

	private: 

	private: 

	private: 

	private: 


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->button1->Location = System::Drawing::Point(0, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(584, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Married::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Married::Married_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(584, 305);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Married::Married_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(265, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Архив";
			// 
			// Married
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(584, 328);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(600, 366);
			this->MinimumSize = System::Drawing::Size(600, 366);
			this->Name = L"Married";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Married::Married_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void Married_Load(System::Object^  sender, System::EventArgs^  e) {
				 List<String^>^ RegisrationNumber = gcnew List<String^>();
				 List<String^>^ RegisrationDate = gcnew List<String^>();
				 List<String^>^ Gender = gcnew List<String^>();
				 List<String^>^ AboutYourself = gcnew List<String^>();
				 List<String^>^ Requirements = gcnew List<String^>();
				 String^ Married = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\Married.txt";
				 String^ ForSymbol = "C:\\Users\\Александр\\Desktop\\c++\\курсовая\\Бюро знакомств\\For Symbols.txt";
				 StreamReader^ ReadLine = gcnew StreamReader ( Married );
				 StreamReader^ ReadSymbol;
				 StreamWriter^ write;
				 String^ AllMarryed;
				 String^ OneMarryed = nullptr;
				 String^ Symbol;
				 String^ OneCharacteristic;
				 int i = 0;
				 while ((OneMarryed = ReadLine->ReadLine()) != nullptr)
				 {
					 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
					 write->Write(OneMarryed);
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
					 AllMarryed += "\r\n\r\n" + RegisrationNumber[i] +" пол: " + Gender[i] + "       дата регистрации: " + RegisrationDate[i] + "\r\nО себе: " + AboutYourself[i] + "       Требования: " + Requirements[i];
					 ++i;
				 }
				 textBox1->Text = AllMarryed + "\r\n";
				 ReadLine->Close();
				 write = gcnew StreamWriter(ForSymbol,false,Encoding::UTF8);
				 write->Write(AllMarryed);
				 write->Close();
			 }
private: System::Void Married_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 System::Object^  a;
			 System::EventArgs^  b;
			 if (e->KeyChar==(char)Keys::Escape)
			 {
				 button1_Click( a , b );
			 }
		 }
};
}
