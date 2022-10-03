#pragma once
#include "GameForm.h"
#include "DescriptionForm.h"
#include "AboutForm.h"

int num = 0, count = 10, left = 1, right = 1000;
bool player, comp;

namespace GuessTheNumber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ ButtonNewGame;
	private: System::Windows::Forms::Button^ ButtonLoadGame;
	private: System::Windows::Forms::Label^ LabelTitle;
	private: System::Windows::Forms::Button^ ButtonDescription;
	private: System::Windows::Forms::Button^ ButtonAuthor;
	private: System::Windows::Forms::RadioButton^ RadioButtonPlayer;
	private: System::Windows::Forms::RadioButton^ RadioButtonComputer;
	private: System::Windows::Forms::Label^ LabelRadioButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->ButtonNewGame = (gcnew System::Windows::Forms::Button());
			this->ButtonLoadGame = (gcnew System::Windows::Forms::Button());
			this->LabelTitle = (gcnew System::Windows::Forms::Label());
			this->ButtonDescription = (gcnew System::Windows::Forms::Button());
			this->ButtonAuthor = (gcnew System::Windows::Forms::Button());
			this->RadioButtonPlayer = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButtonComputer = (gcnew System::Windows::Forms::RadioButton());
			this->LabelRadioButton = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// ButtonNewGame
			// 
			this->ButtonNewGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ButtonNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonNewGame->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonNewGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->ButtonNewGame->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonNewGame->Location = System::Drawing::Point(140, 120);
			this->ButtonNewGame->Name = L"ButtonNewGame";
			this->ButtonNewGame->Size = System::Drawing::Size(173, 23);
			this->ButtonNewGame->TabIndex = 1;
			this->ButtonNewGame->Text = L"Новая игра";
			this->ButtonNewGame->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonNewGame->UseVisualStyleBackColor = false;
			this->ButtonNewGame->Click += gcnew System::EventHandler(this, &MainForm::ButtonNewGame_Click);
			// 
						// ButtonLoadGame
						// 
			this->ButtonLoadGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonLoadGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ButtonLoadGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonLoadGame->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonLoadGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->ButtonLoadGame->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->ButtonLoadGame->Location = System::Drawing::Point(140, 160);
			this->ButtonLoadGame->Name = L"ButtonLoadGame";
			this->ButtonLoadGame->Size = System::Drawing::Size(173, 24);
			this->ButtonLoadGame->TabIndex = 2;
			this->ButtonLoadGame->Text = L"Загрузить игру";
			this->ButtonLoadGame->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonLoadGame->UseVisualStyleBackColor = false;
			this->ButtonLoadGame->Click += gcnew System::EventHandler(this, &MainForm::ButtonLoadGame_Click);
			// 
			// LabelTitle
			// 
			this->LabelTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->LabelTitle->AutoSize = true;
			this->LabelTitle->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->LabelTitle->Location = System::Drawing::Point(253, 52);
			this->LabelTitle->Name = L"LabelTitle";
			this->LabelTitle->Size = System::Drawing::Size(164, 23);
			this->LabelTitle->TabIndex = 3;
			this->LabelTitle->Text = L"УГАДАЙ ЧИСЛО";
			// 
			// ButtonDescription
			// 
			this->ButtonDescription->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonDescription->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonDescription->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonDescription->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonDescription->Location = System::Drawing::Point(140, 200);
			this->ButtonDescription->Name = L"ButtonDescription";
			this->ButtonDescription->Size = System::Drawing::Size(173, 23);
			this->ButtonDescription->TabIndex = 4;
			this->ButtonDescription->Text = L"О программе";
			this->ButtonDescription->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonDescription->UseVisualStyleBackColor = true;
			this->ButtonDescription->Click += gcnew System::EventHandler(this, &MainForm::ButtonDescription_Click);
			// 
			// ButtonAuthor
			// 
			this->ButtonAuthor->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButtonAuthor->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonAuthor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonAuthor->Location = System::Drawing::Point(140, 243);
			this->ButtonAuthor->Name = L"ButtonAuthor";
			this->ButtonAuthor->Size = System::Drawing::Size(173, 23);
			this->ButtonAuthor->TabIndex = 5;
			this->ButtonAuthor->Text = L"Об авторе";
			this->ButtonAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ButtonAuthor->UseVisualStyleBackColor = true;
			this->ButtonAuthor->Click += gcnew System::EventHandler(this, &MainForm::ButtonAuthor_Click);
			// 
			// RadioButtonPlayer
			// 
			this->RadioButtonPlayer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RadioButtonPlayer->AutoSize = true;
			this->RadioButtonPlayer->Checked = true;
			this->RadioButtonPlayer->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RadioButtonPlayer->Location = System::Drawing::Point(363, 165);
			this->RadioButtonPlayer->Name = L"RadioButtonPlayer";
			this->RadioButtonPlayer->Size = System::Drawing::Size(75, 22);
			this->RadioButtonPlayer->TabIndex = 6;
			this->RadioButtonPlayer->TabStop = true;
			this->RadioButtonPlayer->Text = L"Игрок";
			this->RadioButtonPlayer->UseVisualStyleBackColor = true;
			// 
			// RadioButtonComputer
			// 
			this->RadioButtonComputer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RadioButtonComputer->AutoSize = true;
			this->RadioButtonComputer->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RadioButtonComputer->Location = System::Drawing::Point(363, 200);
			this->RadioButtonComputer->Name = L"RadioButtonComputer";
			this->RadioButtonComputer->Size = System::Drawing::Size(117, 22);
			this->RadioButtonComputer->TabIndex = 7;
			this->RadioButtonComputer->Text = L"Компьютер";
			this->RadioButtonComputer->UseVisualStyleBackColor = true;
			// 
			// LabelRadioButton
			// 
			this->LabelRadioButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->LabelRadioButton->AutoSize = true;
			this->LabelRadioButton->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelRadioButton->Location = System::Drawing::Point(360, 128);
			this->LabelRadioButton->Name = L"LabelRadioButton";
			this->LabelRadioButton->Size = System::Drawing::Size(174, 18);
			this->LabelRadioButton->TabIndex = 8;
			this->LabelRadioButton->Text = L"Выбрать отгадчика:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ClientSize = System::Drawing::Size(670, 319);
			this->Controls->Add(this->LabelRadioButton);
			this->Controls->Add(this->RadioButtonComputer);
			this->Controls->Add(this->RadioButtonPlayer);
			this->Controls->Add(this->ButtonAuthor);
			this->Controls->Add(this->ButtonDescription);
			this->Controls->Add(this->LabelTitle);
			this->Controls->Add(this->ButtonLoadGame);
			this->Controls->Add(this->ButtonNewGame);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->Name = L"MainForm";
			this->Text = L"Угадай число";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
		player = RadioButtonPlayer->Checked;
		comp = RadioButtonComputer->Checked;
		GameForm^ GForm = gcnew GameForm(num, count, left, right, player, comp);
		GForm->Show();
	}
	private: System::Void ButtonDescription_Click(System::Object^ sender, System::EventArgs^ e) {
		DescriptionForm^ DescForm = gcnew DescriptionForm;
		DescForm->Show();
	}
	private: System::Void ButtonAuthor_Click(System::Object^ sender, System::EventArgs^ e) {
		AboutForm^ AbForm = gcnew AboutForm;
		AbForm->Show();
	}
	private: System::Void ButtonLoadGame_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "TXT Files(*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filename = openFileDialog1->FileName;
			StreamReader^ file = File::OpenText(filename);
			num = Convert::ToUInt32(file->ReadLine());
			count = Convert::ToUInt32(file->ReadLine());
			if (file->ReadLine() == "P") {
				player = true;
				comp = false;
			}
			else {
				player = false;
				comp = true;
				left = Convert::ToUInt32(file->ReadLine());
				right = Convert::ToUInt32(file->ReadLine());
			}
			file->Close();
		}
		GameForm^ GForm = gcnew GameForm(num, count, left, right, player, comp);
		GForm->Show();
	}
	};
}
