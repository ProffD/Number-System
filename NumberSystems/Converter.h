#pragma once

namespace NumberSystems {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;


	/// <summary>
	/// Summary for Converter
	/// </summary>
	public ref class Converter : public System::Windows::Forms::Form
	{
	public:
		Converter(void)
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
		~Converter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtInput;

	private: System::Windows::Forms::ComboBox^  cmbTo;
	private: System::Windows::Forms::ComboBox^  cmbFrom;
	private: System::Windows::Forms::Button^  btnConvert;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtOutput;

	private: System::Windows::Forms::GroupBox^  groupBox2;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->cmbTo = (gcnew System::Windows::Forms::ComboBox());
			this->cmbFrom = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtOutput);
			this->groupBox1->Controls->Add(this->btnConvert);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtInput);
			this->groupBox1->Controls->Add(this->cmbTo);
			this->groupBox1->Controls->Add(this->cmbFrom);
			this->groupBox1->Location = System::Drawing::Point(12, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(270, 130);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Converter";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Output";
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(77, 72);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(100, 20);
			this->txtOutput->TabIndex = 7;
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(77, 98);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(100, 23);
			this->btnConvert->TabIndex = 6;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Converter::btnConvert_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(206, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"To";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Input";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"From";
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(77, 19);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 2;
			// 
			// cmbTo
			// 
			this->cmbTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTo->FormattingEnabled = true;
			this->cmbTo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bin", L"Dec", L"Hex" });
			this->cmbTo->Location = System::Drawing::Point(183, 18);
			this->cmbTo->Name = L"cmbTo";
			this->cmbTo->Size = System::Drawing::Size(76, 21);
			this->cmbTo->TabIndex = 1;
			// 
			// cmbFrom
			// 
			this->cmbFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbFrom->FormattingEnabled = true;
			this->cmbFrom->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bin", L"Dec", L"Hex" });
			this->cmbFrom->Location = System::Drawing::Point(7, 20);
			this->cmbFrom->Name = L"cmbFrom";
			this->cmbFrom->Size = System::Drawing::Size(64, 21);
			this->cmbFrom->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(12, 162);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(270, 154);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Calculator";
			// 
			// Converter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 328);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Converter";
			this->Text = L"Converter";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {


//===========================================Decimal to Binary==================================

		
		if (this->cmbFrom->Text == "Dec" && this->cmbTo->Text == "Bin")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{

				try
				{
					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));
					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^([0-9]|[1][0-9]|[2-9][0-9]|[1][0-9][0-9]|2[0-4][0-9]|25[0-5])$")->Success)
						{

							int dec = Int32::Parse(this->txtInput->Text);
							String ^ binary = Convert::ToString(dec, 2);
							this->txtOutput->Text = binary;

						}
						else
						{

							try
							{
								int dec = Int32::Parse(this->txtInput->Text);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum decimal number you can convert is 255!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive integers only!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is too big \nTry again with a valid decimal number not more 255!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}

			}
			
			
	 }
				
//===========================================Decimal to Hexidecimal==================================
				
		if (this->cmbFrom->Text == "Dec" && this->cmbTo->Text == "Hex")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{
				try
				{
					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));
					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^([0-9]|[1][0-9]|[2-9][0-9]|[1][0-9][0-9]|2[0-4][0-9]|25[0-5])$")->Success)
						{

							int dec = Int32::Parse(this->txtInput->Text);
							String ^ hex = Convert::ToString(dec, 16);
							this->txtOutput->Text = hex->ToUpper();

						}
						else
						{

							try
							{
								int dec = Int32::Parse(this->txtInput->Text);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum decimal number you can convert is 255!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive integers only!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is too big \nTry again with a valid decimal number not more 255!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}

		}

//===========================================Decimal to Decimal==================================

		if (this->cmbFrom->Text == "Dec" && this->cmbTo->Text == "Dec")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{
				try
				{
					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));

					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^([0-9]|[1][0-9]|[2-9][0-9]|[1][0-9][0-9]|2[0-4][0-9]|25[0-5])$")->Success)
						{


							this->txtOutput->Text = this->txtInput->Text->TrimStart('0');

						}
						else
						{

							try
							{
								int dec = Int32::Parse(this->txtInput->Text);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum decimal number you can convert is 255!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive integers only!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is not an Integer!\nTry again with a valid Interger", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Decimal Number Provided is too big \nTry again with a valid decimal number not more 255!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}


		}

//===========================================Binary to Decimal==================================

		if (this->cmbFrom->Text == "Bin" && this->cmbTo->Text == "Dec")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{
				try
				{

					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));
					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^[0-1]{1,8}$")->Success)
						{



							this->txtOutput->Text = Convert::ToInt32(txtInput->Text, 2).ToString();


						}
						else
						{

							try
							{
								int dec = Convert::ToInt32(txtInput->Text, 2);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum binary number you can convert is up 8 bits!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
								else
								{
									this->txtOutput->Clear();
									MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive binary number!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is too big \nTry again with a valid binary number not more 8bits!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}


		}

//===========================================Binary to Hexidecimal==================================

		if (this->cmbFrom->Text == "Bin" && this->cmbTo->Text == "Hex")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{
				try
				{

					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));
					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^[0-1]{1,8}$")->Success)
						{

							this->txtOutput->Text = Convert::ToInt32(txtInput->Text, 2).ToString("X");


						}
						else
						{

							try
							{
								int dec = Convert::ToInt32(txtInput->Text, 2);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum binary number you can convert is up 8 bits!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
								else
								{
									this->txtOutput->Clear();
									MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive binary number!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is too big \nTry again with a valid binary number not more 8bits!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}


		}

		//===========================================Binary to Binary==================================

		if (this->cmbFrom->Text == "Bin" && this->cmbTo->Text == "Bin")
		{
			if (this->txtInput->Text == "")
			{
				MessageBox::Show("Please specify an input to convert!", "No input", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else
			{
				try
				{

					int valid = Int32::Parse(this->txtInput->Text->TrimStart('0'));
					if (valid >= 0) {

						if (Regex::Match(txtInput->Text->TrimStart('0'), "^[0-1]{1,8}$")->Success)
						{

							this->txtOutput->Text = this->txtInput->Text->TrimStart('0');


						}
						else
						{

							try
							{
								int dec = Convert::ToInt32(txtInput->Text, 2);
								if (dec > 255)
								{
									this->txtOutput->Clear();
									MessageBox::Show("A maximum binary number you can convert is up 8 bits!", "Overflow", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
								else
								{
									this->txtOutput->Clear();
									MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

								}

							}
							catch (FormatException ^e)
							{
								this->txtOutput->Clear();
								MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

							}


						}


					}
					else
					{
						MessageBox::Show("Please enter positive binary number!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
				}
				catch (FormatException ^ e)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is not valid!\nTry again with a valid binary number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				catch (OverflowException ^ o)
				{
					this->txtOutput->Clear();
					MessageBox::Show("Binary Number Provided is too big \nTry again with a valid binary number not more 8bits!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
			}


		}
	}

};
}
	

