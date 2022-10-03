#pragma once
#include <ctime>
#include <cstdlib>

namespace GuessTheNumber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Media;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(int num_, int count_, int left_, int right_, bool player_, bool comp_)
		{
			//g = this->CreateGraphics();
			num = num_;
			count = count_;
			left = left_;
			right = right_;
			player = player_;
			comp = comp_;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			num = 0;
			tip = 0;
			ans = 0;
			count = 10;
			left = 1;
			right = 1000;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextBoxHint;
	protected:
	private: System::Windows::Forms::TextBox^ TextBoxAnswer;
	private: System::Windows::Forms::Label^ LabelHint;
	private: System::Windows::Forms::Label^ LabelAnswer;
	private: System::Windows::Forms::Button^ ButtonCheckHint;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LabelResultText;
	private:
		Graphics^ g;
		int R, x0, y0, angle_count;
		int num, ans, tip, count, left, right;
		bool player, comp, new_game;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonSave;
	private: System::Windows::Forms::Button^ ButtonAgain;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ButtonPCCont;
	private: System::ComponentModel::IContainer^ components;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			   this->TextBoxHint = (gcnew System::Windows::Forms::TextBox());
			   this->TextBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			   this->LabelHint = (gcnew System::Windows::Forms::Label());
			   this->LabelAnswer = (gcnew System::Windows::Forms::Label());
			   this->ButtonCheckHint = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->labelResult = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->LabelResultText = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->ButtonSave = (gcnew System::Windows::Forms::Button());
			   this->ButtonAgain = (gcnew System::Windows::Forms::Button());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->ButtonPCCont = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // TextBoxHint
			   // 
			   this->TextBoxHint->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->TextBoxHint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(43)));
			   this->TextBoxHint->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(237)));
			   this->TextBoxHint->Location = System::Drawing::Point(425, 117);
			   this->TextBoxHint->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			   this->TextBoxHint->Name = L"TextBoxHint";
			   this->TextBoxHint->Size = System::Drawing::Size(69, 27);
			   this->TextBoxHint->TabIndex = 0;
			   // 
			   // TextBoxAnswer
			   // 
			   this->TextBoxAnswer->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->TextBoxAnswer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(43)));
			   this->TextBoxAnswer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(237)));
			   this->TextBoxAnswer->Location = System::Drawing::Point(425, 165);
			   this->TextBoxAnswer->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			   this->TextBoxAnswer->Name = L"TextBoxAnswer";
			   this->TextBoxAnswer->Size = System::Drawing::Size(69, 27);
			   this->TextBoxAnswer->TabIndex = 1;
			   // 
			   // LabelHint
			   // 
			   this->LabelHint->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->LabelHint->AutoSize = true;
			   this->LabelHint->Location = System::Drawing::Point(228, 71);
			   this->LabelHint->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->LabelHint->Name = L"LabelHint";
			   this->LabelHint->Size = System::Drawing::Size(96, 18);
			   this->LabelHint->TabIndex = 2;
			   this->LabelHint->Text = L"Подсказка";
			   // 
			   // LabelAnswer
			   // 
			   this->LabelAnswer->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->LabelAnswer->AutoSize = true;
			   this->LabelAnswer->Location = System::Drawing::Point(228, 169);
			   this->LabelAnswer->Name = L"LabelAnswer";
			   this->LabelAnswer->Size = System::Drawing::Size(62, 18);
			   this->LabelAnswer->TabIndex = 3;
			   this->LabelAnswer->Text = L"Ответ:";
			   // 
			   // ButtonCheckHint
			   // 
			   this->ButtonCheckHint->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->ButtonCheckHint->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->ButtonCheckHint->Location = System::Drawing::Point(594, 117);
			   this->ButtonCheckHint->Name = L"ButtonCheckHint";
			   this->ButtonCheckHint->Size = System::Drawing::Size(114, 27);
			   this->ButtonCheckHint->TabIndex = 4;
			   this->ButtonCheckHint->Text = L"Подсказка";
			   this->ButtonCheckHint->UseVisualStyleBackColor = true;
			   this->ButtonCheckHint->Click += gcnew System::EventHandler(this, &GameForm::ButtonCheckHint_Click);
			   // 
			   // button1
			   // 
			   this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Location = System::Drawing::Point(594, 165);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(114, 27);
			   this->button1->TabIndex = 5;
			   this->button1->Text = L"Ответ";
			   this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			   // 
			   // labelResult
			   // 
			   this->labelResult->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->labelResult->AutoSize = true;
			   this->labelResult->Location = System::Drawing::Point(228, 262);
			   this->labelResult->Name = L"labelResult";
			   this->labelResult->Size = System::Drawing::Size(96, 18);
			   this->labelResult->TabIndex = 6;
			   this->labelResult->Text = L"Результат:";
			   // 
			   // label1
			   //
			   this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(228, 108);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(161, 36);
			   this->label1->TabIndex = 7;
			   this->label1->Text = L"Загаданное число\r\nбольше, чем:";
			   // 
			   // LabelResultText
			   // 
			   this->LabelResultText->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->LabelResultText->AutoSize = true;
			   this->LabelResultText->Location = System::Drawing::Point(345, 262);
			   this->LabelResultText->Name = L"LabelResultText";
			   this->LabelResultText->Size = System::Drawing::Size(0, 18);
			   this->LabelResultText->TabIndex = 8;
			   // 
			   // label2
			   // 
			   this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(26, 212);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(167, 18);
			   this->label2->TabIndex = 10;
			   this->label2->Text = L"Счетчик подсказок";
			   // 
			   // ButtonSave
			   // 
			   this->ButtonSave->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->ButtonSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->ButtonSave->Location = System::Drawing::Point(594, 212);
			   this->ButtonSave->Name = L"ButtonSave";
			   this->ButtonSave->Size = System::Drawing::Size(114, 28);
			   this->ButtonSave->TabIndex = 11;
			   this->ButtonSave->Text = L"Сохранить";
			   this->ButtonSave->UseVisualStyleBackColor = true;
			   this->ButtonSave->Click += gcnew System::EventHandler(this, &GameForm::ButtonSave_Click);
			   // 
			   // ButtonAgain
			   // 
			   this->ButtonAgain->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->ButtonAgain->Enabled = false;
			   this->ButtonAgain->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->ButtonAgain->Location = System::Drawing::Point(594, 71);
			   this->ButtonAgain->Name = L"ButtonAgain";
			   this->ButtonAgain->Size = System::Drawing::Size(114, 26);
			   this->ButtonAgain->TabIndex = 12;
			   this->ButtonAgain->Text = L"Ещё раз";
			   this->ButtonAgain->UseVisualStyleBackColor = true;
			   this->ButtonAgain->Click += gcnew System::EventHandler(this, &GameForm::ButtonAgain_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(680, 300);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(15, 18);
			   this->pictureBox1->TabIndex = 13;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GameForm::pictureBox1_Paint);
			   // 
			   // ButtonPCCont
			   // 
			   this->ButtonPCCont->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->ButtonPCCont->Location = System::Drawing::Point(369, 210);
			   this->ButtonPCCont->Name = L"ButtonPCCont";
			   this->ButtonPCCont->Size = System::Drawing::Size(125, 30);
			   this->ButtonPCCont->TabIndex = 14;
			   this->ButtonPCCont->Text = L"Продолжить";
			   this->ButtonPCCont->UseVisualStyleBackColor = true;
			   this->ButtonPCCont->Click += gcnew System::EventHandler(this, &GameForm::ButtonPCCont_Click);
			   // 
			   // GameForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(43)));
			   this->ClientSize = System::Drawing::Size(791, 361);
			   this->Controls->Add(this->ButtonPCCont);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->ButtonAgain);
			   this->Controls->Add(this->ButtonSave);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->LabelResultText);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->labelResult);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->ButtonCheckHint);
			   this->Controls->Add(this->LabelAnswer);
			   this->Controls->Add(this->LabelHint);
			   this->Controls->Add(this->TextBoxAnswer);
			   this->Controls->Add(this->TextBoxHint);
			   this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(237)));
			   this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			   this->Name = L"GameForm";
			   this->Text = L"Игра";
			   this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
		g = this->CreateGraphics();
		if (num == 0) {
			srand(time(NULL));
			num = 1 + rand() % 1000;
		}
		if (count < 0) {
			TextBoxHint->Clear();
			TextBoxHint->ReadOnly = true;
			ButtonCheckHint->Enabled = false;
		}
		if (comp) {
			button1->Enabled = false;
			ButtonCheckHint->Enabled = false;
			ButtonPCCont->Enabled = true;
			TextBoxAnswer->ReadOnly = true;
			TextBoxHint->ReadOnly = true;
		}
		else {
			ButtonPCCont->Enabled = false;
			TextBoxAnswer->ReadOnly = false;
			TextBoxHint->ReadOnly = false;
		}

	}
	private: System::Void ButtonCheckHint_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			tip = Convert::ToInt16(TextBoxHint->Text);
		}
		catch (Exception^ ex) {
			LabelResultText->Text = "Некорректные данные в поле 'Подсказка'\nНужно ввести целое положительное\nчисло от 1 до 1000!";
			return;
		}
		if (tip < 0 || tip > 1000) {
			LabelResultText->Text = "Некорректные данные в поле 'Подсказка'\nНужно ввести целое положительное\nчисло от 1 до 1000!";
			return;
		}
		count--;
		if (count >= 0) {
			if (num > tip) {
				LabelResultText->Text = "Загаданное число\nбольше, чем " + TextBoxHint->Text;
			}
			else {
				LabelResultText->Text = "Загаданное число\nменьше или равно " + TextBoxHint->Text;
			}
			if (count == 0) {
				ClearClock();
				ButtonCheckHint->Enabled = false;
				TextBoxHint->ReadOnly = true;
			}
			else {
				DrawClock();
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			ans = Convert::ToInt16(TextBoxAnswer->Text);
		}
		catch (Exception^ ex) {
			LabelResultText->Text = "Некорректные данные в поле 'Ответ'\nНужно ввести целое положительное\nчисло от 1 до 1000!";
			return;
		}
		if (ans < 0 || ans > 1000) {
			LabelResultText->Text = "Некорректные данные в поле 'Ответ'\nНужно ввести целое положительное\nчисло от 1 до 1000!";
			return;
		}
		if (ans == num) {
			LabelResultText->Text = "Вы выиграли!";
		}
		else {
			LabelResultText->Text = "Вы проиграли!\nЗагаданное число: " + Convert::ToString(num);
		}
		ButtonAgain->Enabled = true;
		button1->Enabled = false;
		ButtonCheckHint->Enabled = false;
		ButtonSave->Enabled = false;
	}
		   void Vector(float x0, float y0, float a, float l, Pen^ aPen) {
#define TORAD 0.0174532
			   float x, y;
			   x = x0 + l * Math::Cos(a * TORAD);
			   y = y0 - l * Math::Sin(a * TORAD);
			   g->DrawLine(aPen, x0, y0, x, y);
		   }
		   void DrawClock() {
			   Pen^ aPen = gcnew Pen(Color::White, 3);
			   ClearClock();
			   angle_count = 108 - (count * 36);
			   Vector(x0, y0, angle_count, R - 20, aPen);
			   g->FillEllipse(Brushes::Black, x0 - 3, y0 - 3, 6, 6);
		   }
		   void ClearClock() {
			   Pen^ cPen = gcnew Pen(Color::FromArgb(23, 33, 43), 4);
			   Vector(x0, y0, angle_count, R - 20, cPen);
		   }
		   void DrawPanel() {
			   R = 70;
			   x0 = R + 30;
			   y0 = R + 30;
			   this->pictureBox1->Size = System::Drawing::Size((R + 30) * 2, (R + 50) * 2);
			   angle_count = 108 - (count * 36);
			   int x, y, a, h;
			   a = 0;
			   h = 3;
#define TORAD 0.0174532
			   while (a < 360) {
				   x = x0 + R * Math::Cos(a * TORAD);
				   y = x0 - R * Math::Sin(a * TORAD);
				   g->DrawEllipse(Pens::White, x - 2, y - 2, 3, 3);
				   x = x0 + (R + 15) * Math::Cos(a * TORAD);
				   y = x0 - (R + 15) * Math::Sin(a * TORAD);
				   g->DrawString(h.ToString(), this->Font, Brushes::White, x - 5, y - 7);
				   h--;
				   if (h == 0) h = 10;
				   a = a + 36;
			   }
			   DrawClock();
		   }
	private: System::Void ButtonAgain_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		num = 1 + rand() % 1000;
		count = 10;
		TextBoxAnswer->Clear();
		TextBoxHint->Clear();
		if (player) {
			button1->Enabled = true;
			ButtonSave->Enabled = true;
			ButtonAgain->Enabled = false;
			ButtonCheckHint->Enabled = true;
			ButtonPCCont->Enabled = false;
		}
		else {
			button1->Enabled = false;
			ButtonSave->Enabled = true;
			ButtonAgain->Enabled = false;
			ButtonCheckHint->Enabled = false;
			ButtonPCCont->Enabled = true;
		}
		left = 1;
		right = 1000;
		LabelResultText->Text = "";
		DrawClock();
	}
	private: System::Void ButtonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "TXT Files(*.txt)|*.txt";
		saveFileDialog1->DefaultExt = "txt";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ file = File::CreateText(saveFileDialog1->FileName);
			file->WriteLine(num);
			file->WriteLine(count);
			if (player) {
				file->WriteLine("P");
			}
			else {
				file->WriteLine("C");
				file->WriteLine(left);
				file->WriteLine(right);
			}
			file->Close();
		}
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		DrawPanel();
	}
	private: System::Void ButtonPCCont_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count >= 0) {
			int middle = (left + right) / 2;
			TextBoxHint->Text = Convert::ToString(middle);
			ButtonCheckHint->Enabled = true;
			ButtonCheckHint->PerformClick();
			ButtonCheckHint->Enabled = false;
			if (num > middle) {
				left = middle;
			}
			else {
				right = middle;
			}
			if (count == 0) {
				ClearClock();
			}
			else {
				DrawClock();
			}
		}
		if (count <= 0) {
			if (left == num) {
				TextBoxAnswer->Text = Convert::ToString(left);
			}
			else {
				TextBoxAnswer->Text = Convert::ToString(right);
			}
			button1->Enabled = true;
			button1->PerformClick();
			ButtonPCCont->Enabled = false;
		}
	}
	};
}
