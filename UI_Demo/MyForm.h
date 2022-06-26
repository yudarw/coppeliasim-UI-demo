#pragma once
#include <iostream>

namespace UI_Demo {

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
		void btn_connect();
		void btn_start_sim();
		void btn_stop_sim();
		void on_init();
		void change_label();
		void btn_get_position();
		void update_pos_data();
		void on_timer();
		void btn_set_position();
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
	private: System::Windows::Forms::Button^  btn_x_plus;
	protected:
	private: System::Windows::Forms::Button^  btn_x_min;
	private: System::Windows::Forms::Button^  btn_rz_plus;
	private: System::Windows::Forms::Button^  btn_rz_min;
	private: System::Windows::Forms::Button^  btn_y_plus;
	private: System::Windows::Forms::Button^  btn_ry_plus;
	private: System::Windows::Forms::Button^  btn_z_min;
	private: System::Windows::Forms::Button^  btn_ry_min;
	private: System::Windows::Forms::TextBox^  tb_pos_ry;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  btn_y_min;
	private: System::Windows::Forms::Button^  btn_z_plus;
	private: System::Windows::Forms::Button^  btn_rx_plus;
	private: System::Windows::Forms::Button^  btn_rx_min;
	private: System::Windows::Forms::Label^  label_ry;
	private: System::Windows::Forms::TextBox^  tb_pos_rz;
	private: System::Windows::Forms::Label^  label_rx;
	private: System::Windows::Forms::TextBox^  tb_pos_x;
	private: System::Windows::Forms::Label^  label_rz;
	private: System::Windows::Forms::Label^  label_y;
	private: System::Windows::Forms::Label^  label_x;
	private: System::Windows::Forms::Label^  label_z;
	private: System::Windows::Forms::TextBox^  tb_pos_z;
	private: System::Windows::Forms::TextBox^  tb_pos_rx;
	private: System::Windows::Forms::TextBox^  tb_pos_y;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  label_status;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  rtb;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  cb_selectmode;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tb_set_x;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_set_y;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_set_z;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_set_rx;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tb_set_rz;
	private: System::Windows::Forms::TextBox^  tb_set_ry;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btn_x_plus = (gcnew System::Windows::Forms::Button());
			this->btn_x_min = (gcnew System::Windows::Forms::Button());
			this->btn_rz_plus = (gcnew System::Windows::Forms::Button());
			this->btn_rz_min = (gcnew System::Windows::Forms::Button());
			this->btn_y_plus = (gcnew System::Windows::Forms::Button());
			this->btn_ry_plus = (gcnew System::Windows::Forms::Button());
			this->btn_z_min = (gcnew System::Windows::Forms::Button());
			this->btn_ry_min = (gcnew System::Windows::Forms::Button());
			this->tb_pos_ry = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_y_min = (gcnew System::Windows::Forms::Button());
			this->btn_z_plus = (gcnew System::Windows::Forms::Button());
			this->btn_rx_plus = (gcnew System::Windows::Forms::Button());
			this->btn_rx_min = (gcnew System::Windows::Forms::Button());
			this->label_ry = (gcnew System::Windows::Forms::Label());
			this->tb_pos_rz = (gcnew System::Windows::Forms::TextBox());
			this->label_rx = (gcnew System::Windows::Forms::Label());
			this->tb_pos_x = (gcnew System::Windows::Forms::TextBox());
			this->label_rz = (gcnew System::Windows::Forms::Label());
			this->label_y = (gcnew System::Windows::Forms::Label());
			this->label_x = (gcnew System::Windows::Forms::Label());
			this->label_z = (gcnew System::Windows::Forms::Label());
			this->tb_pos_z = (gcnew System::Windows::Forms::TextBox());
			this->tb_pos_rx = (gcnew System::Windows::Forms::TextBox());
			this->tb_pos_y = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->label_status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->rtb = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_selectmode = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_set_x = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_set_y = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_set_z = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_set_rx = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_set_rz = (gcnew System::Windows::Forms::TextBox());
			this->tb_set_ry = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_x_plus
			// 
			this->btn_x_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_x_plus->Location = System::Drawing::Point(81, 19);
			this->btn_x_plus->Name = L"btn_x_plus";
			this->btn_x_plus->Size = System::Drawing::Size(55, 40);
			this->btn_x_plus->TabIndex = 19;
			this->btn_x_plus->Text = L"X+";
			this->btn_x_plus->UseVisualStyleBackColor = true;
			// 
			// btn_x_min
			// 
			this->btn_x_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_x_min->Location = System::Drawing::Point(20, 19);
			this->btn_x_min->Name = L"btn_x_min";
			this->btn_x_min->Size = System::Drawing::Size(55, 40);
			this->btn_x_min->TabIndex = 18;
			this->btn_x_min->Text = L"X-";
			this->btn_x_min->UseVisualStyleBackColor = true;
			// 
			// btn_rz_plus
			// 
			this->btn_rz_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_rz_plus->Location = System::Drawing::Point(221, 111);
			this->btn_rz_plus->Name = L"btn_rz_plus";
			this->btn_rz_plus->Size = System::Drawing::Size(55, 40);
			this->btn_rz_plus->TabIndex = 29;
			this->btn_rz_plus->Text = L"Rz+";
			this->btn_rz_plus->UseVisualStyleBackColor = true;
			// 
			// btn_rz_min
			// 
			this->btn_rz_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_rz_min->Location = System::Drawing::Point(160, 111);
			this->btn_rz_min->Name = L"btn_rz_min";
			this->btn_rz_min->Size = System::Drawing::Size(55, 40);
			this->btn_rz_min->TabIndex = 28;
			this->btn_rz_min->Text = L"Rz-";
			this->btn_rz_min->UseVisualStyleBackColor = true;
			// 
			// btn_y_plus
			// 
			this->btn_y_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_y_plus->Location = System::Drawing::Point(81, 65);
			this->btn_y_plus->Name = L"btn_y_plus";
			this->btn_y_plus->Size = System::Drawing::Size(55, 40);
			this->btn_y_plus->TabIndex = 21;
			this->btn_y_plus->Text = L"Y+";
			this->btn_y_plus->UseVisualStyleBackColor = true;
			// 
			// btn_ry_plus
			// 
			this->btn_ry_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ry_plus->Location = System::Drawing::Point(221, 65);
			this->btn_ry_plus->Name = L"btn_ry_plus";
			this->btn_ry_plus->Size = System::Drawing::Size(55, 40);
			this->btn_ry_plus->TabIndex = 27;
			this->btn_ry_plus->Text = L"Ry+";
			this->btn_ry_plus->UseVisualStyleBackColor = true;
			// 
			// btn_z_min
			// 
			this->btn_z_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_z_min->Location = System::Drawing::Point(20, 111);
			this->btn_z_min->Name = L"btn_z_min";
			this->btn_z_min->Size = System::Drawing::Size(55, 40);
			this->btn_z_min->TabIndex = 22;
			this->btn_z_min->Text = L"Z-";
			this->btn_z_min->UseVisualStyleBackColor = true;
			// 
			// btn_ry_min
			// 
			this->btn_ry_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ry_min->Location = System::Drawing::Point(160, 65);
			this->btn_ry_min->Name = L"btn_ry_min";
			this->btn_ry_min->Size = System::Drawing::Size(55, 40);
			this->btn_ry_min->TabIndex = 26;
			this->btn_ry_min->Text = L"Ry-";
			this->btn_ry_min->UseVisualStyleBackColor = true;
			// 
			// tb_pos_ry
			// 
			this->tb_pos_ry->BackColor = System::Drawing::Color::White;
			this->tb_pos_ry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_ry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_ry->Location = System::Drawing::Point(189, 53);
			this->tb_pos_ry->Name = L"tb_pos_ry";
			this->tb_pos_ry->Size = System::Drawing::Size(75, 14);
			this->tb_pos_ry->TabIndex = 27;
			this->tb_pos_ry->Text = L"0.000";
			this->tb_pos_ry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btn_x_plus);
			this->groupBox4->Controls->Add(this->btn_x_min);
			this->groupBox4->Controls->Add(this->btn_rz_plus);
			this->groupBox4->Controls->Add(this->btn_y_min);
			this->groupBox4->Controls->Add(this->btn_rz_min);
			this->groupBox4->Controls->Add(this->btn_y_plus);
			this->groupBox4->Controls->Add(this->btn_ry_plus);
			this->groupBox4->Controls->Add(this->btn_z_min);
			this->groupBox4->Controls->Add(this->btn_ry_min);
			this->groupBox4->Controls->Add(this->btn_z_plus);
			this->groupBox4->Controls->Add(this->btn_rx_plus);
			this->groupBox4->Controls->Add(this->btn_rx_min);
			this->groupBox4->Location = System::Drawing::Point(9, 164);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(296, 167);
			this->groupBox4->TabIndex = 39;
			this->groupBox4->TabStop = false;
			// 
			// btn_y_min
			// 
			this->btn_y_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_y_min->Location = System::Drawing::Point(20, 65);
			this->btn_y_min->Name = L"btn_y_min";
			this->btn_y_min->Size = System::Drawing::Size(55, 40);
			this->btn_y_min->TabIndex = 20;
			this->btn_y_min->Text = L"Y-";
			this->btn_y_min->UseVisualStyleBackColor = true;
			// 
			// btn_z_plus
			// 
			this->btn_z_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_z_plus->Location = System::Drawing::Point(81, 111);
			this->btn_z_plus->Name = L"btn_z_plus";
			this->btn_z_plus->Size = System::Drawing::Size(55, 40);
			this->btn_z_plus->TabIndex = 23;
			this->btn_z_plus->Text = L"Z+";
			this->btn_z_plus->UseVisualStyleBackColor = true;
			// 
			// btn_rx_plus
			// 
			this->btn_rx_plus->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_rx_plus->Location = System::Drawing::Point(221, 19);
			this->btn_rx_plus->Name = L"btn_rx_plus";
			this->btn_rx_plus->Size = System::Drawing::Size(55, 40);
			this->btn_rx_plus->TabIndex = 25;
			this->btn_rx_plus->Text = L"Rx+";
			this->btn_rx_plus->UseVisualStyleBackColor = true;
			// 
			// btn_rx_min
			// 
			this->btn_rx_min->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_rx_min->Location = System::Drawing::Point(160, 19);
			this->btn_rx_min->Name = L"btn_rx_min";
			this->btn_rx_min->Size = System::Drawing::Size(55, 40);
			this->btn_rx_min->TabIndex = 24;
			this->btn_rx_min->Text = L"Rx-";
			this->btn_rx_min->UseVisualStyleBackColor = true;
			// 
			// label_ry
			// 
			this->label_ry->AutoSize = true;
			this->label_ry->Location = System::Drawing::Point(163, 53);
			this->label_ry->Name = L"label_ry";
			this->label_ry->Size = System::Drawing::Size(23, 13);
			this->label_ry->TabIndex = 30;
			this->label_ry->Text = L"Ry:";
			// 
			// tb_pos_rz
			// 
			this->tb_pos_rz->BackColor = System::Drawing::Color::White;
			this->tb_pos_rz->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_rz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_rz->Location = System::Drawing::Point(189, 79);
			this->tb_pos_rz->Name = L"tb_pos_rz";
			this->tb_pos_rz->Size = System::Drawing::Size(75, 14);
			this->tb_pos_rz->TabIndex = 28;
			this->tb_pos_rz->Text = L"0.000";
			this->tb_pos_rz->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_rx
			// 
			this->label_rx->AutoSize = true;
			this->label_rx->Location = System::Drawing::Point(163, 27);
			this->label_rx->Name = L"label_rx";
			this->label_rx->Size = System::Drawing::Size(23, 13);
			this->label_rx->TabIndex = 29;
			this->label_rx->Text = L"Rx:";
			// 
			// tb_pos_x
			// 
			this->tb_pos_x->BackColor = System::Drawing::Color::White;
			this->tb_pos_x->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_x->Location = System::Drawing::Point(54, 27);
			this->tb_pos_x->Name = L"tb_pos_x";
			this->tb_pos_x->Size = System::Drawing::Size(75, 14);
			this->tb_pos_x->TabIndex = 20;
			this->tb_pos_x->Text = L"0.000";
			this->tb_pos_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_rz
			// 
			this->label_rz->AutoSize = true;
			this->label_rz->Location = System::Drawing::Point(163, 79);
			this->label_rz->Name = L"label_rz";
			this->label_rz->Size = System::Drawing::Size(23, 13);
			this->label_rz->TabIndex = 31;
			this->label_rz->Text = L"Rz:";
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(29, 53);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(20, 13);
			this->label_y->TabIndex = 23;
			this->label_y->Text = L"Y :";
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(29, 27);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(20, 13);
			this->label_x->TabIndex = 21;
			this->label_x->Text = L"X :";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(29, 79);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(20, 13);
			this->label_z->TabIndex = 25;
			this->label_z->Text = L"Z :";
			// 
			// tb_pos_z
			// 
			this->tb_pos_z->BackColor = System::Drawing::Color::White;
			this->tb_pos_z->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_z->Location = System::Drawing::Point(54, 79);
			this->tb_pos_z->Name = L"tb_pos_z";
			this->tb_pos_z->Size = System::Drawing::Size(75, 14);
			this->tb_pos_z->TabIndex = 24;
			this->tb_pos_z->Text = L"0.000";
			this->tb_pos_z->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb_pos_rx
			// 
			this->tb_pos_rx->BackColor = System::Drawing::Color::White;
			this->tb_pos_rx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_rx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_rx->Location = System::Drawing::Point(189, 27);
			this->tb_pos_rx->Name = L"tb_pos_rx";
			this->tb_pos_rx->Size = System::Drawing::Size(75, 14);
			this->tb_pos_rx->TabIndex = 26;
			this->tb_pos_rx->Text = L"0.000";
			this->tb_pos_rx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb_pos_y
			// 
			this->tb_pos_y->BackColor = System::Drawing::Color::White;
			this->tb_pos_y->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_y->Location = System::Drawing::Point(54, 53);
			this->tb_pos_y->Name = L"tb_pos_y";
			this->tb_pos_y->Size = System::Drawing::Size(75, 14);
			this->tb_pos_y->TabIndex = 22;
			this->tb_pos_y->Text = L"0.000";
			this->tb_pos_y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->label_status });
			this->statusStrip1->Location = System::Drawing::Point(0, 551);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(729, 22);
			this->statusStrip1->TabIndex = 43;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// label_status
			// 
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(68, 17);
			this->label_status->Text = L"label_status";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(311, 337);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(420, 188);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CoppeliaSim Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Start Simulation";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(267, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Stop Simulation";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// rtb
			// 
			this->rtb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rtb->Location = System::Drawing::Point(311, 9);
			this->rtb->Name = L"rtb";
			this->rtb->Size = System::Drawing::Size(420, 322);
			this->rtb->TabIndex = 41;
			this->rtb->Text = L"";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label_ry);
			this->panel1->Controls->Add(this->tb_pos_ry);
			this->panel1->Controls->Add(this->tb_pos_rz);
			this->panel1->Controls->Add(this->label_rx);
			this->panel1->Controls->Add(this->tb_pos_x);
			this->panel1->Controls->Add(this->label_rz);
			this->panel1->Controls->Add(this->label_y);
			this->panel1->Controls->Add(this->label_x);
			this->panel1->Controls->Add(this->label_z);
			this->panel1->Controls->Add(this->tb_pos_z);
			this->panel1->Controls->Add(this->tb_pos_rx);
			this->panel1->Controls->Add(this->tb_pos_y);
			this->panel1->Location = System::Drawing::Point(9, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(296, 121);
			this->panel1->TabIndex = 40;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 29);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Get Current Position";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Rx:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(162, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ry:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Robot Name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 20);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"UR10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Select Mode:";
			// 
			// cb_selectmode
			// 
			this->cb_selectmode->FormattingEnabled = true;
			this->cb_selectmode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CARTESIAN POSITION", L"JOINT POSITION" });
			this->cb_selectmode->Location = System::Drawing::Point(87, 22);
			this->cb_selectmode->Name = L"cb_selectmode";
			this->cb_selectmode->Size = System::Drawing::Size(176, 21);
			this->cb_selectmode->TabIndex = 18;
			this->cb_selectmode->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_selectmode_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(160, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 29);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Set Position";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(162, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Rz:";
			// 
			// tb_set_x
			// 
			this->tb_set_x->Location = System::Drawing::Point(53, 58);
			this->tb_set_x->Name = L"tb_set_x";
			this->tb_set_x->Size = System::Drawing::Size(75, 20);
			this->tb_set_x->TabIndex = 5;
			this->tb_set_x->Text = L"0.000";
			this->tb_set_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"X :";
			// 
			// tb_set_y
			// 
			this->tb_set_y->Location = System::Drawing::Point(53, 84);
			this->tb_set_y->Name = L"tb_set_y";
			this->tb_set_y->Size = System::Drawing::Size(75, 20);
			this->tb_set_y->TabIndex = 7;
			this->tb_set_y->Text = L"0.000";
			this->tb_set_y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Y :";
			// 
			// tb_set_z
			// 
			this->tb_set_z->Location = System::Drawing::Point(53, 110);
			this->tb_set_z->Name = L"tb_set_z";
			this->tb_set_z->Size = System::Drawing::Size(75, 20);
			this->tb_set_z->TabIndex = 9;
			this->tb_set_z->Text = L"0.000";
			this->tb_set_z->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Z :";
			// 
			// tb_set_rx
			// 
			this->tb_set_rx->Location = System::Drawing::Point(188, 58);
			this->tb_set_rx->Name = L"tb_set_rx";
			this->tb_set_rx->Size = System::Drawing::Size(75, 20);
			this->tb_set_rx->TabIndex = 11;
			this->tb_set_rx->Text = L"0.000";
			this->tb_set_rx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->cb_selectmode);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->tb_set_x);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->tb_set_rz);
			this->groupBox2->Controls->Add(this->tb_set_y);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->tb_set_ry);
			this->groupBox2->Controls->Add(this->tb_set_z);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->tb_set_rx);
			this->groupBox2->Location = System::Drawing::Point(9, 337);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(296, 188);
			this->groupBox2->TabIndex = 38;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Command Position";
			// 
			// tb_set_rz
			// 
			this->tb_set_rz->Location = System::Drawing::Point(188, 110);
			this->tb_set_rz->Name = L"tb_set_rz";
			this->tb_set_rz->Size = System::Drawing::Size(75, 20);
			this->tb_set_rz->TabIndex = 15;
			this->tb_set_rz->Text = L"0.000";
			this->tb_set_rz->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb_set_ry
			// 
			this->tb_set_ry->Location = System::Drawing::Point(188, 84);
			this->tb_set_ry->Name = L"tb_set_ry";
			this->tb_set_ry->Size = System::Drawing::Size(75, 20);
			this->tb_set_ry->TabIndex = 13;
			this->tb_set_ry->Text = L"0.000";
			this->tb_set_ry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 573);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->rtb);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox4->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		printf("This is the first line");
		printf("This is the second line");
		printf("This is the third line");
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		btn_connect();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_start_sim();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_stop_sim();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_get_position();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_set_position();
}
private: System::Void cb_selectmode_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	change_label();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	on_timer();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	on_init();
}
};
}
