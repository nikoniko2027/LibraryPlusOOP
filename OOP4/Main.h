#pragma once

#include "VecSaveSystem.h"
#include "DefaultBooks.h"
#include "Clientele.h"
#include <Math.h>

using namespace std;

namespace OOP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnStartStop;
	protected:

	private: System::Windows::Forms::Label^  lblBooksQ;
	private: System::Windows::Forms::Panel^  pnlBooksStats;



	private: System::Windows::Forms::Label^  lblBooks;

	private: System::Windows::Forms::Label^  lblStatsBooks;
	private: System::Windows::Forms::TextBox^  txtBooks1;
	private: System::Windows::Forms::Panel^  pnlBG;
	private: System::Windows::Forms::TextBox^  txtBooks2;
	private: System::Windows::Forms::TextBox^  txtBooks15;
	private: System::Windows::Forms::TextBox^  txtBooks14;
	private: System::Windows::Forms::TextBox^  txtBooks13;
	private: System::Windows::Forms::TextBox^  txtBooks12;
	private: System::Windows::Forms::TextBox^  txtBooks11;
	private: System::Windows::Forms::TextBox^  txtBooks10;
	private: System::Windows::Forms::TextBox^  txtBooks9;
	private: System::Windows::Forms::TextBox^  txtBooks8;
	private: System::Windows::Forms::TextBox^  txtBooks7;
	private: System::Windows::Forms::TextBox^  txtBooks6;
	private: System::Windows::Forms::TextBox^  txtBooks5;
	private: System::Windows::Forms::TextBox^  txtBooks4;
	private: System::Windows::Forms::TextBox^  txtBooks3;
	private: System::Windows::Forms::Label^  lblDay;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  txtConsole;
	private: System::Windows::Forms::Button^  btnPause;
	private: System::Windows::Forms::Label^  lblMoney;
	private: System::Windows::Forms::Panel^  pnlBG2;
	private: System::Windows::Forms::Label^  lblBooksSell;

	private: System::Windows::Forms::Label^  lblStatsShop;
	private: System::Windows::Forms::Label^  lblTop1;
	private: System::Windows::Forms::Label^  lblTop2;
	private: System::Windows::Forms::Label^  lblTop3;
	private: System::Windows::Forms::Label^  lblTop;
	private: System::Windows::Forms::TextBox^  txtConsole2;
	private: System::Windows::Forms::Label^  lblN;
	private: System::Windows::Forms::TextBox^  txtN;
	private: System::Windows::Forms::TextBox^  txtBooks;
	private: System::Windows::Forms::TextBox^  txtApp;


	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::ComponentModel::IContainer^  components;













	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnStartStop = (gcnew System::Windows::Forms::Button());
			this->lblBooksQ = (gcnew System::Windows::Forms::Label());
			this->pnlBooksStats = (gcnew System::Windows::Forms::Panel());
			this->txtBooks15 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks14 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks13 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks12 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks11 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks10 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks9 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks8 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks7 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks6 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks5 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks4 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBooks = (gcnew System::Windows::Forms::Label());
			this->lblStatsBooks = (gcnew System::Windows::Forms::Label());
			this->pnlBG = (gcnew System::Windows::Forms::Panel());
			this->lblDay = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtConsole = (gcnew System::Windows::Forms::TextBox());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->lblMoney = (gcnew System::Windows::Forms::Label());
			this->pnlBG2 = (gcnew System::Windows::Forms::Panel());
			this->lblBooksSell = (gcnew System::Windows::Forms::Label());
			this->lblStatsShop = (gcnew System::Windows::Forms::Label());
			this->lblTop1 = (gcnew System::Windows::Forms::Label());
			this->lblTop2 = (gcnew System::Windows::Forms::Label());
			this->lblTop3 = (gcnew System::Windows::Forms::Label());
			this->lblTop = (gcnew System::Windows::Forms::Label());
			this->txtConsole2 = (gcnew System::Windows::Forms::TextBox());
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->txtBooks = (gcnew System::Windows::Forms::TextBox());
			this->txtApp = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->pnlBooksStats->SuspendLayout();
			this->pnlBG2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnStartStop
			// 
			this->btnStartStop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->btnStartStop->Location = System::Drawing::Point(306, 366);
			this->btnStartStop->Name = L"btnStartStop";
			this->btnStartStop->Size = System::Drawing::Size(156, 41);
			this->btnStartStop->TabIndex = 0;
			this->btnStartStop->Text = L"�����";
			this->btnStartStop->UseVisualStyleBackColor = true;
			this->btnStartStop->Click += gcnew System::EventHandler(this, &Main::btnAddBooks_Click);
			// 
			// lblBooksQ
			// 
			this->lblBooksQ->BackColor = System::Drawing::Color::SlateBlue;
			this->lblBooksQ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->lblBooksQ->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBooksQ->Location = System::Drawing::Point(23, 47);
			this->lblBooksQ->Name = L"lblBooksQ";
			this->lblBooksQ->Size = System::Drawing::Size(243, 22);
			this->lblBooksQ->TabIndex = 1;
			this->lblBooksQ->Text = L"����� ���� � �������:";
			// 
			// pnlBooksStats
			// 
			this->pnlBooksStats->AutoScroll = true;
			this->pnlBooksStats->AutoScrollMargin = System::Drawing::Size(0, 20);
			this->pnlBooksStats->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pnlBooksStats->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pnlBooksStats->Controls->Add(this->txtBooks15);
			this->pnlBooksStats->Controls->Add(this->txtBooks14);
			this->pnlBooksStats->Controls->Add(this->txtBooks13);
			this->pnlBooksStats->Controls->Add(this->txtBooks12);
			this->pnlBooksStats->Controls->Add(this->txtBooks11);
			this->pnlBooksStats->Controls->Add(this->txtBooks10);
			this->pnlBooksStats->Controls->Add(this->txtBooks9);
			this->pnlBooksStats->Controls->Add(this->txtBooks8);
			this->pnlBooksStats->Controls->Add(this->txtBooks7);
			this->pnlBooksStats->Controls->Add(this->txtBooks6);
			this->pnlBooksStats->Controls->Add(this->txtBooks5);
			this->pnlBooksStats->Controls->Add(this->txtBooks4);
			this->pnlBooksStats->Controls->Add(this->txtBooks3);
			this->pnlBooksStats->Controls->Add(this->txtBooks2);
			this->pnlBooksStats->Controls->Add(this->txtBooks1);
			this->pnlBooksStats->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pnlBooksStats->Location = System::Drawing::Point(12, 96);
			this->pnlBooksStats->Name = L"pnlBooksStats";
			this->pnlBooksStats->Size = System::Drawing::Size(276, 361);
			this->pnlBooksStats->TabIndex = 2;
			// 
			// txtBooks15
			// 
			this->txtBooks15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks15->Location = System::Drawing::Point(6, 2764);
			this->txtBooks15->Multiline = true;
			this->txtBooks15->Name = L"txtBooks15";
			this->txtBooks15->ReadOnly = true;
			this->txtBooks15->Size = System::Drawing::Size(247, 190);
			this->txtBooks15->TabIndex = 17;
			// 
			// txtBooks14
			// 
			this->txtBooks14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks14->Location = System::Drawing::Point(6, 2568);
			this->txtBooks14->Multiline = true;
			this->txtBooks14->Name = L"txtBooks14";
			this->txtBooks14->ReadOnly = true;
			this->txtBooks14->Size = System::Drawing::Size(247, 190);
			this->txtBooks14->TabIndex = 16;
			// 
			// txtBooks13
			// 
			this->txtBooks13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks13->Location = System::Drawing::Point(6, 2372);
			this->txtBooks13->Multiline = true;
			this->txtBooks13->Name = L"txtBooks13";
			this->txtBooks13->ReadOnly = true;
			this->txtBooks13->Size = System::Drawing::Size(247, 190);
			this->txtBooks13->TabIndex = 15;
			// 
			// txtBooks12
			// 
			this->txtBooks12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks12->Location = System::Drawing::Point(6, 2176);
			this->txtBooks12->Multiline = true;
			this->txtBooks12->Name = L"txtBooks12";
			this->txtBooks12->ReadOnly = true;
			this->txtBooks12->Size = System::Drawing::Size(247, 190);
			this->txtBooks12->TabIndex = 14;
			// 
			// txtBooks11
			// 
			this->txtBooks11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks11->Location = System::Drawing::Point(6, 1980);
			this->txtBooks11->Multiline = true;
			this->txtBooks11->Name = L"txtBooks11";
			this->txtBooks11->ReadOnly = true;
			this->txtBooks11->Size = System::Drawing::Size(247, 190);
			this->txtBooks11->TabIndex = 13;
			// 
			// txtBooks10
			// 
			this->txtBooks10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks10->Location = System::Drawing::Point(6, 1784);
			this->txtBooks10->Multiline = true;
			this->txtBooks10->Name = L"txtBooks10";
			this->txtBooks10->ReadOnly = true;
			this->txtBooks10->Size = System::Drawing::Size(247, 190);
			this->txtBooks10->TabIndex = 12;
			// 
			// txtBooks9
			// 
			this->txtBooks9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks9->Location = System::Drawing::Point(6, 1588);
			this->txtBooks9->Multiline = true;
			this->txtBooks9->Name = L"txtBooks9";
			this->txtBooks9->ReadOnly = true;
			this->txtBooks9->Size = System::Drawing::Size(247, 190);
			this->txtBooks9->TabIndex = 11;
			// 
			// txtBooks8
			// 
			this->txtBooks8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks8->Location = System::Drawing::Point(6, 1392);
			this->txtBooks8->Multiline = true;
			this->txtBooks8->Name = L"txtBooks8";
			this->txtBooks8->ReadOnly = true;
			this->txtBooks8->Size = System::Drawing::Size(247, 190);
			this->txtBooks8->TabIndex = 10;
			// 
			// txtBooks7
			// 
			this->txtBooks7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks7->Location = System::Drawing::Point(6, 1196);
			this->txtBooks7->Multiline = true;
			this->txtBooks7->Name = L"txtBooks7";
			this->txtBooks7->ReadOnly = true;
			this->txtBooks7->Size = System::Drawing::Size(247, 190);
			this->txtBooks7->TabIndex = 9;
			// 
			// txtBooks6
			// 
			this->txtBooks6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks6->Location = System::Drawing::Point(6, 1000);
			this->txtBooks6->Multiline = true;
			this->txtBooks6->Name = L"txtBooks6";
			this->txtBooks6->ReadOnly = true;
			this->txtBooks6->Size = System::Drawing::Size(247, 190);
			this->txtBooks6->TabIndex = 8;
			// 
			// txtBooks5
			// 
			this->txtBooks5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks5->Location = System::Drawing::Point(6, 804);
			this->txtBooks5->Multiline = true;
			this->txtBooks5->Name = L"txtBooks5";
			this->txtBooks5->ReadOnly = true;
			this->txtBooks5->Size = System::Drawing::Size(247, 190);
			this->txtBooks5->TabIndex = 7;
			// 
			// txtBooks4
			// 
			this->txtBooks4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks4->Location = System::Drawing::Point(6, 608);
			this->txtBooks4->Multiline = true;
			this->txtBooks4->Name = L"txtBooks4";
			this->txtBooks4->ReadOnly = true;
			this->txtBooks4->Size = System::Drawing::Size(247, 190);
			this->txtBooks4->TabIndex = 6;
			// 
			// txtBooks3
			// 
			this->txtBooks3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks3->Location = System::Drawing::Point(6, 412);
			this->txtBooks3->Multiline = true;
			this->txtBooks3->Name = L"txtBooks3";
			this->txtBooks3->ReadOnly = true;
			this->txtBooks3->Size = System::Drawing::Size(247, 190);
			this->txtBooks3->TabIndex = 5;
			// 
			// txtBooks2
			// 
			this->txtBooks2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks2->Location = System::Drawing::Point(6, 216);
			this->txtBooks2->Multiline = true;
			this->txtBooks2->Name = L"txtBooks2";
			this->txtBooks2->ReadOnly = true;
			this->txtBooks2->Size = System::Drawing::Size(247, 190);
			this->txtBooks2->TabIndex = 4;
			// 
			// txtBooks1
			// 
			this->txtBooks1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBooks1->Location = System::Drawing::Point(6, 20);
			this->txtBooks1->Multiline = true;
			this->txtBooks1->Name = L"txtBooks1";
			this->txtBooks1->ReadOnly = true;
			this->txtBooks1->Size = System::Drawing::Size(247, 190);
			this->txtBooks1->TabIndex = 3;
			this->txtBooks1->TextChanged += gcnew System::EventHandler(this, &Main::txtBooks1_TextChanged);
			// 
			// lblBooks
			// 
			this->lblBooks->BackColor = System::Drawing::Color::SlateBlue;
			this->lblBooks->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->lblBooks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBooks->Location = System::Drawing::Point(23, 71);
			this->lblBooks->Name = L"lblBooks";
			this->lblBooks->Size = System::Drawing::Size(243, 22);
			this->lblBooks->TabIndex = 2;
			this->lblBooks->Text = L"����� ����� ����:";
			// 
			// lblStatsBooks
			// 
			this->lblStatsBooks->BackColor = System::Drawing::Color::SlateBlue;
			this->lblStatsBooks->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.75F));
			this->lblStatsBooks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblStatsBooks->Location = System::Drawing::Point(12, 9);
			this->lblStatsBooks->Name = L"lblStatsBooks";
			this->lblStatsBooks->Size = System::Drawing::Size(276, 32);
			this->lblStatsBooks->TabIndex = 3;
			this->lblStatsBooks->Text = L"���������� ����";
			this->lblStatsBooks->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pnlBG
			// 
			this->pnlBG->BackColor = System::Drawing::Color::SlateBlue;
			this->pnlBG->Location = System::Drawing::Point(-1, -1);
			this->pnlBG->Name = L"pnlBG";
			this->pnlBG->Size = System::Drawing::Size(301, 477);
			this->pnlBG->TabIndex = 4;
			// 
			// lblDay
			// 
			this->lblDay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDay->Location = System::Drawing::Point(306, 14);
			this->lblDay->Name = L"lblDay";
			this->lblDay->Size = System::Drawing::Size(330, 40);
			this->lblDay->TabIndex = 5;
			this->lblDay->Text = L"���� ������ ��������: ";
			this->lblDay->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// txtConsole
			// 
			this->txtConsole->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtConsole->Location = System::Drawing::Point(13, 97);
			this->txtConsole->Multiline = true;
			this->txtConsole->Name = L"txtConsole";
			this->txtConsole->ReadOnly = true;
			this->txtConsole->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsole->Size = System::Drawing::Size(276, 361);
			this->txtConsole->TabIndex = 6;
			// 
			// btnPause
			// 
			this->btnPause->Enabled = false;
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->btnPause->Location = System::Drawing::Point(480, 366);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(156, 41);
			this->btnPause->TabIndex = 7;
			this->btnPause->Text = L"�����";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &Main::btnPause_Click);
			// 
			// lblMoney
			// 
			this->lblMoney->AutoSize = true;
			this->lblMoney->BackColor = System::Drawing::Color::SlateBlue;
			this->lblMoney->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->lblMoney->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblMoney->Location = System::Drawing::Point(15, 48);
			this->lblMoney->Name = L"lblMoney";
			this->lblMoney->Size = System::Drawing::Size(145, 22);
			this->lblMoney->TabIndex = 8;
			this->lblMoney->Text = L"�������: 0 ���.";
			// 
			// pnlBG2
			// 
			this->pnlBG2->BackColor = System::Drawing::Color::SlateBlue;
			this->pnlBG2->Controls->Add(this->lblBooksSell);
			this->pnlBG2->Controls->Add(this->lblStatsShop);
			this->pnlBG2->Controls->Add(this->lblMoney);
			this->pnlBG2->Controls->Add(this->txtConsole);
			this->pnlBG2->Location = System::Drawing::Point(642, -1);
			this->pnlBG2->Name = L"pnlBG2";
			this->pnlBG2->Size = System::Drawing::Size(301, 477);
			this->pnlBG2->TabIndex = 5;
			// 
			// lblBooksSell
			// 
			this->lblBooksSell->AutoSize = true;
			this->lblBooksSell->BackColor = System::Drawing::Color::SlateBlue;
			this->lblBooksSell->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.75F));
			this->lblBooksSell->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBooksSell->Location = System::Drawing::Point(15, 72);
			this->lblBooksSell->Name = L"lblBooksSell";
			this->lblBooksSell->Size = System::Drawing::Size(180, 22);
			this->lblBooksSell->TabIndex = 9;
			this->lblBooksSell->Text = L"������� ����: 0 ��.";
			// 
			// lblStatsShop
			// 
			this->lblStatsShop->BackColor = System::Drawing::Color::SlateBlue;
			this->lblStatsShop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.75F));
			this->lblStatsShop->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblStatsShop->Location = System::Drawing::Point(13, 10);
			this->lblStatsShop->Name = L"lblStatsShop";
			this->lblStatsShop->Size = System::Drawing::Size(276, 32);
			this->lblStatsShop->TabIndex = 8;
			this->lblStatsShop->Text = L"���������� ��������";
			this->lblStatsShop->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblTop1
			// 
			this->lblTop1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.25F));
			this->lblTop1->Location = System::Drawing::Point(306, 95);
			this->lblTop1->Name = L"lblTop1";
			this->lblTop1->Size = System::Drawing::Size(330, 23);
			this->lblTop1->TabIndex = 8;
			this->lblTop1->Text = L"��� 1 -";
			this->lblTop1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblTop2
			// 
			this->lblTop2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.25F));
			this->lblTop2->Location = System::Drawing::Point(306, 122);
			this->lblTop2->Name = L"lblTop2";
			this->lblTop2->Size = System::Drawing::Size(330, 23);
			this->lblTop2->TabIndex = 9;
			this->lblTop2->Text = L"��� 2 -";
			this->lblTop2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblTop3
			// 
			this->lblTop3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.25F));
			this->lblTop3->Location = System::Drawing::Point(306, 149);
			this->lblTop3->Name = L"lblTop3";
			this->lblTop3->Size = System::Drawing::Size(330, 23);
			this->lblTop3->TabIndex = 10;
			this->lblTop3->Text = L"��� 3 -";
			this->lblTop3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblTop
			// 
			this->lblTop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.25F));
			this->lblTop->Location = System::Drawing::Point(306, 57);
			this->lblTop->Name = L"lblTop";
			this->lblTop->Size = System::Drawing::Size(330, 23);
			this->lblTop->TabIndex = 11;
			this->lblTop->Text = L"��� ���� �� ��������";
			this->lblTop->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtConsole2
			// 
			this->txtConsole2->Location = System::Drawing::Point(306, 182);
			this->txtConsole2->Multiline = true;
			this->txtConsole2->Name = L"txtConsole2";
			this->txtConsole2->ReadOnly = true;
			this->txtConsole2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsole2->Size = System::Drawing::Size(330, 178);
			this->txtConsole2->TabIndex = 12;
			// 
			// lblN
			// 
			this->lblN->AutoSize = true;
			this->lblN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.75F));
			this->lblN->Location = System::Drawing::Point(295, 412);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(353, 17);
			this->lblN->TabIndex = 13;
			this->lblN->Text = L"���������� ���� | ���������� ���� (�� 16) | % �������";
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(315, 437);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 20);
			this->txtN->TabIndex = 14;
			this->txtN->Tag = L"";
			this->txtN->Text = L"30";
			this->txtN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBooks
			// 
			this->txtBooks->Location = System::Drawing::Point(421, 437);
			this->txtBooks->Name = L"txtBooks";
			this->txtBooks->Size = System::Drawing::Size(100, 20);
			this->txtBooks->TabIndex = 15;
			this->txtBooks->Text = L"15";
			this->txtBooks->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtApp
			// 
			this->txtApp->Location = System::Drawing::Point(527, 437);
			this->txtApp->Name = L"txtApp";
			this->txtApp->Size = System::Drawing::Size(100, 20);
			this->txtApp->TabIndex = 16;
			this->txtApp->Text = L"20";
			this->txtApp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 469);
			this->Controls->Add(this->txtApp);
			this->Controls->Add(this->txtBooks);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->lblN);
			this->Controls->Add(this->txtConsole2);
			this->Controls->Add(this->lblTop);
			this->Controls->Add(this->lblTop3);
			this->Controls->Add(this->lblTop2);
			this->Controls->Add(this->lblTop1);
			this->Controls->Add(this->pnlBG2);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->lblDay);
			this->Controls->Add(this->lblStatsBooks);
			this->Controls->Add(this->lblBooks);
			this->Controls->Add(this->pnlBooksStats);
			this->Controls->Add(this->lblBooksQ);
			this->Controls->Add(this->btnStartStop);
			this->Controls->Add(this->pnlBG);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Main";
			this->Text = L"[3.3] Bookstore assortment control system";
			this->pnlBooksStats->ResumeLayout(false);
			this->pnlBooksStats->PerformLayout();
			this->pnlBG2->ResumeLayout(false);
			this->pnlBG2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void UpdateInfo() {

			this->lblBooksQ->Text = "����� ���� � �������: " + System::Convert::ToInt32(MV.RetAllBooks());
			this->lblBooks->Text = "����� ����� ����: " + System::Convert::ToInt32(MV.ASize());
			this->lblMoney->Text = "�������: " + System::Convert::ToInt32(money) + " ���.";
			this->lblBooksSell->Text = "������� ����: " + System::Convert::ToInt32(bookssell) + " ��.";

			if (Books >= 1) {
				this->txtBooks1->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 0).c_str()) + "\r\n");
				this->txtBooks1->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 0).c_str()) + "\r\n");
				this->txtBooks1->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 0).c_str()) + "\r\n");
				this->txtBooks1->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 0).c_str()) + "\r\n");
				this->txtBooks1->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 0)) + "\r\n");
				this->txtBooks1->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 0)) + "\r\n");
				this->txtBooks1->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 0)) + "\r\n");
			}

			if (Books >= 2) {
				this->txtBooks2->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 1).c_str()) + "\r\n");
				this->txtBooks2->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 1).c_str()) + "\r\n");
				this->txtBooks2->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 1).c_str()) + "\r\n");
				this->txtBooks2->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 1).c_str()) + "\r\n");
				this->txtBooks2->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 1)) + "\r\n");
				this->txtBooks2->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 1)) + "\r\n");
				this->txtBooks2->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 1)) + "\r\n");
			}

			if (Books >= 3) {
				this->txtBooks3->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 2).c_str()) + "\r\n");
				this->txtBooks3->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 2).c_str()) + "\r\n");
				this->txtBooks3->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 2).c_str()) + "\r\n");
				this->txtBooks3->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 2).c_str()) + "\r\n");
				this->txtBooks3->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 2)) + "\r\n");
				this->txtBooks3->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 2)) + "\r\n");
				this->txtBooks3->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 2)) + "\r\n");
			}

			if (Books >= 4) {
				this->txtBooks4->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 3).c_str()) + "\r\n");
				this->txtBooks4->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 3).c_str()) + "\r\n");
				this->txtBooks4->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 3).c_str()) + "\r\n");
				this->txtBooks4->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 3).c_str()) + "\r\n");
				this->txtBooks4->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 3)) + "\r\n");
				this->txtBooks4->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 3)) + "\r\n");
				this->txtBooks4->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 3)) + "\r\n");
			}

			if (Books >= 5) {
				this->txtBooks5->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 4).c_str()) + "\r\n");
				this->txtBooks5->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 4).c_str()) + "\r\n");
				this->txtBooks5->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 4).c_str()) + "\r\n");
				this->txtBooks5->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 4).c_str()) + "\r\n");
				this->txtBooks5->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 4)) + "\r\n");
				this->txtBooks5->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 4)) + "\r\n");
				this->txtBooks5->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 4)) + "\r\n");
			}

			if (Books >= 6) {
				this->txtBooks6->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 5).c_str()) + "\r\n");
				this->txtBooks6->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 5).c_str()) + "\r\n");
				this->txtBooks6->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 5).c_str()) + "\r\n");
				this->txtBooks6->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 5).c_str()) + "\r\n");
				this->txtBooks6->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 5)) + "\r\n");
				this->txtBooks6->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 5)) + "\r\n");
				this->txtBooks6->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 5)) + "\r\n");
			}

			if (Books >= 7) {
				this->txtBooks7->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 6).c_str()) + "\r\n");
				this->txtBooks7->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 6).c_str()) + "\r\n");
				this->txtBooks7->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 6).c_str()) + "\r\n");
				this->txtBooks7->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 6).c_str()) + "\r\n");
				this->txtBooks7->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 6)) + "\r\n");
				this->txtBooks7->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 6)) + "\r\n");
				this->txtBooks7->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 6)) + "\r\n");
			}

			if (Books >= 8) {
				this->txtBooks8->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 7).c_str()) + "\r\n");
				this->txtBooks8->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 7).c_str()) + "\r\n");
				this->txtBooks8->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 7).c_str()) + "\r\n");
				this->txtBooks8->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 7).c_str()) + "\r\n");
				this->txtBooks8->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 7)) + "\r\n");
				this->txtBooks8->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 7)) + "\r\n");
				this->txtBooks8->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 7)) + "\r\n");
			}

			if (Books >= 9) {
				this->txtBooks9->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 8).c_str()) + "\r\n");
				this->txtBooks9->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 8).c_str()) + "\r\n");
				this->txtBooks9->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 8).c_str()) + "\r\n");
				this->txtBooks9->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 8).c_str()) + "\r\n");
				this->txtBooks9->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 8)) + "\r\n");
				this->txtBooks9->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 8)) + "\r\n");
				this->txtBooks9->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 8)) + "\r\n");
			}

			if (Books >= 10) {
				this->txtBooks10->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 9).c_str()) + "\r\n");
				this->txtBooks10->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 9).c_str()) + "\r\n");
				this->txtBooks10->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 9).c_str()) + "\r\n");
				this->txtBooks10->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 9).c_str()) + "\r\n");
				this->txtBooks10->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 9)) + "\r\n");
				this->txtBooks10->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 9)) + "\r\n");
				this->txtBooks10->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 9)) + "\r\n");
			}

			if (Books >= 11) {
				this->txtBooks11->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 10).c_str()) + "\r\n");
				this->txtBooks11->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 10).c_str()) + "\r\n");
				this->txtBooks11->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 10).c_str()) + "\r\n");
				this->txtBooks11->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 10).c_str()) + "\r\n");
				this->txtBooks11->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 10)) + "\r\n");
				this->txtBooks11->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 10)) + "\r\n");
				this->txtBooks11->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 10)) + "\r\n");
			}

			if (Books >= 12) {
				this->txtBooks12->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 11).c_str()) + "\r\n");
				this->txtBooks12->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 11).c_str()) + "\r\n");
				this->txtBooks12->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 11).c_str()) + "\r\n");
				this->txtBooks12->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 11).c_str()) + "\r\n");
				this->txtBooks12->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 11)) + "\r\n");
				this->txtBooks12->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 11)) + "\r\n");
				this->txtBooks12->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 11)) + "\r\n");
			}

			if (Books >= 13) {
				this->txtBooks13->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 12).c_str()) + "\r\n");
				this->txtBooks13->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 12).c_str()) + "\r\n");
				this->txtBooks13->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 12).c_str()) + "\r\n");
				this->txtBooks13->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 12).c_str()) + "\r\n");
				this->txtBooks13->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 12)) + "\r\n");
				this->txtBooks13->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 12)) + "\r\n");
				this->txtBooks13->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 12)) + "\r\n");
			}

			if (Books >= 14) {
				this->txtBooks14->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 13).c_str()) + "\r\n");
				this->txtBooks14->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 13).c_str()) + "\r\n");
				this->txtBooks14->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 13).c_str()) + "\r\n");
				this->txtBooks14->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 13).c_str()) + "\r\n");
				this->txtBooks14->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 13)) + "\r\n");
				this->txtBooks14->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 13)) + "\r\n");
				this->txtBooks14->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 13)) + "\r\n");
			}

			if (Books >= 15) {
				this->txtBooks15->AppendText("��������: " + gcnew String(MV.RetSTRING(1, 14).c_str()) + "\r\n");
				this->txtBooks15->AppendText("�����: " + gcnew String(MV.RetSTRING(2, 14).c_str()) + "\r\n");
				this->txtBooks15->AppendText("��������: " + gcnew String(MV.RetSTRING(3, 14).c_str()) + "\r\n");
				this->txtBooks15->AppendText("��������: " + gcnew String(MV.RetSTRING(4, 14).c_str()) + "\r\n");
				this->txtBooks15->AppendText("����: " + System::Convert::ToInt32(MV.RetINT(1, 14)) + "\r\n");
				this->txtBooks15->AppendText("����������: " + System::Convert::ToInt32(MV.RetINT(2, 14)) + "\r\n");
				this->txtBooks15->AppendText("�������: " + System::Convert::ToInt32(MV.RetINT(3, 14)) + "\r\n");
			}
		}

		void ClearAll() {
			this->lblDay->Text = "���� ������ ��������: ";
			this->lblBooksQ->Text = "����� ���� � �������: ";
			this->lblBooks->Text = "����� ����� ����: ";
			this->lblMoney->Text = "�������: " + "0 ���.";
			this->lblBooksSell->Text = "������� ����: " + "0 ��.";
			this->lblTop1->Text = "��� 1 - ";
			this->lblTop2->Text = "��� 2 - ";
			this->lblTop3->Text = "��� 3 - ";
			this->txtBooks1->Clear();
			this->txtBooks2->Clear();
			this->txtBooks3->Clear();
			this->txtBooks4->Clear();
			this->txtBooks5->Clear();
			this->txtBooks6->Clear();
			this->txtBooks7->Clear();
			this->txtBooks8->Clear();
			this->txtBooks9->Clear();
			this->txtBooks10->Clear();
			this->txtBooks11->Clear();
			this->txtBooks12->Clear();
			this->txtBooks13->Clear();
			this->txtBooks14->Clear();
			this->txtBooks15->Clear();
			this->txtConsole->Clear();
			this->txtConsole2->Clear();
		}

		void Top() {
			int max1 = 0, max2 = 0, max3 = 0, ii = 0;
			for (int i = 0; i < MV.ASize(); i++) { // ���� ������������ ����� ���� �� ��������
				if (MV.RetSellsBook(i) > max1) {
					max1 = MV.RetSellsBook(i);
					ii = i;
				}
			}
			this->lblTop1->Text = "��� 1 - " + gcnew String(MV.RetNameWithoutBuyBook(ii).c_str());
			for (int i = 0; i < MV.ASize(); i++) { // ���� ������������, ������� ������ max1
				if (MV.RetSellsBook(i) > max2 && MV.RetSellsBook(i) < max1) {
					max2 = MV.RetSellsBook(i);
					ii = i;
				}
			}
			this->lblTop2->Text = "��� 2 - " + gcnew String(MV.RetNameWithoutBuyBook(ii).c_str());
			for (int i = 0; i < MV.ASize(); i++) { // ���� ������������, ������� ������ max2
				if (MV.RetSellsBook(i) > max3 && MV.RetSellsBook(i) < max2) {
					max3 = MV.RetSellsBook(i);
					ii = i;
				}
			}
			this->lblTop3->Text = "��� 3 - " + gcnew String(MV.RetNameWithoutBuyBook(ii).c_str());
		}

		void UpdateBooks() {
			int r, rr;

			for (int i = 0; i < MV.ASize(); i++) { // ������� ������� � ����
				if (MV.RetDiscount(i) > 0) { // ���� � ���� ����� ���� �������
					if (1 + rand() % ((100 + 1) - 1) > 30){ // ���� ��������� ������ 30, �� ������� ������ (���� �� ��������� ������ = 30%)
						MV.DelDiscount(i);
						this->txtConsole2->AppendText("| �����: [" + gcnew String(MV.RetName(i).c_str()) + "] ������ �������" + "\r\n" + "\r\n");
					}
				}
			}

			for (int i = 0; i < MV.ASize(); i++) { // ����������� �� ������ �����
				if (MV.RetApplication(i) == true) { // ���� � ����� ���� ������ � ������������
					MV.AddDays(i); // ��������� +1 ���� � ���� �������
					//rr = rand() % 4 + 3;
					rr = 3 + rand() % ((5 + 1) - 3); // ���������� ����� �� 3 �� 5 - ���� �������� �����
					if (MV.RetApplication(i) == true && MV.RetDays(i) >= rr) { // ���� ���� ������ � ������������ � ���� �������� ������ ��� ����� ���������������� ����� �������
						MV.SetFalse(i); // �� ������� �������
						MV.ClearDays(i); // ������� ������� ���� ��������
						//r = rand() % 20 + 10;
						int a;
						if (Books > 12)
							a = 1;
						if (Books > 5 && Books < 13)
							a = 2;
						if (Books > 2 && Books < 6)
							a = 3;
						if (Books == 1 || Books == 2)
							a = 6;
						r = 25 * a + rand() % ((45 * a + 1) - 25 * a); // ���������� �� 25 �� 45 (���������� ������������ ����)
						MV.AddBooks(i, r); // ����� ��� ������� i ��������� r ����
						this->txtConsole2->AppendText("| ����: " + dd + "\r\n");
						this->txtConsole2->AppendText("| �������� �����: " + gcnew String(MV.RetName(i).c_str()) + "\r\n");
						this->txtConsole2->AppendText("| ���������� ��: " + rr + " ���" + "\r\n");
						this->txtConsole2->AppendText("| � ����������: " + r + " ��." + "\r\n" + "\r\n");

						MV.SetDiscount(i); // ��������� �������
						this->txtConsole2->AppendText("| �����: " + gcnew String(MV.RetName(i).c_str()) + "\r\n");
						this->txtConsole2->AppendText("| ����������� �������: " + Skidka + "%" + "\r\n" + "\r\n");
					}
				}
				if (MV.RetApplication(i) == false && MV.RetQuantity(i) <= 5) { // ���� � ����� ��� ������ � ������������ � ���������� ���� ������ ��� ����� 5
					MV.SetTrue(i); // �� ��������� ������ � ������������
					this->txtConsole2->AppendText("| ����: " + dd + "\r\n");
					this->txtConsole2->AppendText("| ���������� �����: " + gcnew String(MV.RetName(i).c_str()) + "\r\n" + "\r\n");
				}
				
			}
		}

		void SetConsole() {	
			this->txtConsole->AppendText("\r\n");
			this->txtConsole->AppendText("| ���� �������: " + dd + "\r\n");
			int book, plus = 0, m = 0, mm = 0;
			for (int i = 0; i < 1 + rand() % ((4 + 1) + 1); i++) { // ���������� ����� ��������� ���� �� 1 �������
				m = 0;
				do {
					//book = rand() % MV.ASize() - 1;
					if (m < MV.ASize())
						book = 1 + rand() % ((MV.ASize() + 1) - 1) - 1; // ���������� ��������� �����
					else {
						book = mm;
						mm++;
					}
					if (mm >= MV.ASize())
						break;
					m++;
				} while (MV.RetQuantity(book) <= 0);
				if (MV.RetQuantity(book) <= 0)
					this->txtConsole->AppendText("| �����: [" + gcnew String(MV.RetName(book).c_str()) + "] ��������������" + "\r\n");
				else {
					this->txtConsole->AppendText("| �����: " + gcnew String(MV.RetName(book).c_str()) + "\r\n");
					plus += MV.RetPrice(book);

					money += MV.RetPrice(book);
					bookssell++;
				}
			}
			if (m <= MV.ASize()) {
				Top();

				int c;
				//int type = rand() % 100 + 1; // ���������� ��������� ����� �� 1 �� 100
				int type = 1 + rand() % ((100 + 1) - 1);
				if (type > 40) // ���� ����� ������ 40, �� ����� � ��������
					c = 1;
				else if (type > 20 && type < 40) // ���� ������ 20 � ������ 40, �� ����� �� ��������
					c = 2;
				else // ����� ����� �� �����
					c = 3;

				switch (c) {
				case 1:
					this->txtConsole->AppendText("| �����: � ��������" + "\r\n");
					this->txtConsole->AppendText("| ����������: " + gcnew String(VP.GetName().c_str()) + "\r\n");
					break;
				case 2:
					this->txtConsole->AppendText("| �����: �� ��������" + "\r\n");
					this->txtConsole->AppendText("| �������: " + gcnew String(VP.GetPhone().c_str()) + "\r\n");
					break;
				case 3:
					this->txtConsole->AppendText("| �����: �� E-Mail" + "\r\n");
					this->txtConsole->AppendText("| Mail: " + gcnew String(VP.GetEmail().c_str()) + "\r\n");
					break;
				}
				this->txtConsole->AppendText("| �������: " + plus + "\r\n");
			}
		}

		void OneDay() {
			UpdateBooks();
			this->txtConsole->AppendText("===============" + "\r\n");
			//int day = rand() % 10 + 7;
			int day = 7 + rand() % ((10 + 1) - 7); // ���������� ���������� ������� �� ����
			for (int i = 0; i < day; i++)
				SetConsole();
			this->txtConsole->AppendText("\r\n" + "===============" + "\r\n");
		}

		long long X;
		long long Y;
		long long Z;
		bool fl = false;
		bool ps = false;
		bool one = false;
		bool two = false;
		bool three = false;
		int dd = 0;
		int money = 0;
		int bookssell = 0;
		int defday;
		int Books;
		int Skidka;

		
		

	private: System::Void btnAddBooks_Click(System::Object^  sender, System::EventArgs^  e) {
		this->errorProvider1->Clear();
			bool result1 = Int64::TryParse(this->txtN->Text, X); // ��������� ������ �� txtN � �����
			if (this->txtN->Text == "") {
				errorProvider1->SetError(txtN, "�� ������� ��������");
			}
			else {
				if (!result1) { // ����� �� �����
					errorProvider1->SetError(txtN, "������ ������ ������");
				}
				else {
					if (X == 0) {
						errorProvider1->SetError(txtN, "��� �������� �� ����� ���� ������ ����");
					}
					else {
						if (X < 0) {
							errorProvider1->SetError(txtN, "��� �������� �� ����� ���� �������������");
						}
						else {
							defday = X;
							one = true;
						}
					}
				}
			}


			bool result2 = Int64::TryParse(this->txtBooks->Text, Y); // ��������� ������ �� txtBooks � �����
			if (this->txtBooks->Text == "") {
				errorProvider1->SetError(txtBooks, "�� ������� ��������");
			}
			else {
				if (!result2) {// ����� �� �����
					errorProvider1->SetError(txtBooks, "������ ������ ������");
				}
				else {
					if (Y == 0) {
						errorProvider1->SetError(txtBooks, "��� �������� �� ����� ���� ������ ����");
					}
					else {
						if (Y < 0) {
							errorProvider1->SetError(txtBooks, "��� �������� �� ����� ���� �������������");
						}
						else {
							if (Y > 15) {
								errorProvider1->SetError(txtBooks, "��� �������� ������ ���� < 16");
							}
							else {
								Books = Y;
								two = true;
							}
						}
					}
				}
			}


			bool result3 = Int64::TryParse(this->txtApp->Text, Z); // ��������� ������ �� txtApp � �����
			if (this->txtBooks->Text == "") {
				errorProvider1->SetError(txtApp, "�� ������� ��������");
			}
			else {
				if (!result3) { // ����� �� �����
					errorProvider1->SetError(txtApp, "������ ������ ������");
				}
				else {
					if (Z == 0) {
						errorProvider1->SetError(txtApp, "��� �������� �� ����� ���� ������ ����");
					}
					else {
						if (Z < 0) {
							errorProvider1->SetError(txtApp, "��� �������� �� ����� ���� �������������");
						}
						else {
							Skidka = Z;
							three = true;
						}
					}
				}
			}
			
			if (one == true && two == true && three == true) {
				if (fl == false) {
					this->btnStartStop->Text = "����";
					fl = true;
					SetClientele();
					MV.Clear();
					SetDefaultBooks();
					MV.DelLastBooks(Books);
					MV.SetSkidka(Skidka);
					UpdateInfo();
					this->timer1->Interval = 1000;
					this->timer1->Start();
					this->btnPause->Enabled = true;
				}
				else {
					this->btnStartStop->Text = "�����";
					fl = false;
					this->timer1->Stop();
					ClearAll();
					dd = 0;
					money = 0;
					bookssell = 0;
					this->btnPause->Text = "�����";
					this->btnPause->Enabled = false;
					this->txtConsole->Clear();
				}
			}
	}
private: System::Void txtBooks1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	dd++;
	UpdateInfo();
	if (dd > defday) {
		this->timer1->Stop();
		this->txtConsole->AppendText("---��������� ���������--");
		this->txtConsole2->AppendText("---��������� ���������--");
	}
	else {
		this->lblDay->Text = "���� ������ ��������: " + dd;
		OneDay();
	}
}
private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ps == false) {
			this->btnPause->Text = "�����������";
			this->timer1->Stop();
			ps = true;
		}
		else {
			this->btnPause->Text = "�����";
			this->timer1->Start();
			ps = false;
		}
}
};
}
