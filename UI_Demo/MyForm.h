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
		void update_set_data();
		void on_timer();
		void btn_set_position();
		void movement_control(int id);
		void step_increase();
		void step_decrease();
		void show_teaching_form();

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  teachingToolStripMenuItem;
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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teachingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox4->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
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
			this->btn_x_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_x_plus_Click);
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
			this->btn_x_min->Click += gcnew System::EventHandler(this, &MyForm::btn_x_min_Click);
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
			this->btn_rz_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_rz_plus_Click);
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
			this->btn_rz_min->Click += gcnew System::EventHandler(this, &MyForm::btn_rz_min_Click);
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
			this->btn_y_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_y_plus_Click);
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
			this->btn_ry_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_ry_plus_Click);
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
			this->btn_z_min->Click += gcnew System::EventHandler(this, &MyForm::btn_z_min_Click);
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
			this->btn_ry_min->Click += gcnew System::EventHandler(this, &MyForm::btn_ry_min_Click);
			// 
			// tb_pos_ry
			// 
			this->tb_pos_ry->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_ry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_ry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_ry->Location = System::Drawing::Point(185, 49);
			this->tb_pos_ry->Name = L"tb_pos_ry";
			this->tb_pos_ry->ReadOnly = true;
			this->tb_pos_ry->Size = System::Drawing::Size(75, 14);
			this->tb_pos_ry->TabIndex = 27;
			this->tb_pos_ry->Text = L"0.000";
			this->tb_pos_ry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->button9);
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
			this->groupBox4->Location = System::Drawing::Point(11, 175);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(296, 208);
			this->groupBox4->TabIndex = 39;
			this->groupBox4->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(221, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 40);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Sp+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(160, 157);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 40);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Sp-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(20, 157);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 40);
			this->button8->TabIndex = 30;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(81, 157);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 40);
			this->button9->TabIndex = 31;
			this->button9->UseVisualStyleBackColor = true;
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
			this->btn_y_min->Click += gcnew System::EventHandler(this, &MyForm::btn_y_min_Click);
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
			this->btn_z_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_z_plus_Click);
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
			this->btn_rx_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_rx_plus_Click);
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
			this->btn_rx_min->Click += gcnew System::EventHandler(this, &MyForm::btn_rx_min_Click);
			// 
			// label_ry
			// 
			this->label_ry->AutoSize = true;
			this->label_ry->Location = System::Drawing::Point(159, 49);
			this->label_ry->Name = L"label_ry";
			this->label_ry->Size = System::Drawing::Size(23, 13);
			this->label_ry->TabIndex = 30;
			this->label_ry->Text = L"Ry:";
			// 
			// tb_pos_rz
			// 
			this->tb_pos_rz->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_rz->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_rz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_rz->Location = System::Drawing::Point(185, 75);
			this->tb_pos_rz->Name = L"tb_pos_rz";
			this->tb_pos_rz->ReadOnly = true;
			this->tb_pos_rz->Size = System::Drawing::Size(75, 14);
			this->tb_pos_rz->TabIndex = 28;
			this->tb_pos_rz->Text = L"0.000";
			this->tb_pos_rz->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_rx
			// 
			this->label_rx->AutoSize = true;
			this->label_rx->Location = System::Drawing::Point(159, 23);
			this->label_rx->Name = L"label_rx";
			this->label_rx->Size = System::Drawing::Size(23, 13);
			this->label_rx->TabIndex = 29;
			this->label_rx->Text = L"Rx:";
			// 
			// tb_pos_x
			// 
			this->tb_pos_x->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_x->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_x->Location = System::Drawing::Point(50, 23);
			this->tb_pos_x->Name = L"tb_pos_x";
			this->tb_pos_x->ReadOnly = true;
			this->tb_pos_x->Size = System::Drawing::Size(75, 14);
			this->tb_pos_x->TabIndex = 20;
			this->tb_pos_x->Text = L"0.000";
			this->tb_pos_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_rz
			// 
			this->label_rz->AutoSize = true;
			this->label_rz->Location = System::Drawing::Point(159, 75);
			this->label_rz->Name = L"label_rz";
			this->label_rz->Size = System::Drawing::Size(23, 13);
			this->label_rz->TabIndex = 31;
			this->label_rz->Text = L"Rz:";
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(25, 49);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(20, 13);
			this->label_y->TabIndex = 23;
			this->label_y->Text = L"Y :";
			// 
			// label_x
			// 
			this->label_x->AutoSize = true;
			this->label_x->Location = System::Drawing::Point(25, 23);
			this->label_x->Name = L"label_x";
			this->label_x->Size = System::Drawing::Size(20, 13);
			this->label_x->TabIndex = 21;
			this->label_x->Text = L"X :";
			// 
			// label_z
			// 
			this->label_z->AutoSize = true;
			this->label_z->Location = System::Drawing::Point(25, 75);
			this->label_z->Name = L"label_z";
			this->label_z->Size = System::Drawing::Size(20, 13);
			this->label_z->TabIndex = 25;
			this->label_z->Text = L"Z :";
			// 
			// tb_pos_z
			// 
			this->tb_pos_z->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_z->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_z->Location = System::Drawing::Point(50, 75);
			this->tb_pos_z->Name = L"tb_pos_z";
			this->tb_pos_z->ReadOnly = true;
			this->tb_pos_z->Size = System::Drawing::Size(75, 14);
			this->tb_pos_z->TabIndex = 24;
			this->tb_pos_z->Text = L"0.000";
			this->tb_pos_z->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb_pos_rx
			// 
			this->tb_pos_rx->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_rx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_rx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_rx->Location = System::Drawing::Point(185, 23);
			this->tb_pos_rx->Name = L"tb_pos_rx";
			this->tb_pos_rx->ReadOnly = true;
			this->tb_pos_rx->Size = System::Drawing::Size(75, 14);
			this->tb_pos_rx->TabIndex = 26;
			this->tb_pos_rx->Text = L"0.000";
			this->tb_pos_rx->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb_pos_y
			// 
			this->tb_pos_y->BackColor = System::Drawing::SystemColors::Control;
			this->tb_pos_y->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_pos_y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pos_y->Location = System::Drawing::Point(50, 49);
			this->tb_pos_y->Name = L"tb_pos_y";
			this->tb_pos_y->ReadOnly = true;
			this->tb_pos_y->Size = System::Drawing::Size(75, 14);
			this->tb_pos_y->TabIndex = 22;
			this->tb_pos_y->Text = L"0.000";
			this->tb_pos_y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->label_status });
			this->statusStrip1->Location = System::Drawing::Point(0, 652);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(319, 22);
			this->statusStrip1->TabIndex = 43;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// label_status
			// 
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(68, 17);
			this->label_status->Text = L"label_status";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(30, 583);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CoppeliaSim Connect";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(116, 583);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 60);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Start Simulation";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(202, 583);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Stop Simulation";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 29);
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
			this->label1->Location = System::Drawing::Point(65, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Robot Name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 20);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"UR10";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
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
			this->button5->Location = System::Drawing::Point(149, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(127, 29);
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
			this->groupBox2->Location = System::Drawing::Point(10, 389);
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tb_pos_rx);
			this->groupBox3->Controls->Add(this->label_ry);
			this->groupBox3->Controls->Add(this->tb_pos_y);
			this->groupBox3->Controls->Add(this->tb_pos_z);
			this->groupBox3->Controls->Add(this->tb_pos_ry);
			this->groupBox3->Controls->Add(this->label_z);
			this->groupBox3->Controls->Add(this->tb_pos_rz);
			this->groupBox3->Controls->Add(this->label_x);
			this->groupBox3->Controls->Add(this->label_y);
			this->groupBox3->Controls->Add(this->label_rx);
			this->groupBox3->Controls->Add(this->label_rz);
			this->groupBox3->Controls->Add(this->tb_pos_x);
			this->groupBox3->Location = System::Drawing::Point(11, 60);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(296, 109);
			this->groupBox3->TabIndex = 44;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Current Position";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->teachingToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(319, 24);
			this->menuStrip1->TabIndex = 45;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// teachingToolStripMenuItem
			// 
			this->teachingToolStripMenuItem->Name = L"teachingToolStripMenuItem";
			this->teachingToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->teachingToolStripMenuItem->Text = L"Teaching";
			this->teachingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::teachingToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 674);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->groupBox4->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
private: System::Void btn_x_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(1);
}
private: System::Void btn_x_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(2);
}
private: System::Void btn_y_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(3);
}
private: System::Void btn_y_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(4);
}
private: System::Void btn_z_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(5);
}
private: System::Void btn_z_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(6);
}
private: System::Void btn_rx_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(7);
}
private: System::Void btn_rx_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(8);
}
private: System::Void btn_ry_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(9);
}
private: System::Void btn_ry_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(10);
}
private: System::Void btn_rz_min_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(11);
}
private: System::Void btn_rz_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	movement_control(12);
}

private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	step_decrease();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	step_increase();
}
private: System::Void teachingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	show_teaching_form();
}
};
}
