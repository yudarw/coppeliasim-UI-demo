#pragma once

namespace UI_Demo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeachingForm
	/// </summary>
	public ref class TeachingForm : public System::Windows::Forms::Form
	{
	public:
		TeachingForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void btn_add();
		void btn_move();
		void btn_delete();
		void on_init();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeachingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 299);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(364, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input String:";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(431, 277);
			this->listBox1->TabIndex = 3;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &TeachingForm::listBox1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(161, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeachingForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TeachingForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(353, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Move To";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TeachingForm::button3_Click);
			// 
			// TeachingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 373);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"TeachingForm";
			this->Text = L"TeachingForm";
			this->Load += gcnew System::EventHandler(this, &TeachingForm::TeachingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		btn_add();
	}
private: System::Void listBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = listBox1->SelectedItem->ToString();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_move();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	btn_delete();
}
private: System::Void TeachingForm_Load(System::Object^  sender, System::EventArgs^  e) {
	on_init();
}
};
}