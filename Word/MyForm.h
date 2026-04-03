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
			isCalculatorUsed = false;
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





















		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
		System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;

		bool isModified;
		// Переменные для Paint
		bool isDrawing;
		Point lastPoint;
		Color currentColor;
		int penThickness;
		bool isErasing;
		String^ currentFileName;
		// Флаг для отслеживания использования калькулятора
		bool isCalculatorUsed;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::Button^ btnCheckAnswers;
	private: System::Windows::Forms::Button^ btnUpdateQuestions;
	private: System::Windows::Forms::GroupBox^ grpQuestion2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ cmbAnswer2;
	private: System::Windows::Forms::Label^ lblQuestion2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cmbAnswer1;
	private: System::Windows::Forms::Label^ lblQuestion1;
	private: System::Windows::Forms::GroupBox^ grpEmployeeInfo;
	private: System::Windows::Forms::NumericUpDown^ numExperience;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numAge;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::StatusStrip^ statusStrip2;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ boldButton;
	private: System::Windows::Forms::ToolStripButton^ italicButton;
	private: System::Windows::Forms::ToolStripButton^ underlineButton;
	private: System::Windows::Forms::ToolStripButton^ colorButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ alignLeftButton;
	private: System::Windows::Forms::ToolStripButton^ alignCenterButton;
	private: System::Windows::Forms::ToolStripButton^ alignRightButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ bulletListButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripComboBox^ fontSizeComboBox;
	private: System::Windows::Forms::ToolStripButton^ insertImageButton;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::ListBox^ lstHistory;
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
	private: System::Windows::Forms::TabControl^ tabControl1;


private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ btnSaveHistory2;
private: System::Windows::Forms::ToolStripMenuItem^ btnClearHistory2;


private: System::Windows::Forms::ToolStrip^ toolStrip2;
private: System::Windows::Forms::ToolStripMenuItem^ btnOpenHistory2;
private: System::Windows::Forms::PictureBox^ paintCanvas;
private: System::Windows::Forms::ToolStripButton^ penButton;
private: System::Windows::Forms::ToolStripButton^ eraserButton;
private: System::Windows::Forms::ToolStripButton^ colorButtonPaint;

private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
private: System::Windows::Forms::ToolStripButton^ clearButtonPaint;
private: System::Windows::Forms::ToolStripButton^ saveImageButton;
private: System::Windows::Forms::ToolStripButton^ loadImageButtonPaint;
private: System::Windows::Forms::ToolStripComboBox^ thicknessComboBox;


		System::ComponentModel::IContainer^ components;



	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->btnCheckAnswers = (gcnew System::Windows::Forms::Button());
			this->btnUpdateQuestions = (gcnew System::Windows::Forms::Button());
			this->grpQuestion2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbAnswer2 = (gcnew System::Windows::Forms::ComboBox());
			this->lblQuestion2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbAnswer1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblQuestion1 = (gcnew System::Windows::Forms::Label());
			this->grpEmployeeInfo = (gcnew System::Windows::Forms::GroupBox());
			this->numExperience = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->bulletListButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->fontSizeComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->insertImageButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lstHistory = (gcnew System::Windows::Forms::ListBox());
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnSaveHistory2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnClearHistory2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnOpenHistory2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->paintCanvas = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->penButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->eraserButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->colorButtonPaint = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->clearButtonPaint = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveImageButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->loadImageButtonPaint = (gcnew System::Windows::Forms::ToolStripButton());
			this->thicknessComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->tabPage4->SuspendLayout();
			this->grpQuestion2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->grpEmployeeInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numExperience))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAge))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintCanvas))->BeginInit();
			this->toolStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->lblResult);
			this->tabPage4->Controls->Add(this->btnCheckAnswers);
			this->tabPage4->Controls->Add(this->btnUpdateQuestions);
			this->tabPage4->Controls->Add(this->grpQuestion2);
			this->tabPage4->Controls->Add(this->groupBox1);
			this->tabPage4->Controls->Add(this->grpEmployeeInfo);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(997, 686);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Опрос";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(15, 370);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(18, 17);
			this->lblResult->TabIndex = 5;
			this->lblResult->Text = L"\"\"";
			this->lblResult->Click += gcnew System::EventHandler(this, &MyForm::lblResult_Click);
			// 
			// btnCheckAnswers
			// 
			this->btnCheckAnswers->Location = System::Drawing::Point(430, 100);
			this->btnCheckAnswers->Name = L"btnCheckAnswers";
			this->btnCheckAnswers->Size = System::Drawing::Size(120, 30);
			this->btnCheckAnswers->TabIndex = 4;
			this->btnCheckAnswers->Text = L"Проверить ответы";
			this->btnCheckAnswers->UseVisualStyleBackColor = true;
			this->btnCheckAnswers->Click += gcnew System::EventHandler(this, &MyForm::btnCheckAnswers_Click);
			// 
			// btnUpdateQuestions
			// 
			this->btnUpdateQuestions->Location = System::Drawing::Point(430, 50);
			this->btnUpdateQuestions->Name = L"btnUpdateQuestions";
			this->btnUpdateQuestions->Size = System::Drawing::Size(120, 30);
			this->btnUpdateQuestions->TabIndex = 3;
			this->btnUpdateQuestions->Text = L"Обновить вопросы";
			this->btnUpdateQuestions->UseVisualStyleBackColor = true;
			this->btnUpdateQuestions->Click += gcnew System::EventHandler(this, &MyForm::btnUpdateQuestions_Click);
			// 
			// grpQuestion2
			// 
			this->grpQuestion2->Controls->Add(this->comboBox1);
			this->grpQuestion2->Controls->Add(this->cmbAnswer2);
			this->grpQuestion2->Controls->Add(this->lblQuestion2);
			this->grpQuestion2->Location = System::Drawing::Point(15, 260);
			this->grpQuestion2->Name = L"grpQuestion2";
			this->grpQuestion2->Size = System::Drawing::Size(400, 100);
			this->grpQuestion2->TabIndex = 2;
			this->grpQuestion2->TabStop = false;
			this->grpQuestion2->Text = L"Вопрос 2";
			this->grpQuestion2->Enter += gcnew System::EventHandler(this, &MyForm::grpQuestion2_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(15, 260);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(400, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// cmbAnswer2
			// 
			this->cmbAnswer2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbAnswer2->FormattingEnabled = true;
			this->cmbAnswer2->Location = System::Drawing::Point(10, 50);
			this->cmbAnswer2->Name = L"cmbAnswer2";
			this->cmbAnswer2->Size = System::Drawing::Size(360, 21);
			this->cmbAnswer2->TabIndex = 1;
			this->cmbAnswer2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbAnswer2_SelectedIndexChanged);
			// 
			// lblQuestion2
			// 
			this->lblQuestion2->Location = System::Drawing::Point(10, 25);
			this->lblQuestion2->Name = L"lblQuestion2";
			this->lblQuestion2->Size = System::Drawing::Size(380, 20);
			this->lblQuestion2->TabIndex = 0;
			this->lblQuestion2->Text = L"(будет выбран на основе стажа)";
			this->lblQuestion2->Click += gcnew System::EventHandler(this, &MyForm::lblQuestion2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbAnswer1);
			this->groupBox1->Controls->Add(this->lblQuestion1);
			this->groupBox1->Location = System::Drawing::Point(15, 150);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вопрос 1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// cmbAnswer1
			// 
			this->cmbAnswer1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbAnswer1->FormattingEnabled = true;
			this->cmbAnswer1->Location = System::Drawing::Point(10, 50);
			this->cmbAnswer1->Name = L"cmbAnswer1";
			this->cmbAnswer1->Size = System::Drawing::Size(360, 21);
			this->cmbAnswer1->TabIndex = 1;
			this->cmbAnswer1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbAnswer1_SelectedIndexChanged);
			// 
			// lblQuestion1
			// 
			this->lblQuestion1->Location = System::Drawing::Point(10, 25);
			this->lblQuestion1->Name = L"lblQuestion1";
			this->lblQuestion1->Size = System::Drawing::Size(380, 20);
			this->lblQuestion1->TabIndex = 0;
			this->lblQuestion1->Text = L"(будет выбран на основе возраста)\r\n";
			this->lblQuestion1->Click += gcnew System::EventHandler(this, &MyForm::lblQuestion1_Click);
			// 
			// grpEmployeeInfo
			// 
			this->grpEmployeeInfo->Controls->Add(this->numExperience);
			this->grpEmployeeInfo->Controls->Add(this->label3);
			this->grpEmployeeInfo->Controls->Add(this->numAge);
			this->grpEmployeeInfo->Controls->Add(this->label2);
			this->grpEmployeeInfo->Location = System::Drawing::Point(15, 15);
			this->grpEmployeeInfo->Name = L"grpEmployeeInfo";
			this->grpEmployeeInfo->Size = System::Drawing::Size(400, 120);
			this->grpEmployeeInfo->TabIndex = 0;
			this->grpEmployeeInfo->TabStop = false;
			this->grpEmployeeInfo->Text = L"Информация о сотруднике";
			this->grpEmployeeInfo->Enter += gcnew System::EventHandler(this, &MyForm::grpEmployeeInfo_Enter);
			// 
			// numExperience
			// 
			this->numExperience->Location = System::Drawing::Point(120, 57);
			this->numExperience->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numExperience->Name = L"numExperience";
			this->numExperience->Size = System::Drawing::Size(120, 20);
			this->numExperience->TabIndex = 3;
			this->numExperience->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numExperience->ValueChanged += gcnew System::EventHandler(this, &MyForm::numExperience_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Стаж работы (лет)";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// numAge
			// 
			this->numAge->Location = System::Drawing::Point(80, 27);
			this->numAge->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->numAge->Name = L"numAge";
			this->numAge->Size = System::Drawing::Size(120, 20);
			this->numAge->TabIndex = 1;
			this->numAge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numAge->ValueChanged += gcnew System::EventHandler(this, &MyForm::numAge_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Возраст:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
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
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(20) {
				this->createToolStripMenuItem,
					this->openToolStripButton, this->saveToolStripButton, this->toolStripSeparator, this->cutToolStripButton, this->copyToolStripButton,
					this->pasteToolStripButton, this->boldButton, this->italicButton, this->underlineButton, this->colorButton, this->toolStripSeparator1,
					this->alignLeftButton, this->alignCenterButton, this->alignRightButton, this->toolStripSeparator2, this->bulletListButton, this->toolStripSeparator3,
					this->fontSizeComboBox, this->insertImageButton
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(991, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
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
			// bulletListButton
			// 
			this->bulletListButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bulletListButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bulletListButton.Image")));
			this->bulletListButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->bulletListButton->Name = L"bulletListButton";
			this->bulletListButton->Size = System::Drawing::Size(23, 22);
			this->bulletListButton->Text = L"Маркеровочный список";
			this->bulletListButton->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
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
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->lstHistory);
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
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(997, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Калькулятор";
			// 
			// lstHistory
			// 
			this->lstHistory->BackColor = System::Drawing::SystemColors::MenuText;
			this->lstHistory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lstHistory->ForeColor = System::Drawing::SystemColors::Window;
			this->lstHistory->FormattingEnabled = true;
			this->lstHistory->HorizontalScrollbar = true;
			this->lstHistory->ItemHeight = 25;
			this->lstHistory->Location = System::Drawing::Point(341, 3);
			this->lstHistory->Name = L"lstHistory";
			this->lstHistory->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lstHistory->Size = System::Drawing::Size(653, 600);
			this->lstHistory->TabIndex = 45;
			this->lstHistory->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lstHistory_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->label1->Location = System::Drawing::Point(94, 33);
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
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(991, 24);
			this->menuStrip1->TabIndex = 49;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btnSaveHistory2,
					this->btnClearHistory2, this->btnOpenHistory2
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// btnSaveHistory2
			// 
			this->btnSaveHistory2->Name = L"btnSaveHistory2";
			this->btnSaveHistory2->Size = System::Drawing::Size(133, 22);
			this->btnSaveHistory2->Text = L"Сохранить";
			this->btnSaveHistory2->Click += gcnew System::EventHandler(this, &MyForm::btnSaveHistory2_Click);
			// 
			// btnClearHistory2
			// 
			this->btnClearHistory2->Name = L"btnClearHistory2";
			this->btnClearHistory2->Size = System::Drawing::Size(133, 22);
			this->btnClearHistory2->Text = L"Очистить";
			this->btnClearHistory2->Click += gcnew System::EventHandler(this, &MyForm::btnClearHistory2_Click);
			// 
			// btnOpenHistory2
			// 
			this->btnOpenHistory2->Name = L"btnOpenHistory2";
			this->btnOpenHistory2->Size = System::Drawing::Size(133, 22);
			this->btnOpenHistory2->Text = L"Открыть";
			this->btnOpenHistory2->Click += gcnew System::EventHandler(this, &MyForm::btnOpenHistory2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1005, 712);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->paintCanvas);
			this->tabPage3->Controls->Add(this->toolStrip2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(997, 686);
			this->tabPage3->TabIndex = 4;
			this->tabPage3->Text = L"Paint";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click_1);
			// 
			// paintCanvas
			// 
			this->paintCanvas->BackColor = System::Drawing::Color::White;
			this->paintCanvas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->paintCanvas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->paintCanvas->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paintCanvas->Location = System::Drawing::Point(3, 28);
			this->paintCanvas->Name = L"paintCanvas";
			this->paintCanvas->Size = System::Drawing::Size(991, 655);
			this->paintCanvas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->paintCanvas->TabIndex = 1;
			this->paintCanvas->TabStop = false;
			this->paintCanvas->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::paintCanvas_MouseDown);
			this->paintCanvas->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::paintCanvas_MouseMove);
			this->paintCanvas->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::paintCanvas_MouseUp);
			// 
			// toolStrip2
			// 
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->penButton, this->eraserButton,
					this->colorButtonPaint, this->toolStripSeparator4, this->clearButtonPaint, this->saveImageButton, this->loadImageButtonPaint,
					this->thicknessComboBox
			});
			this->toolStrip2->Location = System::Drawing::Point(3, 3);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(991, 25);
			this->toolStrip2->TabIndex = 0;
			this->toolStrip2->Text = L"toolStrip2";
			// 
			// penButton
			// 
			this->penButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->penButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"penButton.Image")));
			this->penButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->penButton->Name = L"penButton";
			this->penButton->Size = System::Drawing::Size(23, 22);
			this->penButton->Text = L"Карандаш";
			this->penButton->Click += gcnew System::EventHandler(this, &MyForm::penButton_Click);
			// 
			// eraserButton
			// 
			this->eraserButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->eraserButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eraserButton.Image")));
			this->eraserButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->eraserButton->Name = L"eraserButton";
			this->eraserButton->Size = System::Drawing::Size(23, 22);
			this->eraserButton->Text = L"Ластик";
			this->eraserButton->Click += gcnew System::EventHandler(this, &MyForm::eraserButton_Click);
			// 
			// colorButtonPaint
			// 
			this->colorButtonPaint->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->colorButtonPaint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorButtonPaint.Image")));
			this->colorButtonPaint->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->colorButtonPaint->Name = L"colorButtonPaint";
			this->colorButtonPaint->Size = System::Drawing::Size(23, 22);
			this->colorButtonPaint->Text = L"Цвет кисти";
			this->colorButtonPaint->Click += gcnew System::EventHandler(this, &MyForm::colorButtonPaint_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// clearButtonPaint
			// 
			this->clearButtonPaint->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->clearButtonPaint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearButtonPaint.Image")));
			this->clearButtonPaint->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->clearButtonPaint->Name = L"clearButtonPaint";
			this->clearButtonPaint->Size = System::Drawing::Size(23, 22);
			this->clearButtonPaint->Text = L"Очистить всё";
			this->clearButtonPaint->Click += gcnew System::EventHandler(this, &MyForm::clearButtonPaint_Click);
			// 
			// saveImageButton
			// 
			this->saveImageButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveImageButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveImageButton.Image")));
			this->saveImageButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveImageButton->Name = L"saveImageButton";
			this->saveImageButton->Size = System::Drawing::Size(23, 22);
			this->saveImageButton->Text = L"Сохранить рисунок";
			this->saveImageButton->Click += gcnew System::EventHandler(this, &MyForm::saveImageButton_Click);
			// 
			// loadImageButtonPaint
			// 
			this->loadImageButtonPaint->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->loadImageButtonPaint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loadImageButtonPaint.Image")));
			this->loadImageButtonPaint->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->loadImageButtonPaint->Name = L"loadImageButtonPaint";
			this->loadImageButtonPaint->Size = System::Drawing::Size(23, 22);
			this->loadImageButtonPaint->Text = L"Загрузить изображение";
			this->loadImageButtonPaint->Click += gcnew System::EventHandler(this, &MyForm::loadImageButtonPaint_Click);
			// 
			// thicknessComboBox
			// 
			this->thicknessComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->thicknessComboBox->Name = L"thicknessComboBox";
			this->thicknessComboBox->Size = System::Drawing::Size(75, 25);
			this->thicknessComboBox->Text = L"3";
			this->thicknessComboBox->ToolTipText = L"Толщина кисти";
			this->thicknessComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::thicknessComboBox_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 630);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->grpQuestion2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->grpEmployeeInfo->ResumeLayout(false);
			this->grpEmployeeInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numExperience))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAge))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintCanvas))->EndInit();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
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
		// Проверяем, есть ли уже изображение в PictureBox
		if (paintCanvas->Image == nullptr) {
			// Создаём пустой Bitmap размером с PictureBox
			System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap(paintCanvas->Width, paintCanvas->Height);

			// Создаём объект Graphics для рисования на этом Bitmap
			System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(bmp);

			// Заливаем Bitmap белым цветом (таким же, как фон PictureBox)
			g->Clear(paintCanvas->BackColor);

			// Освобождаем Graphics (важно для освобождения ресурсов)
			delete g;

			// Присваиваем созданное изображение PictureBox
			paintCanvas->Image = bmp;
		}
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
			// Сохраняем текущее содержимое буфера обмена 
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
	
}

private: System::Void txtOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {

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

	   // Точка 
private: System::Void DOTbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = txtOutput->Text;

	// Если поле пустое, начинаем с "0,"
	if (text->Length == 0) {
		txtOutput->Text = "0,";
		return;
	}

	// Находим позицию последнего оператора
	int lastOperatorPos = -1;
	array<wchar_t>^ operators = { '+', '-', '*', '/' };

	for (int i = text->Length - 1; i >= 0; i--) {
		if (Array::IndexOf(operators, text[i]) >= 0) {
			lastOperatorPos = i;
			break;
		}
	}

	// Получаем последнее число
	String^ lastNumber;
	if (lastOperatorPos >= 0) {
		lastNumber = text->Substring(lastOperatorPos + 1);
	}
	else {
		lastNumber = text; // всё выражение - одно число
	}

	// Проверяем, есть ли уже запятая в последнем числе
	if (!lastNumber->Contains(",")) {
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
		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		String^ expression = txtOutput->Text->Replace(",", ".");
		Object^ result = table->Compute(expression, "");
		String^ resultStr = result->ToString()->Replace(".", ",");

		// Добавить в историю
		String^ historyEntry = txtOutput->Text + " = " + resultStr;
		lstHistory->Items->Add(historyEntry);
		isCalculatorUsed = true;

		// Показать результат
		txtOutput->Text = resultStr;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка в выражении", "Калькулятор", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   
private: bool IsLastCharOperator() {
	if (txtOutput->Text->Length == 0) return false;
	wchar_t last = txtOutput->Text[txtOutput->Text->Length - 1];
	return (last == '+' || last == '-' || last == '*' || last == '/');
}
private: System::Void grpEmployeeInfo_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numAge_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	btnUpdateQuestions_Click(sender, e);
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numExperience_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	btnUpdateQuestions_Click(sender, e);
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblQuestion1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbAnswer1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void grpQuestion2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblQuestion2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbAnswer2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblResult_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnUpdateQuestions_Click(System::Object^ sender, System::EventArgs^ e) {
	int age = Convert::ToInt32(numAge->Value);
	int experience = Convert::ToInt32(numExperience->Value);

	// Очищаем комбобоксы
	cmbAnswer1->Items->Clear();
	cmbAnswer2->Items->Clear();

	// Вопрос 1 зависит от возраста
	if (age < 30) {
		lblQuestion1->Text = "Как вы оцениваете возможности карьерного роста?";
		cmbAnswer1->Items->AddRange(gcnew array<Object^> {
			"Отлично", "Хорошо", "Удовлетворительно", "Плохо"
		});
	}
	else if (age >= 30 && age < 50) {
		lblQuestion1->Text = "Удовлетворены ли вы балансом работы и личной жизни?";
		cmbAnswer1->Items->AddRange(gcnew array<Object^> {
			"Полностью удовлетворен", "Скорее удовлетворен",
				"Скорее не удовлетворен", "Совсем не удовлетворен"
		});
	}
	else {
		lblQuestion1->Text = "Планируете ли вы выходить на пенсию в ближайшие 5 лет?";
		cmbAnswer1->Items->AddRange(gcnew array<Object^> {
			"Да, планирую", "Возможно", "Нет, не планирую", "Ещё не думал(а)"
		});
	}

	// Вопрос 2 зависит от стажа
	if (experience < 3) {
		lblQuestion2->Text = "Как вы оцениваете процесс адаптации новых сотрудников?";
		cmbAnswer2->Items->AddRange(gcnew array<Object^> {
			"Отлично", "Хорошо", "Удовлетворительно", "Плохо"
		});
	}
	else if (experience >= 3 && experience < 10) {
		lblQuestion2->Text = "Что мотивирует вас оставаться в компании?";
		cmbAnswer2->Items->AddRange(gcnew array<Object^> {
			"Зарплата", "Коллектив", "Интересные задачи", "Карьерный рост"
		});
	}
	else {
		lblQuestion2->Text = "Готовы ли вы обучать новых сотрудников?";
		cmbAnswer2->Items->AddRange(gcnew array<Object^> {
			"Да, с удовольствием", "Если попросят", "Нет, не готов(а)", "Уже обучаю"
		});
	}

	// Устанавливаем первый элемент как выбранный по умолчанию
	if (cmbAnswer1->Items->Count > 0) cmbAnswer1->SelectedIndex = 0;
	if (cmbAnswer2->Items->Count > 0) cmbAnswer2->SelectedIndex = 0;

	lblResult->Text = "Вопросы обновлены. Выберите ответы и нажмите 'Проверить'.";
}
private: System::Void btnCheckAnswers_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, выбраны ли ответы
	if (cmbAnswer1->SelectedIndex == -1 || cmbAnswer2->SelectedIndex == -1) {
		MessageBox::Show("Пожалуйста, ответьте на все вопросы.", "Внимание",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	int age = Convert::ToInt32(numAge->Value);
	int experience = Convert::ToInt32(numExperience->Value);

	String^ result = "===== РЕЗУЛЬТАТЫ ОПРОСА =====\n\n";
	result += "Возраст: " + age + " лет\n";
	result += "Стаж: " + experience + " лет\n\n";

	// Анализ ответа на первый вопрос
	result += "Вопрос 1: " + lblQuestion1->Text + "\n";
	result += "Ответ: " + cmbAnswer1->Text + "\n";

	// Комментарий к первому вопросу в зависимости от возраста
	if (age < 30) {
		if (cmbAnswer1->SelectedIndex <= 1) // Отлично или Хорошо
			result += "Молодой сотрудник позитивно оценивает карьерные перспективы.\n";
		else
			result += "Стоит обсудить карьерные ожидания и возможности роста.\n";
	}
	else if (age >= 30 && age < 50) {
		if (cmbAnswer1->SelectedIndex <= 1) // Полностью/Скорее удовлетворен
			result += "Хороший баланс работы и личной жизни.\n";
		else
			result += "Возможен риск выгорания - обсудить нагрузку.\n";
	}
	else {
		if (cmbAnswer1->SelectedIndex == 0) // Да, планирую
			result += "Важно подготовить план передачи знаний.\n";
		else if (cmbAnswer1->SelectedIndex == 1) // Возможно
			result += "Обсудить планы в индивидуальном порядке.\n";
		else
			result += "Сотрудник планирует работать дальше.\n";
	}

	result += "\n";

	// Анализ ответа на второй вопрос
	result += "Вопрос 2: " + lblQuestion2->Text + "\n";
	result += "Ответ: " + cmbAnswer2->Text + "\n";

	// Комментарий ко второму вопросу в зависимости от стажа
	if (experience < 3) {
		if (cmbAnswer2->SelectedIndex <= 1) // Отлично/Хорошо
			result += "Адаптация проходит успешно.\n";
		else
			result += "Требуется улучшить программу адаптации.\n";
	}
	else if (experience >= 3 && experience < 10) {
		switch (cmbAnswer2->SelectedIndex) {
		case 0: // Зарплата
			result += "Регулярно пересматривать компенсацию.\n";
			break;
		case 1: // Коллектив
			result += "Поддерживать командные мероприятия.\n";
			break;
		case 2: // Интересные задачи
			result += "Предлагать новые проекты и вызовы.\n";
			break;
		case 3: // Карьерный рост
			result += "Разработать индивидуальный план развития.\n";
			break;
		}
	}
	else {
		switch (cmbAnswer2->SelectedIndex) {
		case 0: // Да, с удовольствием
			result += "Отличный кандидат в наставники.\n";
			break;
		case 1: // Если попросят
			result += "Можно привлекать к обучению.\n";
			break;
		case 2: // Нет, не готов
			result += "Выяснить причины нежелания обучать.\n";
			break;
		case 3: // Уже обучаю
			result += "Активный наставник - отметить и поощрить!\n";
			break;
		}
	}

	result += "\n===== ОБЩАЯ РЕКОМЕНДАЦИЯ =====\n";

	// Общая рекомендация на основе возраста и стажа
	if (age < 30 && experience < 3) {
		result += "Молодой специалист. Рекомендуется:\n";
		result += "- Назначить наставника\n";
		result += "- Проводить регулярные 1-on-1 встречи\n";
		result += "- Составить план развития на год";
	}
	else if (age < 30 && experience >= 3) {
		result += "Перспективный сотрудник. Рекомендуется:\n";
		result += "- Рассмотреть возможность повышения\n";
		result += "- Давать более сложные задачи\n";
		result += "- Отправить на профильное обучение";
	}
	else if (age >= 30 && age < 45 && experience >= 5) {
		result += "Опытный специалист - основа команды. Рекомендуется:\n";
		result += "- Привлекать к принятию решений\n";
		result += "- Рассмотреть как тимлида\n";
		result += "- Предложить участие в найме";
	}
	else if (age >= 45 && age < 60 && experience >= 10) {
		result += "Эксперт с большим опытом. Рекомендуется:\n";
		result += "- Сделать наставником молодёжи\n";
		result += "- Привлекать к сложным проектам\n";
		result += "- Учитывать мнение при стратегических решениях";
	}
	else if (age >= 60 && experience >= 15) {
		result += "Ветеран компании. Рекомендуется:\n";
		result += "- Обсудить планы по передаче опыта\n";
		result += "- Рассмотреть гибкий график\n";
		result += "- Отметить вклад в развитие компании";
	}
	else {
		result += "Индивидуальный подход на основе ответов.\n";
		result += "Провести дополнительную встречу для детального обсуждения.";
	}

	lblResult->Text = result;

}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ selectedText = richTextBox1->SelectedText;

	if (selectedText != "") {
		array<String^>^ lines = selectedText->Split('\n');
		bool hasBullet = false;
		for (int i = 0; i < lines->Length; i++) {
			String^ line = lines[i];
			if (line->StartsWith("•")) {
				hasBullet = true;
				break;
			}
		}
		String^ newText = "";

		if (hasBullet) {
			
			for (int i = 0; i < lines->Length; i++) {
				String^ line = lines[i]->Replace("\r", "");
				if (line->StartsWith("• ")) {
				
					newText += line->Substring(2) + "\r\n";
				}
				else if (line->StartsWith("•")) {
					
					newText += line->Substring(1) + "\r\n";
				}
				else {
					newText += line + "\r\n";
				}
			}
			toolStripStatusLabel1->Text = "Маркеры удалены";
		}
		else {
			
			for (int i = 0; i < lines->Length; i++) {
				String^ line = lines[i]->Replace("\r", "");
				if (line != "") {
					newText += "• " + line + "\r\n";
				}
				else {
					newText += "\r\n";
				}
			}
			toolStripStatusLabel1->Text = "Маркированный список применён";
		}

		
		int start = richTextBox1->SelectionStart;
		int length = richTextBox1->SelectionLength;
		richTextBox1->Select(start, length);
		richTextBox1->SelectedText = newText;

	}
	else {
		int selectionStart = richTextBox1->SelectionStart;
		int lineIndex = richTextBox1->GetLineFromCharIndex(selectionStart);
		int firstCharOfLine = richTextBox1->GetFirstCharIndexFromLine(lineIndex);

		
		String^ currentLine = richTextBox1->Lines[lineIndex];

		if (currentLine->StartsWith("• ")) {
		
			richTextBox1->Select(firstCharOfLine, 2);
			richTextBox1->SelectedText = "";
			toolStripStatusLabel1->Text = "Маркер удалён";
		}
		else if (currentLine->StartsWith("•")) {
		
			richTextBox1->Select(firstCharOfLine, 1);
			richTextBox1->SelectedText = "";
			toolStripStatusLabel1->Text = "Маркер удалён";
		}
		else {
			
			richTextBox1->Select(firstCharOfLine, 0);
			richTextBox1->SelectedText = "• ";
			toolStripStatusLabel1->Text = "Маркер добавлен";
		}
	}

	richTextBox1->Focus();

}



private: System::Void lstHistory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (lstHistory->SelectedItem != nullptr) {
		String^ selected = lstHistory->SelectedItem->ToString();

		int equalPos = selected->IndexOf(L" = ");
		if (equalPos > 0) {
			String^ expression = selected->Substring(0, equalPos);
			txtOutput->Text = expression;
		}
	}
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (isCalculatorUsed && lstHistory->Items->Count > 0) {
		System::Windows::Forms::DialogResult res = MessageBox::Show(
			"Сохранить историю калькулятора?",
			"Подтверждение закрытия",
			MessageBoxButtons::YesNoCancel,
			MessageBoxIcon::Question);

		if (res == System::Windows::Forms::DialogResult::Yes) {
			// Получаем путь к папке программы
			String^ appPath = Application::StartupPath;
			String^ fullPath = appPath + "\\calc_history.txt";

			// Показываем путь (для отладки)
			MessageBox::Show("Сохраняем в: " + fullPath);

			try {
				// Проверяем, существует ли папка
				if (!System::IO::Directory::Exists(appPath)) {
					MessageBox::Show("Папка не существует: " + appPath);
					return;
				}

				// Сохраняем файл
				System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(fullPath);
				for (int i = 0; i < lstHistory->Items->Count; i++) {
					writer->WriteLine(lstHistory->Items[i]->ToString());
				}
				writer->Close();

				MessageBox::Show("Файл успешно сохранён!\n" + fullPath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка сохранения: " + ex->Message);
			}
		}
		else if (res == System::Windows::Forms::DialogResult::Cancel) {
			e->Cancel = true;
		}
	}
}
private: System::Void tabPage3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSaveHistory2_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
	saveFileDialog->DefaultExt = "txt";
	saveFileDialog->FileName = "calc_history.txt";
	saveFileDialog->Title = "Сохранить историю";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(saveFileDialog->FileName);
			for (int i = 0; i < lstHistory->Items->Count; i++) {
				writer->WriteLine(lstHistory->Items[i]->ToString());
			}
			writer->Close();
			MessageBox::Show("История сохранена успешно!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при сохранении: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnClearHistory2_Click(System::Object^ sender, System::EventArgs^ e) {
	lstHistory->Items->Clear();
}
private: System::Void btnOpenHistory2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
	openFileDialog->Title = "Загрузить историю";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			lstHistory->Items->Clear();
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
			String^ line;
			while ((line = reader->ReadLine()) != nullptr) {
				if (line != "") {
					lstHistory->Items->Add(line);
				}
			}
			reader->Close();
			MessageBox::Show("История загружена успешно!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при загрузке: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnOpenHistory_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void penButton_Click(System::Object^ sender, System::EventArgs^ e) {
	isErasing = false;
	toolStripStatusLabel1->Text = "Инструмент: Кисть";
}
private: System::Void eraserButton_Click(System::Object^ sender, System::EventArgs^ e) {
	isErasing = true;
	toolStripStatusLabel1->Text = "Инструмент: Ластик";

}
private: System::Void colorButtonPaint_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog = gcnew ColorDialog();
	colorDialog->Color = currentColor;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		currentColor = colorDialog->Color;
		toolStripStatusLabel1->Text = "Цвет кисти изменён";
	}
}

private: System::Void clearButtonPaint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (paintCanvas->Image != nullptr) {
		Graphics^ g = Graphics::FromImage(paintCanvas->Image);
		g->Clear(paintCanvas->BackColor);
		delete g;
		paintCanvas->Invalidate();
		toolStripStatusLabel1->Text = "Холст очищен";
	}
}
private: System::Void saveImageButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (paintCanvas->Image == nullptr) {
		MessageBox::Show("Нечего сохранять.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	
	SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
	saveDialog->Filter = "PNG Image|*.png|JPEG Image|*.jpg|BMP Image|*.bmp";
	saveDialog->DefaultExt = "png";
	saveDialog->FileName = "Picher.txt";
	if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			paintCanvas->Image->Save(saveDialog->FileName);
			toolStripStatusLabel1->Text = "Сохранено: " + System::IO::Path::GetFileName(saveDialog->FileName);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка сохранения: " + ex->Message);
		}
	}
}
private: System::Void loadImageButtonPaint_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openDialog = gcnew OpenFileDialog();
	openDialog->Filter = "Изображения|*.bmp;*.jpg;*.png;*.gif|Все файлы|*.*";
	if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			Image^ newImage = Image::FromFile(openDialog->FileName);
			if (paintCanvas->Image != nullptr) delete paintCanvas->Image;
			Bitmap^ bmp = gcnew Bitmap(paintCanvas->Width, paintCanvas->Height);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(newImage, 0, 0, paintCanvas->Width, paintCanvas->Height);
			delete g;
			delete newImage;
			paintCanvas->Image = bmp;
			toolStripStatusLabel1->Text = "Изображение загружено";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка загрузки: " + ex->Message);
		}
	}
}
private: System::Void thicknessComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (thicknessComboBox->SelectedItem != nullptr) {
		penThickness = Convert::ToInt32(thicknessComboBox->SelectedItem);
		toolStripStatusLabel1->Text = "Толщина: " + penThickness;
	}
}
private: System::Void paintCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isDrawing = true;
	lastPoint = e->Location;
}
private: System::Void paintCanvas_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isDrawing) {
		Graphics^ g = Graphics::FromImage(paintCanvas->Image);
		Pen^ pen = gcnew Pen(isErasing ? paintCanvas->BackColor : currentColor, penThickness);
		pen->StartCap = System::Drawing::Drawing2D::LineCap::Round;
		pen->EndCap = System::Drawing::Drawing2D::LineCap::Round;
		g->DrawLine(pen, lastPoint, e->Location);
		delete pen;
		delete g;
		lastPoint = e->Location;
		paintCanvas->Invalidate();
	}
}
private: System::Void paintCanvas_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isDrawing = false;
}
};
}