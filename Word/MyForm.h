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
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ insertImageButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ DIVIDEbutton;
	private: System::Windows::Forms::Button^ DELbutton;
	private: System::Windows::Forms::Button^ Cbutton;
	private: System::Windows::Forms::Button^ MULTIPLYbutton;
	private: System::Windows::Forms::Button^ NINE;
	private: System::Windows::Forms::Button^ EIGHT;
	private: System::Windows::Forms::Button^ SEVEN;
	private: System::Windows::Forms::Button^ MINUSbutton;
	private: System::Windows::Forms::Button^ SIX;
	private: System::Windows::Forms::Button^ FIVE;
	private: System::Windows::Forms::Button^ FOUR;
	private: System::Windows::Forms::Button^ PLUSbutton;
	private: System::Windows::Forms::Button^ THREE;
	private: System::Windows::Forms::Button^ TWO;
	private: System::Windows::Forms::Button^ ONE;
	private: System::Windows::Forms::Button^ EQUALSbutton;
	private: System::Windows::Forms::Button^ DOTbutton;
	private: System::Windows::Forms::TextBox^ txtOutput;
	private: System::Windows::Forms::Button^ ZERO;


		System::ComponentModel::IContainer^ components;



	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DIVIDEbutton = (gcnew System::Windows::Forms::Button());
			this->DELbutton = (gcnew System::Windows::Forms::Button());
			this->Cbutton = (gcnew System::Windows::Forms::Button());
			this->MULTIPLYbutton = (gcnew System::Windows::Forms::Button());
			this->NINE = (gcnew System::Windows::Forms::Button());
			this->EIGHT = (gcnew System::Windows::Forms::Button());
			this->SEVEN = (gcnew System::Windows::Forms::Button());
			this->MINUSbutton = (gcnew System::Windows::Forms::Button());
			this->SIX = (gcnew System::Windows::Forms::Button());
			this->FIVE = (gcnew System::Windows::Forms::Button());
			this->FOUR = (gcnew System::Windows::Forms::Button());
			this->PLUSbutton = (gcnew System::Windows::Forms::Button());
			this->THREE = (gcnew System::Windows::Forms::Button());
			this->TWO = (gcnew System::Windows::Forms::Button());
			this->ONE = (gcnew System::Windows::Forms::Button());
			this->EQUALSbutton = (gcnew System::Windows::Forms::Button());
			this->DOTbutton = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->ZERO = (gcnew System::Windows::Forms::Button());
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
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->fontSizeComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->insertImageButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
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
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->DIVIDEbutton);
			this->tabPage1->Controls->Add(this->DELbutton);
			this->tabPage1->Controls->Add(this->Cbutton);
			this->tabPage1->Controls->Add(this->MULTIPLYbutton);
			this->tabPage1->Controls->Add(this->NINE);
			this->tabPage1->Controls->Add(this->EIGHT);
			this->tabPage1->Controls->Add(this->SEVEN);
			this->tabPage1->Controls->Add(this->MINUSbutton);
			this->tabPage1->Controls->Add(this->SIX);
			this->tabPage1->Controls->Add(this->FIVE);
			this->tabPage1->Controls->Add(this->FOUR);
			this->tabPage1->Controls->Add(this->PLUSbutton);
			this->tabPage1->Controls->Add(this->THREE);
			this->tabPage1->Controls->Add(this->TWO);
			this->tabPage1->Controls->Add(this->ONE);
			this->tabPage1->Controls->Add(this->EQUALSbutton);
			this->tabPage1->Controls->Add(this->DOTbutton);
			this->tabPage1->Controls->Add(this->txtOutput);
			this->tabPage1->Controls->Add(this->ZERO);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(997, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Калькулятор";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->label1->Location = System::Drawing::Point(105, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 21);
			this->label1->TabIndex = 44;
			this->label1->Text = L"КАЛЬКУЛЯТОР";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// DIVIDEbutton
			// 
			this->DIVIDEbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->DIVIDEbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->DIVIDEbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DIVIDEbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DIVIDEbutton->ForeColor = System::Drawing::Color::White;
			this->DIVIDEbutton->Location = System::Drawing::Point(259, 128);
			this->DIVIDEbutton->Name = L"DIVIDEbutton";
			this->DIVIDEbutton->Size = System::Drawing::Size(75, 61);
			this->DIVIDEbutton->TabIndex = 43;
			this->DIVIDEbutton->Text = L"/";
			this->DIVIDEbutton->UseVisualStyleBackColor = false;
			this->DIVIDEbutton->Click += gcnew System::EventHandler(this, &MyForm::DIVIDEbutton_Click);
			// 
			// DELbutton
			// 
			this->DELbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->DELbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->DELbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DELbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DELbutton->ForeColor = System::Drawing::Color::White;
			this->DELbutton->Location = System::Drawing::Point(98, 128);
			this->DELbutton->Name = L"DELbutton";
			this->DELbutton->Size = System::Drawing::Size(155, 61);
			this->DELbutton->TabIndex = 42;
			this->DELbutton->Text = L"DEL";
			this->DELbutton->UseVisualStyleBackColor = false;
			this->DELbutton->Click += gcnew System::EventHandler(this, &MyForm::DELbutton_Click);
			// 
			// Cbutton
			// 
			this->Cbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->Cbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->Cbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cbutton->ForeColor = System::Drawing::Color::White;
			this->Cbutton->Location = System::Drawing::Point(17, 128);
			this->Cbutton->Name = L"Cbutton";
			this->Cbutton->Size = System::Drawing::Size(75, 61);
			this->Cbutton->TabIndex = 41;
			this->Cbutton->Text = L"C";
			this->Cbutton->UseVisualStyleBackColor = false;
			this->Cbutton->Click += gcnew System::EventHandler(this, &MyForm::Cbutton_Click);
			// 
			// MULTIPLYbutton
			// 
			this->MULTIPLYbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->MULTIPLYbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->MULTIPLYbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MULTIPLYbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MULTIPLYbutton->ForeColor = System::Drawing::Color::White;
			this->MULTIPLYbutton->Location = System::Drawing::Point(259, 195);
			this->MULTIPLYbutton->Name = L"MULTIPLYbutton";
			this->MULTIPLYbutton->Size = System::Drawing::Size(75, 61);
			this->MULTIPLYbutton->TabIndex = 40;
			this->MULTIPLYbutton->Text = L"*";
			this->MULTIPLYbutton->UseVisualStyleBackColor = false;
			this->MULTIPLYbutton->Click += gcnew System::EventHandler(this, &MyForm::MULTIPLYbutton_Click);
			// 
			// NINE
			// 
			this->NINE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->NINE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->NINE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NINE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NINE->ForeColor = System::Drawing::Color::White;
			this->NINE->Location = System::Drawing::Point(178, 195);
			this->NINE->Name = L"NINE";
			this->NINE->Size = System::Drawing::Size(75, 61);
			this->NINE->TabIndex = 39;
			this->NINE->Text = L"9";
			this->NINE->UseVisualStyleBackColor = false;
			this->NINE->Click += gcnew System::EventHandler(this, &MyForm::NINE_Click);
			// 
			// EIGHT
			// 
			this->EIGHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->EIGHT->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->EIGHT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EIGHT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EIGHT->ForeColor = System::Drawing::Color::White;
			this->EIGHT->Location = System::Drawing::Point(97, 195);
			this->EIGHT->Name = L"EIGHT";
			this->EIGHT->Size = System::Drawing::Size(75, 61);
			this->EIGHT->TabIndex = 38;
			this->EIGHT->Text = L"8";
			this->EIGHT->UseVisualStyleBackColor = false;
			this->EIGHT->Click += gcnew System::EventHandler(this, &MyForm::EIGHT_Click);
			// 
			// SEVEN
			// 
			this->SEVEN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SEVEN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->SEVEN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SEVEN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SEVEN->ForeColor = System::Drawing::Color::White;
			this->SEVEN->Location = System::Drawing::Point(16, 195);
			this->SEVEN->Name = L"SEVEN";
			this->SEVEN->Size = System::Drawing::Size(75, 61);
			this->SEVEN->TabIndex = 37;
			this->SEVEN->Text = L"7";
			this->SEVEN->UseVisualStyleBackColor = false;
			this->SEVEN->Click += gcnew System::EventHandler(this, &MyForm::SEVEN_Click);
			// 
			// MINUSbutton
			// 
			this->MINUSbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->MINUSbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->MINUSbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MINUSbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MINUSbutton->ForeColor = System::Drawing::Color::White;
			this->MINUSbutton->Location = System::Drawing::Point(259, 262);
			this->MINUSbutton->Name = L"MINUSbutton";
			this->MINUSbutton->Size = System::Drawing::Size(75, 61);
			this->MINUSbutton->TabIndex = 36;
			this->MINUSbutton->Text = L"-";
			this->MINUSbutton->UseVisualStyleBackColor = false;
			this->MINUSbutton->Click += gcnew System::EventHandler(this, &MyForm::MINUSbutton_Click);
			// 
			// SIX
			// 
			this->SIX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SIX->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->SIX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SIX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SIX->ForeColor = System::Drawing::Color::White;
			this->SIX->Location = System::Drawing::Point(178, 262);
			this->SIX->Name = L"SIX";
			this->SIX->Size = System::Drawing::Size(75, 61);
			this->SIX->TabIndex = 35;
			this->SIX->Text = L"6";
			this->SIX->UseVisualStyleBackColor = false;
			this->SIX->Click += gcnew System::EventHandler(this, &MyForm::SIX_Click);
			// 
			// FIVE
			// 
			this->FIVE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FIVE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->FIVE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FIVE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FIVE->ForeColor = System::Drawing::Color::White;
			this->FIVE->Location = System::Drawing::Point(97, 262);
			this->FIVE->Name = L"FIVE";
			this->FIVE->Size = System::Drawing::Size(75, 61);
			this->FIVE->TabIndex = 34;
			this->FIVE->Text = L"5";
			this->FIVE->UseVisualStyleBackColor = false;
			this->FIVE->Click += gcnew System::EventHandler(this, &MyForm::FIVE_Click);
			// 
			// FOUR
			// 
			this->FOUR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FOUR->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->FOUR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FOUR->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FOUR->ForeColor = System::Drawing::Color::White;
			this->FOUR->Location = System::Drawing::Point(16, 262);
			this->FOUR->Name = L"FOUR";
			this->FOUR->Size = System::Drawing::Size(75, 61);
			this->FOUR->TabIndex = 33;
			this->FOUR->Text = L"4";
			this->FOUR->UseVisualStyleBackColor = false;
			this->FOUR->Click += gcnew System::EventHandler(this, &MyForm::FOUR_Click);
			// 
			// PLUSbutton
			// 
			this->PLUSbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->PLUSbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->PLUSbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PLUSbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PLUSbutton->ForeColor = System::Drawing::Color::White;
			this->PLUSbutton->Location = System::Drawing::Point(259, 329);
			this->PLUSbutton->Name = L"PLUSbutton";
			this->PLUSbutton->Size = System::Drawing::Size(75, 61);
			this->PLUSbutton->TabIndex = 32;
			this->PLUSbutton->Text = L"+";
			this->PLUSbutton->UseVisualStyleBackColor = false;
			this->PLUSbutton->Click += gcnew System::EventHandler(this, &MyForm::PLUSbutton_Click);
			// 
			// THREE
			// 
			this->THREE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->THREE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->THREE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->THREE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->THREE->ForeColor = System::Drawing::Color::White;
			this->THREE->Location = System::Drawing::Point(178, 329);
			this->THREE->Name = L"THREE";
			this->THREE->Size = System::Drawing::Size(75, 61);
			this->THREE->TabIndex = 31;
			this->THREE->Text = L"3";
			this->THREE->UseVisualStyleBackColor = false;
			this->THREE->Click += gcnew System::EventHandler(this, &MyForm::THREE_Click);
			// 
			// TWO
			// 
			this->TWO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->TWO->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->TWO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TWO->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TWO->ForeColor = System::Drawing::Color::White;
			this->TWO->Location = System::Drawing::Point(97, 329);
			this->TWO->Name = L"TWO";
			this->TWO->Size = System::Drawing::Size(75, 61);
			this->TWO->TabIndex = 30;
			this->TWO->Text = L"2";
			this->TWO->UseVisualStyleBackColor = false;
			this->TWO->Click += gcnew System::EventHandler(this, &MyForm::TWO_Click);
			// 
			// ONE
			// 
			this->ONE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ONE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ONE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ONE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ONE->ForeColor = System::Drawing::Color::White;
			this->ONE->Location = System::Drawing::Point(16, 329);
			this->ONE->Name = L"ONE";
			this->ONE->Size = System::Drawing::Size(75, 61);
			this->ONE->TabIndex = 29;
			this->ONE->Text = L"1";
			this->ONE->UseVisualStyleBackColor = false;
			this->ONE->Click += gcnew System::EventHandler(this, &MyForm::ONE_Click);
			// 
			// EQUALSbutton
			// 
			this->EQUALSbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EQUALSbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EQUALSbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EQUALSbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EQUALSbutton->ForeColor = System::Drawing::Color::White;
			this->EQUALSbutton->Location = System::Drawing::Point(259, 396);
			this->EQUALSbutton->Name = L"EQUALSbutton";
			this->EQUALSbutton->Size = System::Drawing::Size(75, 61);
			this->EQUALSbutton->TabIndex = 28;
			this->EQUALSbutton->Text = L"=";
			this->EQUALSbutton->UseVisualStyleBackColor = false;
			this->EQUALSbutton->Click += gcnew System::EventHandler(this, &MyForm::EQUALSbutton_Click);
			// 
			// DOTbutton
			// 
			this->DOTbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->DOTbutton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->DOTbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DOTbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DOTbutton->ForeColor = System::Drawing::Color::White;
			this->DOTbutton->Location = System::Drawing::Point(178, 396);
			this->DOTbutton->Name = L"DOTbutton";
			this->DOTbutton->Size = System::Drawing::Size(75, 61);
			this->DOTbutton->TabIndex = 27;
			this->DOTbutton->Text = L",";
			this->DOTbutton->UseVisualStyleBackColor = false;
			this->DOTbutton->Click += gcnew System::EventHandler(this, &MyForm::DOTbutton_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->txtOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOutput->ForeColor = System::Drawing::Color::White;
			this->txtOutput->Location = System::Drawing::Point(17, 57);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(318, 54);
			this->txtOutput->TabIndex = 26;
			this->txtOutput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtOutput->TextChanged += gcnew System::EventHandler(this, &MyForm::txtOutput_TextChanged);
			// 
			// ZERO
			// 
			this->ZERO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ZERO->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ZERO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ZERO->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ZERO->ForeColor = System::Drawing::Color::White;
			this->ZERO->Location = System::Drawing::Point(16, 396);
			this->ZERO->Name = L"ZERO";
			this->ZERO->Size = System::Drawing::Size(156, 61);
			this->ZERO->TabIndex = 25;
			this->ZERO->Text = L"0";
			this->ZERO->UseVisualStyleBackColor = false;
			this->ZERO->Click += gcnew System::EventHandler(this, &MyForm::ZERO_Click);
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
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(18) {
				this->createToolStripMenuItem,
					this->openToolStripButton, this->saveToolStripButton, this->toolStripSeparator, this->cutToolStripButton, this->copyToolStripButton,
					this->pasteToolStripButton, this->boldButton, this->italicButton, this->underlineButton, this->colorButton, this->toolStripSeparator1,
					this->alignLeftButton, this->alignCenterButton, this->alignRightButton, this->toolStripSeparator2, this->fontSizeComboBox, this->insertImageButton
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
			this->createToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createToolStripMenuItem.Image")));
			this->createToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(23, 22);
			this->createToolStripMenuItem->Text = L"&Создать";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createToolStripMenuItem_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Открыть";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
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
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(23, 22);
			this->cutToolStripButton->Text = L"В&ырезать";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(23, 22);
			this->copyToolStripButton->Text = L"&Копировать";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
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
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// fontSizeComboBox
			// 
			this->fontSizeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"8", L"9", L"10", L"11", L"12", L"14",
					L"16", L"18", L"20", L"22", L"24", L"26", L"28", L"36", L"48", L"72"
			});
			this->fontSizeComboBox->Name = L"fontSizeComboBox";
			this->fontSizeComboBox->Size = System::Drawing::Size(75, 25);
			this->fontSizeComboBox->Text = L"Шрифт";
			this->fontSizeComboBox->ToolTipText = L"Размер шрифта";
			this->fontSizeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fontSizeComboBox_SelectedIndexChanged);
			// 
			// insertImageButton
			// 
			this->insertImageButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->insertImageButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insertImageButton.Image")));
			this->insertImageButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->insertImageButton->Name = L"insertImageButton";
			this->insertImageButton->Size = System::Drawing::Size(23, 22);
			this->insertImageButton->Text = L"Фото";
			this->insertImageButton->Click += gcnew System::EventHandler(this, &MyForm::insertImageButton_Click);
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
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
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
		int selectionStart = richTextBox1->SelectionStart;
		int selectionLength = richTextBox1->SelectionLength;

		if (selectionLength > 0) {
			System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
			if (currentFont == nullptr) currentFont = richTextBox1->Font;

			float currentSize = currentFont->Size;
			System::Drawing::FontFamily^ currentFamily = currentFont->FontFamily;

			if (currentFont->Italic)
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFamily, currentSize,
					currentFont->Style & ~System::Drawing::FontStyle::Italic);
			else
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFamily, currentSize,
					currentFont->Style | System::Drawing::FontStyle::Italic);
		}
		else {
			System::Drawing::Font^ currentFont = richTextBox1->Font;
			float currentSize = currentFont->Size;
			System::Drawing::FontFamily^ currentFamily = currentFont->FontFamily;

			if (currentFont->Italic)
				richTextBox1->Font = gcnew System::Drawing::Font(currentFamily, currentSize,
					currentFont->Style & ~System::Drawing::FontStyle::Italic);
			else
				richTextBox1->Font = gcnew System::Drawing::Font(currentFamily, currentSize,
					currentFont->Style | System::Drawing::FontStyle::Italic);
		}

		richTextBox1->Focus();
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
private: System::Void insertImageButton_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Изображения|*.bmp;*.jpg;*.jpeg;*.png;*.gif;*.tiff|Все файлы|*.*";
	openFileDialog->Title = "Выберите изображение для вставки";
	openFileDialog->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::MyPictures);

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			// Сохраняем текущее содержимое буфера обмена (исправленная строка)
			System::Windows::Forms::IDataObject^ savedClipboard = Clipboard::GetDataObject();

			// Загружаем изображение из выбранного файла
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(openFileDialog->FileName);

			// Копируем изображение в буфер обмена
			Clipboard::SetImage(image);

			// Вставляем изображение
			richTextBox1->Paste();

			toolStripStatusLabel1->Text = "Изображение вставлено: " + System::IO::Path::GetFileName(openFileDialog->FileName);

			// Восстанавливаем сохраненное содержимое буфера обмена
			if (savedClipboard != nullptr) {
				Clipboard::SetDataObject(savedClipboard);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при вставке изображения: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	// ничего не делаем
}

private: System::Void txtOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// можно оставить пустым
}

	   // Цифры
private: System::Void ONE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "1";
}

private: System::Void TWO_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "2";
}

private: System::Void THREE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "3";
}

private: System::Void FOUR_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "4";
}

private: System::Void FIVE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "5";
}

private: System::Void SIX_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "6";
}

private: System::Void SEVEN_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "7";
}

private: System::Void EIGHT_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "8";
}

private: System::Void NINE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "9";
}

private: System::Void ZERO_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text += "0";
}

	   // Точка (десятичный разделитель)
private: System::Void DOTbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, есть ли уже точка в текущем числе (простая проверка последнего символа)
	if (!txtOutput->Text->EndsWith(",") && !txtOutput->Text->Contains(",")) {
		txtOutput->Text += ",";
	}
}

	   // Операции
private: System::Void PLUSbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Добавляем оператор, если последний символ не оператор
	if (!IsLastCharOperator()) {
		txtOutput->Text += "+";
	}
}

private: System::Void MINUSbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!IsLastCharOperator()) {
		txtOutput->Text += "-";
	}
}

private: System::Void MULTIPLYbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!IsLastCharOperator()) {
		txtOutput->Text += "*";
	}
}

private: System::Void DIVIDEbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!IsLastCharOperator()) {
		txtOutput->Text += "/";
	}
}

	   // Очистка
private: System::Void Cbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOutput->Text = "";
}

	   // Удаление последнего символа
private: System::Void DELbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtOutput->Text->Length > 0) {
		txtOutput->Text = txtOutput->Text->Substring(0, txtOutput->Text->Length - 1);
	}
}

	   // Равно
private: System::Void EQUALSbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Используем DataTable для вычисления выражения
		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		// Заменяем запятую на точку для вычислений (если требуется)
		String^ expression = txtOutput->Text->Replace(",", ".");
		Object^ result = table->Compute(expression, "");
		txtOutput->Text = result->ToString()->Replace(".", ",");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка в выражении", "Калькулятор", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // Вспомогательный метод для проверки последнего символа
private: bool IsLastCharOperator() {
	if (txtOutput->Text->Length == 0) return false;
	wchar_t last = txtOutput->Text[txtOutput->Text->Length - 1];
	return (last == '+' || last == '-' || last == '*' || last == '/');
}
};
}