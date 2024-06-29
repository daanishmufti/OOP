#pragma once
#include<iostream>
#include<fstream>
#include<cmath>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<algorithm>


namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace std;

    int rows, cols, skip;
    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
        String^ selfile;
        String^ temp1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label6;




           double** text1;

    public:
        Form1(void)
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
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }





    private: System::Windows::Forms::Button^ button6;




    private: System::Windows::Forms::Button^ button12;




    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::RichTextBox^ richTextBox3;
    private: System::Windows::Forms::Label^ label1;



    private: System::Windows::Forms::Label^ label5;










    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;


    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label19;





    private: System::Windows::Forms::Label^ label10;




    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button2;
    private: System::ComponentModel::IContainer^ components;











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
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(46, 439);
            this->button6->Margin = System::Windows::Forms::Padding(2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(216, 39);
            this->button6->TabIndex = 6;
            this->button6->Text = L"Shaded";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // button12
            // 
            this->button12->Location = System::Drawing::Point(46, 298);
            this->button12->Margin = System::Windows::Forms::Padding(2);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(216, 39);
            this->button12->TabIndex = 11;
            this->button12->Text = L"No Shade";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // button7
            // 
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(1290, 148);
            this->button7->Margin = System::Windows::Forms::Padding(2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(31, 31);
            this->button7->TabIndex = 19;
            this->button7->Text = L"-";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // button8
            // 
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(1290, 81);
            this->button8->Margin = System::Windows::Forms::Padding(2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(31, 31);
            this->button8->TabIndex = 18;
            this->button8->Text = L"+";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Location = System::Drawing::Point(578, 81);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(72, 98);
            this->pictureBox3->TabIndex = 17;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
            // 
            // button9
            // 
            this->button9->Location = System::Drawing::Point(46, 367);
            this->button9->Margin = System::Windows::Forms::Padding(2);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(216, 39);
            this->button9->TabIndex = 16;
            this->button9->Text = L"Permuted No Shade";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // richTextBox3
            // 
            this->richTextBox3->Location = System::Drawing::Point(514, 634);
            this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
            this->richTextBox3->Name = L"richTextBox3";
            this->richTextBox3->Size = System::Drawing::Size(700, 169);
            this->richTextBox3->TabIndex = 15;
            this->richTextBox3->Text = L"";
            this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(574, 28);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 55);
            this->label1->TabIndex = 20;
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Brown;
            this->label5->Location = System::Drawing::Point(41, 36);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(612, 61);
            this->label5->TabIndex = 24;
            this->label5->Text = L"ClusteringAnalysis_Tool";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(18, 780);
            this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(172, 42);
            this->label16->TabIndex = 35;
            this->label16->Text = L"Made by:";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::Red;
            this->label17->Location = System::Drawing::Point(100, 780);
            this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(393, 42);
            this->label17->TabIndex = 36;
            this->label17->Text = L"Daanish Ahmad Mufti";
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->Filter = L"(*.txt)|*.txt";
            this->openFileDialog1->InitialDirectory = L"C:\\OOPs\\pedrob pascal\\Project\\The Project\\The project";
            this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(-6, 148);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 16);
            this->label2->TabIndex = 37;
            this->label2->UseCompatibleTextRendering = true;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(-519, 596);
            this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(1717, 85);
            this->label19->TabIndex = 49;
            this->label19->Text = L"________________________________________";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(38, 186);
            this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(162, 37);
            this->label10->TabIndex = 43;
            this->label10->Text = L"Select file:";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(46, 520);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(216, 39);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Shaded Signature";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(-519, 100);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(1717, 85);
            this->label3->TabIndex = 50;
            this->label3->Text = L"________________________________________";
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(122, 186);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(141, 24);
            this->button2->TabIndex = 51;
            this->button2->Text = L"_____________";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_2);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(38, 240);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(201, 31);
            this->label4->TabIndex = 52;
            this->label4->Text = L"Selected File: ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::IndianRed;
            this->label6->Location = System::Drawing::Point(142, 240);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(196, 31);
            this->label6->TabIndex = 53;
            this->label6->Text = L"                          ";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(722, 458);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->richTextBox3);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        // Maximize the form
        this->WindowState = FormWindowState::Maximized;
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        double** text = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            text[i] = new double[cols];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                text[i][j] = text1[i][j];
            }
        }
        Bitmap^ bmp = gcnew Bitmap(rows, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++)
            {
                bmp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
            }
        }

        for (int i = 0; i < rows; i++) {
            int randIndex = rand() % rows;
            for (int j = 0; j < cols; j++) {
                double temp = text[i][j];
                text[i][j] = text[randIndex][j];
                text[randIndex][j] = temp;
            }
        }



        double* signature = new double[rows];
        for (int i = 0; i < rows; i++) {
            double sumr = 0;
            for (int j = 0; j < cols; j++) {
                sumr += text[i][j];
            }
            double meanr = sumr / cols;
            signature[i] = sumr * meanr;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < rows; j++) {
                if (signature[i] > signature[j]) {
                    for (int k = 0; k < cols; k++) {
                        double temp = text[i][k];
                        text[i][k] = text[j][k];
                        text[j][k] = temp;
                    }
                    double temp = signature[i];
                    signature[i] = signature[j];
                    signature[j] = temp;
                }
            }
        }

        delete[] signature;



        double** bitmap = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            bitmap[i] = new double[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
                for (int k = 0; k < cols; k++) {
                    sumx += text[i][k];
                    sumy += text[j][k];
                    sumxy += text[i][k] * text[j][k];
                    sumxsqaure += text[i][k] * text[i][k];
                    sumysqaure += text[j][k] * text[j][k];
                }
                double numerator = (cols * 1 * sumxy) - (sumx * sumy);
                double denominator = sqrt(((cols * 1 * sumxsqaure) - (sumx * sumx)) * ((cols * 1 * sumysqaure) - (sumy * sumy)));
                if (denominator == 0) {
                    bitmap[i][j] = 0;
                }
                else {
                    bitmap[i][j] = numerator / denominator;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            double mean = 0;
            for (int j = 0; j < rows; j++) {
                mean += bitmap[j][i];
            }
            mean /= rows;
        }

        double* maxl = new double[rows];
        for (int i = 0; i < rows; i++) {
            double max = bitmap[0][i];
            for (int j = 1; j < rows; j++) {
                if (bitmap[j][i] > max) {
                    max = bitmap[j][i];
                }
            }
            maxl[i] = max;
        }

        for (int i = 0; i < rows; i++) {
            double max = maxl[i];
            for (int j = 0; j < rows; j++) {
                bitmap[j][i] = (bitmap[j][i] / max) * 255;
            }
        }



        String^ imageText = "";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                imageText += bitmap[i][j] + " ";
            }
            imageText += "\r\n";
        }
        richTextBox3->Text = imageText;

        pictureBox3->Width = rows;
        pictureBox3->Height = rows;


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double value = bitmap[i][j];
                if (value < 0) {
                    value = 0; // or some other suitable minimum value
                }
                bmp->SetPixel(i, j, Color::FromArgb(0, value, 0));
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < i; ++j) {
                Color pixelColor = bmp->GetPixel(i, j);
                bmp->SetPixel(j, i, pixelColor);
            }

        }


        label1->Text = "Signature Shade";
        pictureBox3->Image = bmp;
        pictureBox3->Width += 25 * (pictureBox3->Width / 10);
        pictureBox3->Height += 25 * (pictureBox3->Height / 10);
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
    }

           int count = 0;


    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (count < 0)
        {
            pictureBox3->Width += (pictureBox3->Width / 10);
            pictureBox3->Height += (pictureBox3->Height / 10);
            pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
            count++;
        }
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->Width -= pictureBox3->Width / 10;
        pictureBox3->Height -= pictureBox3->Height / 10;
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        count--;
    }

    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        double** text = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            text[i] = new double[cols];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                text[i][j] = text1[i][j];
            }
        }
        Bitmap^ bmp = gcnew Bitmap(rows, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++)
            {
                bmp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
            }
        }
        double** bitmap = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            bitmap[i] = new double[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
                for (int k = 0; k < cols; k++) {
                    sumx += text[i][k];
                    sumy += text[j][k];
                    sumxy += text[i][k] * text[j][k];
                    sumxsqaure += text[i][k] * text[i][k];
                    sumysqaure += text[j][k] * text[j][k];
                }
                double numerator = (cols * 1 * sumxy) - (sumx * sumy);
                double denominator = sqrt(((cols * 1 * sumxsqaure) - (sumx * sumx)) * ((cols * 1 * sumysqaure) - (sumy * sumy)));
                if (denominator == 0) {
                    bitmap[i][j] = 0;
                }
                else {
                    bitmap[i][j] = numerator / denominator;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            double mean = 0;
            for (int j = 0; j < rows; j++) {
                mean += bitmap[j][i];
            }
            mean /= rows;
        }

        double* maxl = new double[rows];
        for (int i = 0; i < rows; i++) {
            double max = bitmap[0][i];
            for (int j = 1; j < rows; j++) {
                if (bitmap[j][i] > max) {
                    max = bitmap[j][i];
                }
            }
            maxl[i] = max;
        }

        for (int i = 0; i < rows; i++) {
            double max = maxl[i];
            for (int j = 0; j < rows; j++) {
                bitmap[j][i] = (bitmap[j][i] / max) * 255;
            }
        }



        String^ imageText = "";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                imageText += bitmap[i][j] + " ";
            }
            imageText += "\r\n";
        }
        richTextBox3->Text = imageText;

        pictureBox3->Width = rows;
        pictureBox3->Height = rows;


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double value = bitmap[i][j];
                if (value < 0) {
                    value = 0; // or some other suitable minimum value
                }
                bmp->SetPixel(i, j, Color::FromArgb(0, value, 0));
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < i; ++j) {
                Color pixelColor = bmp->GetPixel(i, j);
                bmp->SetPixel(j, i, pixelColor);
            }

        }


        label1->Text = "Shaded";
        pictureBox3->Image = bmp;
        pictureBox3->Width += 25 * (pictureBox3->Width / 10);
        pictureBox3->Height += 25 * (pictureBox3->Height / 10);
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;

    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->Width -= pictureBox3->Width / 10;
        pictureBox3->Height -= pictureBox3->Height / 10;
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        count--;
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (count < 0)
        {
            pictureBox3->Width += (pictureBox3->Width / 10);
            pictureBox3->Height += (pictureBox3->Height / 10);
            pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
            count++;
        }
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
        double** text = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            text[i] = new double[cols];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                text[i][j] = text1[i][j];
            }
        }
        Bitmap^ bmp = gcnew Bitmap(rows, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++)
            {
                bmp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
            }
        }
        double** bitmap = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            bitmap[i] = new double[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
                for (int k = 0; k < cols; k++) {
                    sumx += text[i][k];
                    sumy += text[j][k];
                    sumxy += text[i][k] * text[j][k];
                    sumxsqaure += text[i][k] * text[i][k];
                    sumysqaure += text[j][k] * text[j][k];
                }
                double numerator = (cols * 1 * sumxy) - (sumx * sumy);
                double denominator = sqrt(((cols * 1 * sumxsqaure) - (sumx * sumx)) * ((cols * 1 * sumysqaure) - (sumy * sumy)));
                if (denominator == 0) {
                    bitmap[i][j] = 0;
                }
                else {
                    bitmap[i][j] = numerator / denominator;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            double mean = 0;
            for (int j = 0; j < rows; j++) {
                mean += bitmap[j][i];
            }
            mean /= rows;
            for (int j = 0; j < rows; j++) {
                if (bitmap[j][i] > mean) {
                    bitmap[j][i] = 1;
                }
                else {
                    bitmap[j][i] = 0;
                }
            }
        }

        char** image = new char* [rows];
        for (int i = 0; i < rows; i++) {
            image[i] = new char[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (bitmap[i][j] > 0) {
                    image[i][j] = '1';
                }
                else {
                    image[i][j] = '0';
                }
            }
        }


        String^ imageText = "";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (image[i][j] == '1')
                {
                    imageText += "1";
                }
                else
                {
                    imageText += "0";
                }
            }
            imageText += "\r\n";
        }
        richTextBox3->Text = imageText;

        pictureBox3->Width = rows;
        pictureBox3->Height = rows;


        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (image[i][j] == '1') {
                    bmp->SetPixel(i, j, Color::Black);
                }
                else {
                    bmp->SetPixel(i, j, Color::White);
                }
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < i; ++j) {
                Color pixelColor = bmp->GetPixel(i, j);
                bmp->SetPixel(j, i, pixelColor);
            }

        }

        label1->Text = "No Shade";
        pictureBox3->Image = bmp;
        pictureBox3->Width += 25 * (pictureBox3->Width / 10);
        pictureBox3->Height += 25 * (pictureBox3->Height / 10);
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        pictureBox3->Image = bmp;
    }

           int count3 = 0;

    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        if (count3 < 0)
        {
            pictureBox3->Width += (pictureBox3->Width / 10);
            pictureBox3->Height += (pictureBox3->Height / 10);
            pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
            count3++;
        }
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->Width -= pictureBox3->Width / 10;
        pictureBox3->Height -= pictureBox3->Height / 10;
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        count3--;
    }

    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        double** text = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            text[i] = new double[cols];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                text[i][j] = text1[i][j];
            }
        }
        Bitmap^ bmp = gcnew Bitmap(rows, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++)
            {
                bmp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
            }
        }

        for (int i = 0; i < rows; i++) {
            int randIndex = rand() % rows;
            // Swap row i with row randIndex
            for (int j = 0; j < cols; j++) {
                double temp = text[i][j];
                text[i][j] = text[randIndex][j];
                text[randIndex][j] = temp;
            }
        }


        double** bitmap = new double* [rows];
        for (int i = 0; i < rows; i++)
        {
            bitmap[i] = new double[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
                for (int k = 0; k < cols; k++) {
                    sumx += text[i][k];
                    sumy += text[j][k];
                    sumxy += text[i][k] * text[j][k];
                    sumxsqaure += text[i][k] * text[i][k];
                    sumysqaure += text[j][k] * text[j][k];
                }
                double numerator = (cols * 1 * sumxy) - (sumx * sumy);
                double denominator = sqrt(((cols * 1 * sumxsqaure) - (sumx * sumx)) * ((cols * 1 * sumysqaure) - (sumy * sumy)));
                if (denominator == 0) {
                    bitmap[i][j] = 0;
                }
                else {
                    bitmap[i][j] = numerator / denominator;
                }
            }
        }




        for (int i = 0; i < rows; i++) {
            double mean = 0;
            for (int j = 0; j < rows; j++) {
                mean += bitmap[j][i];
            }
            mean /= rows;
            for (int j = 0; j < rows; j++) {
                if (bitmap[j][i] > mean) {
                    bitmap[j][i] = 1;
                }
                else {
                    bitmap[j][i] = 0;
                }
            }
        }

        char** image = new char* [rows];
        for (int i = 0; i < rows; i++) {
            image[i] = new char[rows];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (bitmap[i][j] > 0) {
                    image[i][j] = '1';
                }
                else {
                    image[i][j] = '0';
                }
            }
        }


        String^ imageText = "";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (image[i][j] == '1')
                {
                    imageText += "1";
                }
                else
                {
                    imageText += "0";
                }
            }
            imageText += "\r\n";
        }
        richTextBox3->Text = imageText;

        pictureBox3->Width = rows;
        pictureBox3->Height = rows;



        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (image[i][j] == '1') {
                    bmp->SetPixel(i, j, Color::Black);
                }
                else {
                    bmp->SetPixel(i, j, Color::White);
                }
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < i; ++j) {
                Color pixelColor = bmp->GetPixel(i, j);
                bmp->SetPixel(j, i, pixelColor);
            }

        }

        label1->Text = "Permuted No Shade";
        pictureBox3->Image = bmp;
        pictureBox3->Width += 25 * (pictureBox3->Width / 10);
        pictureBox3->Height += 25 * (pictureBox3->Height / 10);
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        pictureBox3->Image = bmp;
    }

           int count4 = 0;

    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        if (count4 < 0)
        {
            pictureBox3->Width += (pictureBox3->Width / 10);
            pictureBox3->Height += (pictureBox3->Height / 10);
            pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
            count4++;
        }
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->Width -= pictureBox3->Width / 10;
        pictureBox3->Height -= pictureBox3->Height / 10;
        pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
        count4--;
    }
    private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
    }
    private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
        openFileDialog1->ShowDialog();

        temp1 = openFileDialog1->FileName;

        const wchar_t* wstr = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(temp1)).ToPointer();
        wstring wideString(wstr);
        System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)wstr));
        string normalFile(wideString.begin(), wideString.end());

        std::ifstream file(normalFile);
        file >> rows >> cols >> skip;
        text1 = new double* [rows]();
        for (int i = 0; i < rows; i++)
        {
            text1[i] = new double[cols];
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                file >> text1[i][j];
            }
        }
        label6->Text = temp1;
    }
    };
}
