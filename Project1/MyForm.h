#pragma once
#include "student.h"
#include <string>
#include <msclr\marshal_cppstd.h>

std::string con(System::String^ managedString )
{
	

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(managedString);

	return standardString;
}


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ up_pa;
	protected:
	private: System::Windows::Forms::Panel^ bo_pa;
	private: System::Windows::Forms::Panel^ ri_pa;

	private: System::Windows::Forms::Button^ bu_x;
	private: System::Windows::Forms::Button^ restore_butt;
	private: System::Windows::Forms::Button^ min_butt;


	private: System::Windows::Forms::Button^ info_butt;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ bu_add;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ modify_but;
	private: System::Windows::Forms::Button^ s_butt;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ main_lable;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ no_box;
	private: System::Windows::Forms::TextBox^ id_box;
	private: System::Windows::Forms::TextBox^ age_box;

	private: System::Windows::Forms::TextBox^ name_box;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ gpa_box;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ c_label;
	private: System::Windows::Forms::PictureBox^ pictureBox2;







	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->up_pa = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->restore_butt = (gcnew System::Windows::Forms::Button());
			this->info_butt = (gcnew System::Windows::Forms::Button());
			this->min_butt = (gcnew System::Windows::Forms::Button());
			this->bu_x = (gcnew System::Windows::Forms::Button());
			this->bo_pa = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->main_lable = (gcnew System::Windows::Forms::Label());
			this->ri_pa = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bu_add = (gcnew System::Windows::Forms::Button());
			this->modify_but = (gcnew System::Windows::Forms::Button());
			this->s_butt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->c_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gpa_box = (gcnew System::Windows::Forms::TextBox());
			this->no_box = (gcnew System::Windows::Forms::TextBox());
			this->id_box = (gcnew System::Windows::Forms::TextBox());
			this->age_box = (gcnew System::Windows::Forms::TextBox());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->up_pa->SuspendLayout();
			this->bo_pa->SuspendLayout();
			this->ri_pa->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// up_pa
			// 
			this->up_pa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->up_pa->Controls->Add(this->label1);
			this->up_pa->Controls->Add(this->restore_butt);
			this->up_pa->Controls->Add(this->info_butt);
			this->up_pa->Controls->Add(this->min_butt);
			this->up_pa->Controls->Add(this->bu_x);
			this->up_pa->Dock = System::Windows::Forms::DockStyle::Top;
			this->up_pa->Location = System::Drawing::Point(0, 0);
			this->up_pa->Name = L"up_pa";
			this->up_pa->Size = System::Drawing::Size(1237, 46);
			this->up_pa->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Aldhabi", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(583, -5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 51);
			this->label1->TabIndex = 3;
			this->label1->Text = L"SMC";
			// 
			// restore_butt
			// 
			this->restore_butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->restore_butt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restore_butt.BackgroundImage")));
			this->restore_butt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->restore_butt->FlatAppearance->BorderSize = 0;
			this->restore_butt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restore_butt->ForeColor = System::Drawing::Color::Black;
			this->restore_butt->Location = System::Drawing::Point(60, 3);
			this->restore_butt->Name = L"restore_butt";
			this->restore_butt->Size = System::Drawing::Size(51, 40);
			this->restore_butt->TabIndex = 2;
			this->restore_butt->UseVisualStyleBackColor = false;
			this->restore_butt->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// info_butt
			// 
			this->info_butt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->info_butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->info_butt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"info_butt.BackgroundImage")));
			this->info_butt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->info_butt->FlatAppearance->BorderSize = 0;
			this->info_butt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->info_butt->ForeColor = System::Drawing::Color::Black;
			this->info_butt->Location = System::Drawing::Point(1183, 3);
			this->info_butt->Name = L"info_butt";
			this->info_butt->Size = System::Drawing::Size(51, 40);
			this->info_butt->TabIndex = 1;
			this->info_butt->UseVisualStyleBackColor = false;
			this->info_butt->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// min_butt
			// 
			this->min_butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->min_butt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min_butt.BackgroundImage")));
			this->min_butt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->min_butt->FlatAppearance->BorderSize = 0;
			this->min_butt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min_butt->ForeColor = System::Drawing::Color::Black;
			this->min_butt->Location = System::Drawing::Point(117, 3);
			this->min_butt->Name = L"min_butt";
			this->min_butt->Size = System::Drawing::Size(51, 40);
			this->min_butt->TabIndex = 1;
			this->min_butt->UseVisualStyleBackColor = false;
			this->min_butt->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// bu_x
			// 
			this->bu_x->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->bu_x->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu_x.BackgroundImage")));
			this->bu_x->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bu_x->FlatAppearance->BorderSize = 0;
			this->bu_x->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_x->ForeColor = System::Drawing::Color::Black;
			this->bu_x->Location = System::Drawing::Point(3, 3);
			this->bu_x->Name = L"bu_x";
			this->bu_x->Size = System::Drawing::Size(51, 40);
			this->bu_x->TabIndex = 0;
			this->bu_x->UseVisualStyleBackColor = false;
			this->bu_x->Click += gcnew System::EventHandler(this, &MyForm::bu_x_Click);
			// 
			// bo_pa
			// 
			this->bo_pa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bo_pa->Controls->Add(this->label8);
			this->bo_pa->Controls->Add(this->main_lable);
			this->bo_pa->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bo_pa->Location = System::Drawing::Point(0, 488);
			this->bo_pa->Name = L"bo_pa";
			this->bo_pa->Size = System::Drawing::Size(1237, 177);
			this->bo_pa->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(-4, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 21);
			this->label8->TabIndex = 5;
			this->label8->Text = L"stu_pro project V0.1";
			// 
			// main_lable
			// 
			this->main_lable->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->main_lable->AutoSize = true;
			this->main_lable->Font = (gcnew System::Drawing::Font(L"Aldhabi", 14.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->main_lable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->main_lable->Location = System::Drawing::Point(566, 0);
			this->main_lable->Name = L"main_lable";
			this->main_lable->Size = System::Drawing::Size(85, 39);
			this->main_lable->TabIndex = 4;
			this->main_lable->Text = L"ÇáÇÔÚÇÑÇÊ";
			// 
			// ri_pa
			// 
			this->ri_pa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ri_pa->Controls->Add(this->flowLayoutPanel1);
			this->ri_pa->Controls->Add(this->panel1);
			this->ri_pa->Dock = System::Windows::Forms::DockStyle::Right;
			this->ri_pa->Location = System::Drawing::Point(1037, 46);
			this->ri_pa->Name = L"ri_pa";
			this->ri_pa->Size = System::Drawing::Size(200, 442);
			this->ri_pa->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->modify_but);
			this->flowLayoutPanel1->Controls->Add(this->bu_add);
			this->flowLayoutPanel1->Controls->Add(this->s_butt);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 179);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(200, 263);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// bu_add
			// 
			this->bu_add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bu_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->bu_add->FlatAppearance->BorderSize = 0;
			this->bu_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bu_add->ForeColor = System::Drawing::Color::Transparent;
			this->bu_add->Location = System::Drawing::Point(3, 76);
			this->bu_add->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->bu_add->Name = L"bu_add";
			this->bu_add->Size = System::Drawing::Size(194, 55);
			this->bu_add->TabIndex = 2;
			this->bu_add->Text = L"ÇÖÇÝÉ ÇáØÇáÈ";
			this->bu_add->UseVisualStyleBackColor = false;
			this->bu_add->Click += gcnew System::EventHandler(this, &MyForm::bu_add_Click);
			// 
			// modify_but
			// 
			this->modify_but->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->modify_but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->modify_but->FlatAppearance->BorderSize = 0;
			this->modify_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modify_but->ForeColor = System::Drawing::Color::Transparent;
			this->modify_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->modify_but->Location = System::Drawing::Point(3, 7);
			this->modify_but->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->modify_but->Name = L"modify_but";
			this->modify_but->Size = System::Drawing::Size(194, 55);
			this->modify_but->TabIndex = 4;
			this->modify_but->Text = L"ÊÚÏíá ÇáØÇáÈ";
			this->modify_but->UseVisualStyleBackColor = false;
			this->modify_but->Click += gcnew System::EventHandler(this, &MyForm::modify_but_Click);
			// 
			// s_butt
			// 
			this->s_butt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->s_butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->s_butt->FlatAppearance->BorderSize = 0;
			this->s_butt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s_butt->ForeColor = System::Drawing::Color::Transparent;
			this->s_butt->Location = System::Drawing::Point(3, 141);
			this->s_butt->Name = L"s_butt";
			this->s_butt->Size = System::Drawing::Size(194, 55);
			this->s_butt->TabIndex = 5;
			this->s_butt->Text = L"ÈÍË Úä ÇáØÇáÈ";
			this->s_butt->UseVisualStyleBackColor = false;
			this->s_butt->Click += gcnew System::EventHandler(this, &MyForm::s_butt_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 179);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Aldhabi", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(68, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 53);
			this->label2->TabIndex = 1;
			this->label2->Text = L"GG";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(31, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 117);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->c_label);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->gpa_box);
			this->panel2->Controls->Add(this->no_box);
			this->panel2->Controls->Add(this->id_box);
			this->panel2->Controls->Add(this->age_box);
			this->panel2->Controls->Add(this->name_box);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 46);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1034, 450);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// c_label
			// 
			this->c_label->AutoSize = true;
			this->c_label->Font = (gcnew System::Drawing::Font(L"Aldhabi", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->c_label->ForeColor = System::Drawing::Color::Gainsboro;
			this->c_label->Location = System::Drawing::Point(65, 183);
			this->c_label->Name = L"c_label";
			this->c_label->Size = System::Drawing::Size(0, 51);
			this->c_label->TabIndex = 11;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(39, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(126, 141);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Aldhabi", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(917, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 44);
			this->label7->TabIndex = 9;
			this->label7->Text = L"ÇáÑÞã ÇáÇßÇÏíãí";
			// 
			// gpa_box
			// 
			this->gpa_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->gpa_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gpa_box->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->gpa_box->ForeColor = System::Drawing::SystemColors::Window;
			this->gpa_box->Location = System::Drawing::Point(642, 270);
			this->gpa_box->Name = L"gpa_box";
			this->gpa_box->Size = System::Drawing::Size(269, 41);
			this->gpa_box->TabIndex = 8;
			// 
			// no_box
			// 
			this->no_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->no_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->no_box->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->no_box->ForeColor = System::Drawing::SystemColors::Window;
			this->no_box->Location = System::Drawing::Point(642, 216);
			this->no_box->Name = L"no_box";
			this->no_box->Size = System::Drawing::Size(269, 41);
			this->no_box->TabIndex = 7;
			// 
			// id_box
			// 
			this->id_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->id_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id_box->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->id_box->ForeColor = System::Drawing::SystemColors::Window;
			this->id_box->Location = System::Drawing::Point(642, 158);
			this->id_box->Name = L"id_box";
			this->id_box->Size = System::Drawing::Size(269, 41);
			this->id_box->TabIndex = 6;
			// 
			// age_box
			// 
			this->age_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->age_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->age_box->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->age_box->ForeColor = System::Drawing::Color::Transparent;
			this->age_box->Location = System::Drawing::Point(642, 104);
			this->age_box->Name = L"age_box";
			this->age_box->Size = System::Drawing::Size(269, 41);
			this->age_box->TabIndex = 5;
			// 
			// name_box
			// 
			this->name_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->name_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_box->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->name_box->ForeColor = System::Drawing::SystemColors::Window;
			this->name_box->Location = System::Drawing::Point(642, 46);
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(269, 41);
			this->name_box->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Aldhabi", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(917, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 44);
			this->label6->TabIndex = 3;
			this->label6->Text = L"ÇáÚãÑ ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Aldhabi", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(917, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 44);
			this->label5->TabIndex = 2;
			this->label5->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Aldhabi", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(917, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 44);
			this->label4->TabIndex = 1;
			this->label4->Text = L"GPA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Aldhabi", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(917, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 44);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ÇÓã ÇáØÇáÈ ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 35);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1237, 665);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ri_pa);
			this->Controls->Add(this->bo_pa);
			this->Controls->Add(this->up_pa);
			this->Font = (gcnew System::Drawing::Font(L"Aldhabi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GG";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->up_pa->ResumeLayout(false);
			this->up_pa->PerformLayout();
			this->bo_pa->ResumeLayout(false);
			this->bo_pa->PerformLayout();
			this->ri_pa->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
private: System::Void bu_add_Click(System::Object^ sender, System::EventArgs^ e) {
	student s;
	int g= s.get_data(std::stoi(con(no_box->Text)),con(name_box->Text), std::stol(con(id_box->Text)),stoi(con(age_box->Text)), stod(con(gpa_box->Text )));

	if (g) {
		main_lable->Text = "Êã ÍÝÙ ÇáÈíÇäÇÊ ÈäÌÇÍ ";
	}
	else
	{
		main_lable->Text = "ÊÃßÏ ãä ÇáÈíÇäÇÊ ÇáãÏÎáÉ ";
	}

	int cou = s.count();

	std::string str = std::to_string(cou);
	String^ str2 = gcnew String(str.c_str());

	c_label->Text = str2;



}
private: System::Void bu_x_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Environment::Exit(0);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if ( this-> WindowState == FormWindowState::Maximized) {
		this->WindowState = FormWindowState::Normal;
	}
	else {
		this->WindowState = FormWindowState::Maximized;
	}

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	main_lable->Text = "student project \náÅÖÇÝÉ ØÇáÈ ÇÏÎá ÇáÈíÇäÇÊ ÈÔßá ÕÍíÍ íÊã ÇÏÎÇá ÇáÈíÇäÇÊ ÈÇááÛÉ ÇáÇäÌáíÒíÉ ÝÞØ \náÅÒÇáÉ ØÇáÈ Çæ ÇáÈÍË Úäå ÇßÊÈ ÝÞØ ID\nenjoy with our programe";
}
private: System::Void del_butt_Click(System::Object^ sender, System::EventArgs^ e) {
	student s;
	int del = s.delete_data(std::stol(con(id_box->Text)));

	if (del) {
		main_lable->Text = "data dele ";
	}
	else {
		main_lable->Text = "ÊÃßÏ ãä ÇáÈíÇäÇÊ ÇáãÏÎáÉ ";

	}
	
}
private: System::Void modify_but_Click(System::Object^ sender, System::EventArgs^ e) {
	student s;
	//s.modify_data(std::stoi(con(no_box->Text)), con(name_box->Text), std::stol(con(id_box->Text)), stoi(con(age_box->Text)), stod(con(gpa_box->Text)));
	main_lable->Text = "Êã ÊÚÏíá ÇáÈíÇäÇÊ";

}
private: System::Void s_butt_Click(System::Object^ sender, System::EventArgs^ e) {
	student s;
	std::string str = s.show_data(std::stol(con(id_box->Text)));
	String^ str2 = gcnew String(str.c_str());

	main_lable->Text = str2;

}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
