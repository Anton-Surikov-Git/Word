#pragma once

namespace Word {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			InitializeStatusStrip();

			richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::UpdateStatusBar);

			isModified = false;
			currentFileName = nullptr;
			this->Text = "Мой Word";

			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TabControl^ tabControl1;
		System::Windows::Forms::TabPage^ tabPage1;
		System::Windows::Forms::TabPage^ tabPage2;
		System::Windows::Forms::TabPage^ tabPage3;
		System::Windows::Forms::TabPage^ tabPage4;
		System::Windows::Forms::RichTextBox^ richTextBox1;
		System::Windows::Forms::StatusStrip^ statusStrip1;
		System::Windows::Forms::ToolStrip^ toolStrip1;
		System::Windows::Forms::ToolStripButton^ createToolStripMenuItem;
		System::Windows::Forms::ToolStripButton^ openToolStripButton;
		System::Windows::Forms::ToolStripButton^ saveToolStripButton;
		System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
		System::Windows::Forms::ToolStripButton^ cutToolStripButton;
		System::Windows::Forms::ToolStripButton^ copyToolStripButton;
		System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
		System::Windows::Forms::StatusStrip^ statusStrip2;

		// Добавленные элементы
		System::Windows::Forms::ToolStripButton^ boldButton;
		System::Windows::Forms::ToolStripButton^ italicButton;
		System::Windows::Forms::ToolStripButton^ underlineButton;
		System::Windows::Forms::ToolStripButton^ colorButton;

		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;

		bool isModified;
		String^ currentFileName;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ alignLeftButton;
	private: System::Windows::Forms::ToolStripButton^ alignCenterButton;
	private: System::Windows::Forms::ToolStripButton^ alignRightButton;
	private: System::Windows::Forms::ToolStripComboBox^ fontSizeComboBox;


		System::ComponentModel::IContainer^ components;

	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->boldButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->italicButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->underlineButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->colorButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->alignLeftButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->alignCenterButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->alignRightButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->fontSizeComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1005, 712);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(997, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Калькулятор";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->statusStrip2);
			this->tabPage2->Controls->Add(this->toolStrip1);
			this->tabPage2->Controls->Add(this->statusStrip1);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(997, 686);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Word";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// statusStrip2
			// 
			this->statusStrip2->Location = System::Drawing::Point(3, 639);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(991, 22);
			this->statusStrip2->TabIndex = 3;
			this->statusStrip2->Text = L"statusStrip2";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->createToolStripMenuItem,
					this->openToolStripButton, this->saveToolStripButton, this->toolStripSeparator, this->cutToolStripButton, this->copyToolStripButton,
					this->pasteToolStripButton, this->boldButton, this->italicButton, this->underlineButton, this->colorButton, this->toolStripSeparator1,
					this->alignLeftButton, this->alignCenterButton, this->alignRightButton, this->fontSizeComboBox
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(991, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->createToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(23, 22);
			this->createToolStripMenuItem->Text = L"&Создать";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createToolStripMenuItem_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Открыть";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(23, 22);
			this->saveToolStripButton->Text = L"&Сохранить";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripButton_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(23, 22);
			this->cutToolStripButton->Text = L"В&ырезать";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(23, 22);
			this->copyToolStripButton->Text = L"&Копировать";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(23, 22);
			this->pasteToolStripButton->Text = L"Вст&авка";
			// 
			// boldButton
			// 
			this->boldButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->boldButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->boldButton->Name = L"boldButton";
			this->boldButton->Size = System::Drawing::Size(23, 22);
			this->boldButton->Text = L"B";
			this->boldButton->ToolTipText = L"Жирный";
			this->boldButton->Click += gcnew System::EventHandler(this, &MyForm::boldButton_Click);
			// 
			// italicButton
			// 
			this->italicButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->italicButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic));
			this->italicButton->Name = L"italicButton";
			this->italicButton->Size = System::Drawing::Size(23, 22);
			this->italicButton->Text = L"I";
			this->italicButton->ToolTipText = L"Курсив";
			this->italicButton->Click += gcnew System::EventHandler(this, &MyForm::italicButton_Click);
			// 
			// underlineButton
			// 
			this->underlineButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->underlineButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline));
			this->underlineButton->Name = L"underlineButton";
			this->underlineButton->Size = System::Drawing::Size(23, 22);
			this->underlineButton->Text = L"U";
			this->underlineButton->ToolTipText = L"Подчёркнутый";
			this->underlineButton->Click += gcnew System::EventHandler(this, &MyForm::underlineButton_Click);
			// 
			// colorButton
			// 
			this->colorButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->colorButton->ForeColor = System::Drawing::Color::Red;
			this->colorButton->Name = L"colorButton";
			this->colorButton->Size = System::Drawing::Size(23, 22);
			this->colorButton->Text = L"A";
			this->colorButton->ToolTipText = L"Цвет текста";
			this->colorButton->Click += gcnew System::EventHandler(this, &MyForm::colorButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// alignLeftButton
			// 
			this->alignLeftButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->alignLeftButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alignLeftButton.Image")));
			this->alignLeftButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->alignLeftButton->Name = L"alignLeftButton";
			this->alignLeftButton->Size = System::Drawing::Size(23, 22);
			this->alignLeftButton->Text = L"Выровнять по левому краю";
			this->alignLeftButton->Click += gcnew System::EventHandler(this, &MyForm::alignLeftButton_Click);
			// 
			// alignCenterButton
			// 
			this->alignCenterButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->alignCenterButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alignCenterButton.Image")));
			this->alignCenterButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->alignCenterButton->Name = L"alignCenterButton";
			this->alignCenterButton->Size = System::Drawing::Size(23, 22);
			this->alignCenterButton->Text = L"Выровнять по центру";
			this->alignCenterButton->Click += gcnew System::EventHandler(this, &MyForm::alignCenterButton_Click);
			// 
			// alignRightButton
			// 
			this->alignRightButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->alignRightButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alignRightButton.Image")));
			this->alignRightButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->alignRightButton->Name = L"alignRightButton";
			this->alignRightButton->Size = System::Drawing::Size(23, 22);
			this->alignRightButton->Text = L"Выровнять по правому краю";
			this->alignRightButton->Click += gcnew System::EventHandler(this, &MyForm::alignRightButton_Click);
			// 
			// fontSizeComboBox
			// 
			this->fontSizeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"8", L"9", L"10", L"11", L"12", L"14",
					L"16", L"18", L"20", L"22", L"24", L"26", L"28", L"36", L"48", L"72"
			});
			this->fontSizeComboBox->Name = L"fontSizeComboBox";
			this->fontSizeComboBox->Size = System::Drawing::Size(75, 25);
			this->fontSizeComboBox->Text = L"12";
			this->fontSizeComboBox->ToolTipText = L"Размер шрифта";
			this->fontSizeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fontSizeComboBox_SelectedIndexChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(3, 661);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(991, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(7, 37);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1014, 624);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(997, 686);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Paint";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(997, 686);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Опрос";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 737);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);

		}

	private:
		void InitializeStatusStrip() {
			toolStripStatusLabel1 = gcnew System::Windows::Forms::ToolStripStatusLabel();
			toolStripStatusLabel2 = gcnew System::Windows::Forms::ToolStripStatusLabel();
			toolStripStatusLabel3 = gcnew System::Windows::Forms::ToolStripStatusLabel();

			toolStripStatusLabel1->Text = "Готов";
			toolStripStatusLabel1->Spring = true;
			toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

			toolStripStatusLabel2->Text = "Символов: 0";
			toolStripStatusLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

			toolStripStatusLabel3->Text = "Стр: 1 Кол: 0";
			toolStripStatusLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

			statusStrip1->Items->Add(toolStripStatusLabel1);
			statusStrip1->Items->Add(toolStripStatusLabel2);
			statusStrip1->Items->Add(toolStripStatusLabel3);
		}

		void UpdateStatusBar(System::Object^ sender, System::EventArgs^ e) {
			int charCount = richTextBox1->Text->Length;
			toolStripStatusLabel2->Text = "Символов: " + charCount;

			int selectionStart = richTextBox1->SelectionStart;
			int lineIndex = richTextBox1->GetLineFromCharIndex(selectionStart);
			int columnIndex = selectionStart - richTextBox1->GetFirstCharIndexFromLine(lineIndex);

			toolStripStatusLabel3->Text = "Стр: " + (lineIndex + 1) + " Кол: " + (columnIndex + 1);

			if (isModified) {
				if (!this->Text->EndsWith("*")) {
					this->Text = "Мой Word *";
				}
			}
			else {
				if (this->Text->EndsWith("*")) {
					this->Text = "Мой Word";
				}
			}
		}

		void NewDocument() {
			if (isModified) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Сохранить изменения в текущем документе?",
					"Подтверждение",
					MessageBoxButtons::YesNoCancel,
					MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					SaveDocument();
				}
				else if (result == System::Windows::Forms::DialogResult::Cancel) {
					return;
				}
			}

			richTextBox1->Clear();
			currentFileName = nullptr;
			isModified = false;
			toolStripStatusLabel1->Text = "Новый документ";
			this->Text = "Мой Word";
		}

		void OpenDocument() {
			if (isModified) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Сохранить изменения в текущем документе?",
					"Подтверждение",
					MessageBoxButtons::YesNoCancel,
					MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					SaveDocument();
				}
				else if (result == System::Windows::Forms::DialogResult::Cancel) {
					return;
				}
			}

			OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			openFileDialog->Filter = "Rich Text Format (*.rtf)|*.rtf|Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			openFileDialog->FilterIndex = 1;
			openFileDialog->RestoreDirectory = true;

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					String^ ext = System::IO::Path::GetExtension(openFileDialog->FileName)->ToLower();
					if (ext == ".rtf") {
						richTextBox1->LoadFile(openFileDialog->FileName, RichTextBoxStreamType::RichText);
					}
					else {
						richTextBox1->LoadFile(openFileDialog->FileName, RichTextBoxStreamType::PlainText);
					}

					currentFileName = openFileDialog->FileName;
					isModified = false;
					toolStripStatusLabel1->Text = "Открыт: " + System::IO::Path::GetFileName(currentFileName);
					this->Text = "Мой Word - " + System::IO::Path::GetFileName(currentFileName);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при открытии файла: " + ex->Message, "Ошибка",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		void SaveDocument() {
			if (currentFileName == nullptr) {
				SaveDocumentAs();
				return;
			}

			try {
				String^ ext = System::IO::Path::GetExtension(currentFileName)->ToLower();
				if (ext == ".rtf") {
					richTextBox1->SaveFile(currentFileName, RichTextBoxStreamType::RichText);
				}
				else {
					richTextBox1->SaveFile(currentFileName, RichTextBoxStreamType::PlainText);
				}

				isModified = false;
				toolStripStatusLabel1->Text = "Сохранено: " + System::IO::Path::GetFileName(currentFileName);
				this->Text = "Мой Word - " + System::IO::Path::GetFileName(currentFileName);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при сохранении файла: " + ex->Message, "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void SaveDocumentAs() {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "Rich Text Format (*.rtf)|*.rtf|Text Files (*.txt)|*.txt";
			saveFileDialog->FilterIndex = 1;
			saveFileDialog->RestoreDirectory = true;
			saveFileDialog->FileName = "Документ1.rtf";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				currentFileName = saveFileDialog->FileName;
				SaveDocument();
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		NewDocument();
	}

	private: System::Void openToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenDocument();
	}

	private: System::Void saveToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveDocument();
	}

	private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectedText != "") {
			richTextBox1->Cut();
			toolStripStatusLabel1->Text = "Вырезано";
		}
	}

	private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectedText != "") {
			richTextBox1->Copy();
			toolStripStatusLabel1->Text = "Скопировано";
		}
	}

	private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Clipboard::ContainsText()) {
			richTextBox1->Paste();
			toolStripStatusLabel1->Text = "Вставлено";
		}
	}

	private: System::Void boldButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
		if (currentFont == nullptr) currentFont = richTextBox1->Font;

		if (currentFont->Bold)
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style & ~System::Drawing::FontStyle::Bold);
		else
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style | System::Drawing::FontStyle::Bold);
	}

	private: System::Void italicButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
		if (currentFont == nullptr) currentFont = richTextBox1->Font;

		if (currentFont->Italic)
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style & ~System::Drawing::FontStyle::Italic);
		else
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style | System::Drawing::FontStyle::Italic);
	}

	private: System::Void underlineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
		if (currentFont == nullptr) currentFont = richTextBox1->Font;

		if (currentFont->Underline)
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style & ~System::Drawing::FontStyle::Underline);
		else
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont, currentFont->Style | System::Drawing::FontStyle::Underline);
	}

	private: System::Void colorButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ColorDialog^ colorDialog = gcnew ColorDialog();
		colorDialog->Color = richTextBox1->SelectionColor;

		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->SelectionColor = colorDialog->Color;
		}
	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!isModified) {
			isModified = true;
			UpdateStatusBar(sender, e);
		}
		else {
			UpdateStatusBar(sender, e);
		}
	}
	private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void alignLeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
	toolStripStatusLabel1->Text = "Выравнивание: влево";
}
private: System::Void alignCenterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
	toolStripStatusLabel1->Text = "Выравнивание: по центру";
}
private: System::Void alignRightButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
	toolStripStatusLabel1->Text = "Выравнивание: вправо";
}
private: System::Void fontSizeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (fontSizeComboBox->SelectedItem != nullptr) {
		float newSize = float::Parse(fontSizeComboBox->SelectedItem->ToString());
		System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
		if (currentFont == nullptr) currentFont = richTextBox1->Font;
		richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, newSize, currentFont->Style);
	}
}
};
}