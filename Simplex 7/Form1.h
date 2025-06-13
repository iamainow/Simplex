#pragma once
#define SIZE 100
int N;
int M;
namespace Simplex7 {
	double XMIN[SIZE];//N
	int BASIC[SIZE];//M
	double CBASIC[SIZE];//M
	double A[SIZE][SIZE];//N+1*M
	double XBEST[SIZE];//N
	double DELTA[SIZE];
	double DELTA2[SIZE];
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  _start;
	private: System::Windows::Forms::TextBox^  _text_result;
	private: System::Windows::Forms::TabControl^  _tab_main;
	private: System::Windows::Forms::TabPage^  _tab_settings;
	private: System::Windows::Forms::TabPage^  _tab_result;
	private: System::Windows::Forms::Label^  _status;
	private: System::Windows::Forms::Label^  _text_status;
	private: System::Windows::Forms::Label^  _x_optimal;
	private: System::Windows::Forms::Label^  _text_x_optimal;
	private: System::Windows::Forms::Label^  _x_replace;
	private: System::Windows::Forms::RadioButton^  _max;
	private: System::Windows::Forms::RadioButton^  _min;
	private: System::Windows::Forms::TextBox^  _in_min;
	private: System::Windows::Forms::TextBox^  _in_a;
	private: System::Windows::Forms::Label^  _text_m;
	private: System::Windows::Forms::NumericUpDown^  _m;
	private: System::Windows::Forms::Label^  _text_n;
	private: System::Windows::Forms::NumericUpDown^  _n;
	private: System::Windows::Forms::TextBox^  _base;
	private: System::Windows::Forms::Button^  _example_1;
	private: System::Windows::Forms::Button^  _example_2;
	private: System::Windows::Forms::Button^  _example_3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  _load;
	private: System::Windows::Forms::Button^  _save;
	private: System::Windows::Forms::SaveFileDialog^  _save_file;
	private: System::Windows::Forms::OpenFileDialog^  _load_file;
	private: System::Windows::Forms::Button^  _example_6;
	private: System::Windows::Forms::Button^  _example_5;
	private: System::Windows::Forms::Button^  _example_4;
	private: System::ComponentModel::IContainer^  components;
#pragma region Windows Form Designer generated code
				void InitializeComponent(void)
				{
					this->_start = (gcnew System::Windows::Forms::Button());
					this->_text_result = (gcnew System::Windows::Forms::TextBox());
					this->_tab_main = (gcnew System::Windows::Forms::TabControl());
					this->_tab_settings = (gcnew System::Windows::Forms::TabPage());
					this->_example_6 = (gcnew System::Windows::Forms::Button());
					this->_example_5 = (gcnew System::Windows::Forms::Button());
					this->_example_4 = (gcnew System::Windows::Forms::Button());
					this->_load = (gcnew System::Windows::Forms::Button());
					this->_save = (gcnew System::Windows::Forms::Button());
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->_example_3 = (gcnew System::Windows::Forms::Button());
					this->_example_2 = (gcnew System::Windows::Forms::Button());
					this->_example_1 = (gcnew System::Windows::Forms::Button());
					this->_base = (gcnew System::Windows::Forms::TextBox());
					this->_text_m = (gcnew System::Windows::Forms::Label());
					this->_m = (gcnew System::Windows::Forms::NumericUpDown());
					this->_text_n = (gcnew System::Windows::Forms::Label());
					this->_n = (gcnew System::Windows::Forms::NumericUpDown());
					this->_in_a = (gcnew System::Windows::Forms::TextBox());
					this->_in_min = (gcnew System::Windows::Forms::TextBox());
					this->_max = (gcnew System::Windows::Forms::RadioButton());
					this->_min = (gcnew System::Windows::Forms::RadioButton());
					this->_x_optimal = (gcnew System::Windows::Forms::Label());
					this->_text_x_optimal = (gcnew System::Windows::Forms::Label());
					this->_tab_result = (gcnew System::Windows::Forms::TabPage());
					this->label2 = (gcnew System::Windows::Forms::Label());
					this->_x_replace = (gcnew System::Windows::Forms::Label());
					this->_status = (gcnew System::Windows::Forms::Label());
					this->_text_status = (gcnew System::Windows::Forms::Label());
					this->_save_file = (gcnew System::Windows::Forms::SaveFileDialog());
					this->_load_file = (gcnew System::Windows::Forms::OpenFileDialog());
					this->_tab_main->SuspendLayout();
					this->_tab_settings->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_m))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_n))->BeginInit();
					this->_tab_result->SuspendLayout();
					this->SuspendLayout();
					// 
					// _start
					// 
					this->_start->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_start->ForeColor = System::Drawing::Color::Red;
					this->_start->Location = System::Drawing::Point(6, 6);
					this->_start->Name = L"_start";
					this->_start->Size = System::Drawing::Size(90, 35);
					this->_start->TabIndex = 0;
					this->_start->Text = L"Решить";
					this->_start->UseVisualStyleBackColor = true;
					this->_start->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
					// 
					// _text_result
					// 
					this->_text_result->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_text_result->Location = System::Drawing::Point(84, 5);
					this->_text_result->Multiline = true;
					this->_text_result->Name = L"_text_result";
					this->_text_result->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					this->_text_result->Size = System::Drawing::Size(608, 307);
					this->_text_result->TabIndex = 1;
					this->_text_result->WordWrap = false;
					// 
					// _tab_main
					// 
					this->_tab_main->Controls->Add(this->_tab_settings);
					this->_tab_main->Controls->Add(this->_tab_result);
					this->_tab_main->Location = System::Drawing::Point(14, 10);
					this->_tab_main->Name = L"_tab_main";
					this->_tab_main->SelectedIndex = 0;
					this->_tab_main->Size = System::Drawing::Size(709, 342);
					this->_tab_main->TabIndex = 2;
					// 
					// _tab_settings
					// 
					this->_tab_settings->Controls->Add(this->_example_6);
					this->_tab_settings->Controls->Add(this->_example_5);
					this->_tab_settings->Controls->Add(this->_example_4);
					this->_tab_settings->Controls->Add(this->_load);
					this->_tab_settings->Controls->Add(this->_save);
					this->_tab_settings->Controls->Add(this->label1);
					this->_tab_settings->Controls->Add(this->_example_3);
					this->_tab_settings->Controls->Add(this->_example_2);
					this->_tab_settings->Controls->Add(this->_example_1);
					this->_tab_settings->Controls->Add(this->_base);
					this->_tab_settings->Controls->Add(this->_text_m);
					this->_tab_settings->Controls->Add(this->_m);
					this->_tab_settings->Controls->Add(this->_text_n);
					this->_tab_settings->Controls->Add(this->_n);
					this->_tab_settings->Controls->Add(this->_in_a);
					this->_tab_settings->Controls->Add(this->_in_min);
					this->_tab_settings->Controls->Add(this->_max);
					this->_tab_settings->Controls->Add(this->_min);
					this->_tab_settings->Controls->Add(this->_x_optimal);
					this->_tab_settings->Controls->Add(this->_text_x_optimal);
					this->_tab_settings->Controls->Add(this->_start);
					this->_tab_settings->Location = System::Drawing::Point(4, 20);
					this->_tab_settings->Name = L"_tab_settings";
					this->_tab_settings->Padding = System::Windows::Forms::Padding(3);
					this->_tab_settings->Size = System::Drawing::Size(701, 318);
					this->_tab_settings->TabIndex = 0;
					this->_tab_settings->Text = L"Settings";
					this->_tab_settings->UseVisualStyleBackColor = true;
					// 
					// _example_6
					// 
					this->_example_6->Location = System::Drawing::Point(143, 271);
					this->_example_6->Name = L"_example_6";
					this->_example_6->Size = System::Drawing::Size(90, 25);
					this->_example_6->TabIndex = 20;
					this->_example_6->Text = L"Пример 6";
					this->_example_6->UseVisualStyleBackColor = true;
					// 
					// _example_5
					// 
					this->_example_5->Location = System::Drawing::Point(143, 240);
					this->_example_5->Name = L"_example_5";
					this->_example_5->Size = System::Drawing::Size(90, 25);
					this->_example_5->TabIndex = 19;
					this->_example_5->Text = L"Пример 5";
					this->_example_5->UseVisualStyleBackColor = true;
					this->_example_5->Click += gcnew System::EventHandler(this, &Form1::_example_5_Click);
					// 
					// _example_4
					// 
					this->_example_4->Location = System::Drawing::Point(143, 209);
					this->_example_4->Name = L"_example_4";
					this->_example_4->Size = System::Drawing::Size(90, 25);
					this->_example_4->TabIndex = 18;
					this->_example_4->Text = L"Пример 4";
					this->_example_4->UseVisualStyleBackColor = true;
					this->_example_4->Click += gcnew System::EventHandler(this, &Form1::_example_4_Click);
					// 
					// _load
					// 
					this->_load->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_load->Location = System::Drawing::Point(6, 88);
					this->_load->Name = L"_load";
					this->_load->Size = System::Drawing::Size(90, 35);
					this->_load->TabIndex = 17;
					this->_load->Text = L"Загрузить";
					this->_load->UseVisualStyleBackColor = true;
					this->_load->Click += gcnew System::EventHandler(this, &Form1::_load_Click);
					// 
					// _save
					// 
					this->_save->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_save->Location = System::Drawing::Point(6, 47);
					this->_save->Name = L"_save";
					this->_save->Size = System::Drawing::Size(90, 35);
					this->_save->TabIndex = 16;
					this->_save->Text = L"Сохранить";
					this->_save->UseVisualStyleBackColor = true;
					this->_save->Click += gcnew System::EventHandler(this, &Form1::_save_Click);
					// 
					// label1
					// 
					this->label1->Location = System::Drawing::Point(239, 68);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(123, 18);
					this->label1->TabIndex = 15;
					this->label1->Text = L"Начальный базис:";
					this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _example_3
					// 
					this->_example_3->Location = System::Drawing::Point(143, 178);
					this->_example_3->Name = L"_example_3";
					this->_example_3->Size = System::Drawing::Size(90, 25);
					this->_example_3->TabIndex = 14;
					this->_example_3->Text = L"Пример 3";
					this->_example_3->UseVisualStyleBackColor = true;
					this->_example_3->Click += gcnew System::EventHandler(this, &Form1::_example_3_Click);
					// 
					// _example_2
					// 
					this->_example_2->Location = System::Drawing::Point(143, 147);
					this->_example_2->Name = L"_example_2";
					this->_example_2->Size = System::Drawing::Size(90, 25);
					this->_example_2->TabIndex = 13;
					this->_example_2->Text = L"Пример 2";
					this->_example_2->UseVisualStyleBackColor = true;
					this->_example_2->Click += gcnew System::EventHandler(this, &Form1::_example_2_Click);
					// 
					// _example_1
					// 
					this->_example_1->Location = System::Drawing::Point(143, 116);
					this->_example_1->Name = L"_example_1";
					this->_example_1->Size = System::Drawing::Size(90, 25);
					this->_example_1->TabIndex = 12;
					this->_example_1->Text = L"Пример 1";
					this->_example_1->UseVisualStyleBackColor = true;
					this->_example_1->Click += gcnew System::EventHandler(this, &Form1::_example_1_Click);
					// 
					// _base
					// 
					this->_base->Location = System::Drawing::Point(368, 68);
					this->_base->Name = L"_base";
					this->_base->Size = System::Drawing::Size(327, 18);
					this->_base->TabIndex = 11;
					// 
					// _text_m
					// 
					this->_text_m->Location = System::Drawing::Point(143, 92);
					this->_text_m->Name = L"_text_m";
					this->_text_m->Size = System::Drawing::Size(41, 18);
					this->_text_m->TabIndex = 10;
					this->_text_m->Text = L"M=";
					this->_text_m->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _m
					// 
					this->_m->Location = System::Drawing::Point(190, 92);
					this->_m->Name = L"_m";
					this->_m->Size = System::Drawing::Size(43, 18);
					this->_m->TabIndex = 9;
					this->_m->ValueChanged += gcnew System::EventHandler(this, &Form1::_m_ValueChanged);
					// 
					// _text_n
					// 
					this->_text_n->Location = System::Drawing::Point(143, 68);
					this->_text_n->Name = L"_text_n";
					this->_text_n->Size = System::Drawing::Size(41, 18);
					this->_text_n->TabIndex = 8;
					this->_text_n->Text = L"N=";
					this->_text_n->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _n
					// 
					this->_n->Location = System::Drawing::Point(190, 68);
					this->_n->Name = L"_n";
					this->_n->Size = System::Drawing::Size(43, 18);
					this->_n->TabIndex = 7;
					this->_n->ValueChanged += gcnew System::EventHandler(this, &Form1::_n_ValueChanged);
					// 
					// _in_a
					// 
					this->_in_a->Location = System::Drawing::Point(239, 92);
					this->_in_a->Multiline = true;
					this->_in_a->Name = L"_in_a";
					this->_in_a->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					this->_in_a->Size = System::Drawing::Size(456, 220);
					this->_in_a->TabIndex = 6;
					this->_in_a->WordWrap = false;
					// 
					// _in_min
					// 
					this->_in_min->Location = System::Drawing::Point(295, 34);
					this->_in_min->Name = L"_in_min";
					this->_in_min->Size = System::Drawing::Size(400, 18);
					this->_in_min->TabIndex = 5;
					this->_in_min->WordWrap = false;
					// 
					// _max
					// 
					this->_max->Location = System::Drawing::Point(239, 47);
					this->_max->Name = L"_max";
					this->_max->Size = System::Drawing::Size(50, 15);
					this->_max->TabIndex = 4;
					this->_max->Text = L"Max";
					this->_max->UseVisualStyleBackColor = true;
					// 
					// _min
					// 
					this->_min->Checked = true;
					this->_min->Location = System::Drawing::Point(239, 26);
					this->_min->Name = L"_min";
					this->_min->Size = System::Drawing::Size(50, 15);
					this->_min->TabIndex = 3;
					this->_min->TabStop = true;
					this->_min->Text = L"Min";
					this->_min->UseVisualStyleBackColor = true;
					this->_min->CheckedChanged += gcnew System::EventHandler(this, &Form1::_min_CheckedChanged);
					// 
					// _x_optimal
					// 
					this->_x_optimal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_x_optimal->ForeColor = System::Drawing::Color::Red;
					this->_x_optimal->Location = System::Drawing::Point(295, 6);
					this->_x_optimal->Name = L"_x_optimal";
					this->_x_optimal->Size = System::Drawing::Size(400, 13);
					this->_x_optimal->TabIndex = 2;
					// 
					// _text_x_optimal
					// 
					this->_text_x_optimal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_text_x_optimal->ForeColor = System::Drawing::Color::Red;
					this->_text_x_optimal->Location = System::Drawing::Point(102, 6);
					this->_text_x_optimal->Name = L"_text_x_optimal";
					this->_text_x_optimal->Size = System::Drawing::Size(187, 13);
					this->_text_x_optimal->TabIndex = 1;
					this->_text_x_optimal->Text = L"Оптимальное решение:";
					this->_text_x_optimal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// _tab_result
					// 
					this->_tab_result->Controls->Add(this->label2);
					this->_tab_result->Controls->Add(this->_x_replace);
					this->_tab_result->Controls->Add(this->_text_result);
					this->_tab_result->Location = System::Drawing::Point(4, 20);
					this->_tab_result->Name = L"_tab_result";
					this->_tab_result->Padding = System::Windows::Forms::Padding(3);
					this->_tab_result->Size = System::Drawing::Size(701, 318);
					this->_tab_result->TabIndex = 1;
					this->_tab_result->Text = L"Result";
					this->_tab_result->UseVisualStyleBackColor = true;
					// 
					// label2
					// 
					this->label2->Location = System::Drawing::Point(6, 5);
					this->label2->Name = L"label2";
					this->label2->Size = System::Drawing::Size(72, 25);
					this->label2->TabIndex = 3;
					this->label2->Text = L"Замены векторов:";
					this->label2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
					// 
					// _x_replace
					// 
					this->_x_replace->Location = System::Drawing::Point(6, 30);
					this->_x_replace->Name = L"_x_replace";
					this->_x_replace->Size = System::Drawing::Size(72, 282);
					this->_x_replace->TabIndex = 2;
					this->_x_replace->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					// 
					// _status
					// 
					this->_status->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_status->ForeColor = System::Drawing::Color::Red;
					this->_status->Location = System::Drawing::Point(88, 355);
					this->_status->Name = L"_status";
					this->_status->Size = System::Drawing::Size(637, 13);
					this->_status->TabIndex = 2;
					this->_status->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
					// 
					// _text_status
					// 
					this->_text_status->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->_text_status->ForeColor = System::Drawing::Color::Red;
					this->_text_status->Location = System::Drawing::Point(12, 355);
					this->_text_status->Name = L"_text_status";
					this->_text_status->Size = System::Drawing::Size(70, 13);
					this->_text_status->TabIndex = 1;
					this->_text_status->Text = L"Статус:";
					this->_text_status->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
					// 
					// Form1
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(7, 11);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
						static_cast<System::Int32>(static_cast<System::Byte>(224)));
					this->ClientSize = System::Drawing::Size(737, 377);
					this->Controls->Add(this->_status);
					this->Controls->Add(this->_text_status);
					this->Controls->Add(this->_tab_main);
					this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(204)));
					this->Name = L"Form1";
					this->Text = L"Simplex";
					this->_tab_main->ResumeLayout(false);
					this->_tab_settings->ResumeLayout(false);
					this->_tab_settings->PerformLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_m))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_n))->EndInit();
					this->_tab_result->ResumeLayout(false);
					this->_tab_result->PerformLayout();
					this->ResumeLayout(false);

				}
#pragma endregion
				void ERROR(String^ text)
				{
					System::Windows::Forms::MessageBox::Show(text,"ERROR",System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error);
				}
				void ConvertMatrix()
				{
					int i1,i2,i3;
					double d1;
					//перемещение базисных столбцов на первые M позиций
					for(i1=0;i1<M;i1++)
					{
						for(i2=0;i2<M;i2++)
						{
							d1=A[i2][i1];
							A[i2][i1]=A[i2][BASIC[i1]];
							A[i2][BASIC[i1]]=d1;
						}
					}
					//приведение первых M столбцов к треугольному виду
					for(i1=0;i1<M;i1++)
					{
						d1=A[i1][i1];
						if(d1!=0)
						{
							//ERROR("d1");
							for(i2=0;i2<N+1;i2++)
							{
								A[i1][i2]/=d1;
							}
						}
						for(i2=i1+1;i2<M;i2++)
						{
							d1=A[i2][i1];
							for(i3=0;i3<N+1;i3++)
							{
								A[i2][i3]-=d1*A[i1][i3];
							}
						}
					}
					//приведение первых M столбцов к единичной матрице
					for(i1=0;i1<M-1;i1++)
					{
						for(i2=i1;i2>=0;i2--)
						{
							d1=A[i2][i1+1];
							for(i3=0;i3<N+1;i3++)
							{
								A[i2][i3]-=d1*A[i1+1][i3];
							}
						}
					}
					//перемещение базисных столбцов на свои позиции
					for(i1=M-1;i1>=0;i1--)
					{
						for(i2=0;i2<M;i2++)
						{
							d1=A[i2][BASIC[i1]];
							A[i2][BASIC[i1]]=A[i2][i1];
							A[i2][i1]=d1;
						}
					}
				}
				//вывод состояния симплекс таблицы
				void OutA()
				{
					String^ s1="";
					s1+="Базис\tCб\t";
					s1+="A0"+"\t";
					for(int i1=0;i1<N;i1++)
					{
						s1+="A"+(i1+1).ToString()+"\t";
					}
					s1+=System::Environment::NewLine;
					for(int i1=0;i1<M;i1++)
					{
						s1+=(BASIC[i1]+1).ToString()+"\t"+CBASIC[i1].ToString()+"\t"+A[i1][N].ToString()+"\t";
						for(int i2=0;i2<N;i2++)
						{
							s1+=A[i1][i2].ToString()+"\t";
						}
						s1+=System::Environment::NewLine;
					}
					s1+="\t\t";
					s1+=DELTA[N].ToString()+"\t";
					for(int i1=0;i1<N;i1++)
					{
						s1+=DELTA[i1].ToString()+"\t";
					}
					s1+=System::Environment::NewLine+"\t\t";
					/*if(DELTA2[N]!=double::PositiveInfinity)
					{
					s1+=DELTA2[N].ToString()+"\t";
					}
					else
					{
					s1+="-"+"\t";
					}*/
					s1+="\t";
					for(int i1=0;i1<N;i1++)
					{
						if(DELTA2[i1]!=double::PositiveInfinity)
						{
							s1+=DELTA2[i1].ToString()+"\t";
						}
						else
						{
							s1+="-"+"\t";
						}
					}
					s1+=System::Environment::NewLine;
					s1+=System::Environment::NewLine;
					_text_result->Text+=s1;
				}
				int CircleSimplex(bool first)
				{
					int i1,i2;
					bool b1;
					double nmin,nmin2;
					int imin,imin2;
					//п2
					i2=0;
					for(i1=0;i1<M;i1++)
					{
						if(A[i1][N]>=0)
						{
							i2++;
						}
					}
					if(i2==M && first==false)
					{
						_status->Text="Оптимальное решение";
						return 1;
					}
					//п3
					for(i1=0;i1<M;i1++)
					{
						b1=true;
						if(A[i1][N]<0)
						{
							b1=false;
							for(i2=0;i2<N+1;i2++)
							{
								if(A[i1][i2]<0)
								{
									b1=true;
									break;
								}
							}
							/*if(b1==true)
							{
							break;
							}*/
						}
						if(b1==false)
						{
							_status->Text="Задача не имеет решений";
							return 2;
						}
					}
					//п4.1
					nmin=A[0][N];
					imin=0;
					for(i1=0;i1<M;i1++)
					{
						if(A[i1][N]<nmin)
						{
							nmin=A[i1][N];
							imin=i1;
						}
					}
					//п4.2 delta
					for(i1=0;i1<N+1;i1++)
					{
						DELTA[i1]=0;
						for(i2=0;i2<M;i2++)
						{
							DELTA[i1]+=CBASIC[i2]*A[i2][i1];
						}
						DELTA[i1]-=XMIN[i1];
					}
					if(first==true)
					{
						for(i1=0;i1<N;i1++)
						{
							if(DELTA[i1]>0)
							{
								_status->Text="Введен неверный начальный базис";
								return 4;
							}
						}
					}
					//5
					nmin2=double::PositiveInfinity;
					imin2=-1;
					for(i1=0;i1<N;i1++)
					{
						if(A[imin][i1]<0)
						{
							DELTA2[i1]=DELTA[i1]/A[imin][i1];
						}
						else
						{
							DELTA2[i1]=double::PositiveInfinity;
						}
					}
					for(i1=0;i1<N;i1++)
					{
						if(DELTA2[i1]<nmin2)
						{
							nmin2=DELTA2[i1];
							imin2=i1;
						}
					}
					if(imin2==-1)
					{
						_status->Text="Нет допустимых решений";
						return 3;
					}
					_x_replace->Text+=(BASIC[imin]+1).ToString()+"==>"+(imin2+1).ToString()+System::Environment::NewLine;
					//
					OutA();
					BASIC[imin]=imin2;
					CBASIC[imin]=XMIN[imin2];
					//
					//6
					ConvertMatrix();
					return 0;

				}
				void Simplex()
				{
					int stat;
					int i1,i2,i3;
					_x_optimal->Text="";
					_x_replace->Text="";
					_text_result->Text="";
					if(_max->Checked)
					{
						for(i1=0;i1<N;i1++)
						{
							XMIN[i1]*=-1;
						}
					}
					for(i1=0;i1<M;i1++)
					{
						BASIC[i1]--;
					}
					for(i1=0;i1<M;i1++)
					{
						CBASIC[i1]=XMIN[BASIC[i1]];
					}
					ConvertMatrix();
					//
					for(i1=0;i1<M;i1++)
					{
						i3=0;
						for(i2=0;i2<N;i2++)
						{
							if(A[i1][i2]==0)
							{
								i3++;
							}
						}
						if(i3==N)
						{
							_status->Text="Матрица ограничений введена некорректно";
							return;
						}
					}
					//
					stat=CircleSimplex(true);
					while(1)
					{
						if(stat!=0)
						{
							break;
						}
						stat=CircleSimplex(false);
						if(stat!=0)
						{
							break;
						}
					}
					if(stat==4)
					{
						return;
					}
					//
					//п4.1
					double nmin=A[0][N];
					int imin=0;
					for(i1=0;i1<M;i1++)
					{
						if(A[i1][N]<nmin)
						{
							nmin=A[i1][N];
							imin=i1;
						}
					}
					//п4.2 delta
					for(i1=0;i1<N+1;i1++)
					{
						DELTA[i1]=0;
						for(i2=0;i2<M;i2++)
						{
							DELTA[i1]+=CBASIC[i2]*A[i2][i1];
						}
						DELTA[i1]-=XMIN[i1];
					}
					for(i1=0;i1<N+1;i1++)
					{
						DELTA2[i1]=double::PositiveInfinity;
					}
					//
					for(i1=0;i1<N;i1++)
					{
						XBEST[i1]=0;
					}
					for(i1=0;i1<M;i1++)
					{
						XBEST[BASIC[i1]]=A[i1][N];
					}
					/*if(_max->Checked)
					{
					for(i1=0;i1<N;i1++)
					{
					XBEST[i1]*=-1;
					}
					}*/

					if(stat==1)
					{
						for(i1=0;i1<N;i1++)
						{
							_x_optimal->Text+=XBEST[i1].ToString()+" ";
						}
					}
					OutA();
				}
				void InA(String^ s1)
				{
					int i1,i2;
					String^ s2;
					s2="";
					array<System::String^,1>^ s3;
					for(i1=0;i1<s1->Length;i1++)
					{
						if(s1[i1]==' ')
						{
							s2+=System::Environment::NewLine;
						}
						else
						{
							s2+=s1[i1];
						}
					}
					IO::File::WriteAllText(Application::StartupPath+"\\InA.txt",s2);
					s3=IO::File::ReadAllLines(Application::StartupPath+"\\InA.txt");
					for(i1=0;i1<M;i1++)
					{
						for(i2=0;i2<N+1;i2++)
						{
							A[i1][i2]=Convert::ToDouble((String^)(s3->GetValue(i1*(N+1)+i2)));
						}
					}
				}
				void InC(String^ s1)
				{
					int i1;
					String^ s2;
					s2="";
					array<System::String^,1>^ s3;
					for(i1=0;i1<s1->Length;i1++)
					{
						if(s1[i1]==' ')
						{
							s2+=System::Environment::NewLine;
						}
						else
						{
							s2+=s1[i1];
						}
					}
					IO::File::WriteAllText(Application::StartupPath+"\\InC.txt",s2);
					s3=IO::File::ReadAllLines(Application::StartupPath+"\\InC.txt");
					for(i1=0;i1<N;i1++)
					{
						XMIN[i1]=Convert::ToDouble((String^)(s3->GetValue(i1)));
					}
				}
				void InD(String^ s1)
				{
					int i1;
					String^ s2;
					s2="";
					array<System::String^,1>^ s3;
					for(i1=0;i1<s1->Length;i1++)
					{
						if(s1[i1]==' ')
						{
							s2+=System::Environment::NewLine;
						}
						else
						{
							s2+=s1[i1];
						}
					}
					IO::File::WriteAllText(Application::StartupPath+"\\InD.txt",s2);
					s3=IO::File::ReadAllLines(Application::StartupPath+"\\InD.txt");
					for(i1=0;i1<M;i1++)
					{
						BASIC[i1]=Convert::ToInt32((String^)(s3->GetValue(i1)));
					}
				}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					N=(int)(_n->Value);
					M=(int)(_m->Value);
					InA(_in_a->Text);
					InC(_in_min->Text);
					InD(_base->Text);
					Simplex();
				}
	private: System::Void _example_1_Click(System::Object^  sender, System::EventArgs^  e) {
					_n->Value=5;
					_m->Value=2;
					_in_a->Text="-1 1 -1 1 0 5"+System::Environment::NewLine+"3 -1 -3 1 -2 -1";
					_in_min->Text="1 2 4 2 1";
					_base->Text="1 5";
					_min->Checked=true;
				}
	private: System::Void _example_2_Click(System::Object^  sender, System::EventArgs^  e) {
					_n->Value=5;
					_m->Value=2;
					_in_a->Text="-1 1 -1 1 0 5"+System::Environment::NewLine+"3 -1 -3 1 -2 -1";
					_in_min->Text="-1 -2 -4 -2 -1";
					_base->Text="1 5";
					_max->Checked=true;
				}
	private: System::Void _example_3_Click(System::Object^  sender, System::EventArgs^  e) {
					_n->Value=5;
					_m->Value=3;
					_in_a->Text="1 1 0 -4 2 -2"+System::Environment::NewLine+"0 1 1 1 -2 -2"+System::Environment::NewLine+"1 0 1 3 -2 -2";
					_in_min->Text="1 1 1 0 -1";
					_base->Text="1 2 3";
					_max->Checked=true;
				}
	private: System::Void _save_Click(System::Object^  sender, System::EventArgs^  e) {
					int i1,i2;
					_save_file->ShowDialog();
					if(_save_file->FileName==String::Empty)
					{
						return;
					}
					N=(int)(_n->Value);
					M=(int)(_m->Value);
					InA(_in_a->Text);
					InC(_in_min->Text);
					InD(_base->Text);
					String^ s1;
					s1+=N.ToString()+System::Environment::NewLine;
					s1+=M.ToString()+System::Environment::NewLine;
					s1+=_min->Checked.ToString()+System::Environment::NewLine;
					for(i1=0;i1<N;i1++)
					{
						s1+=XMIN[i1].ToString();
						if(i1!=N-1)
						{
							s1+=" ";
						}
					}
					s1+=System::Environment::NewLine;
					for(i1=0;i1<M;i1++)
					{
						s1+=BASIC[i1].ToString();
						if(i1!=M-1)
						{
							s1+=" ";
						}
					}
					s1+=System::Environment::NewLine;
					for(i1=0;i1<M;i1++)
					{
						for(i2=0;i2<N+1;i2++)
						{
							s1+=A[i1][i2].ToString();
							if(i2!=N)
							{
								s1+=" ";
							}
						}
						s1+=System::Environment::NewLine;
					}
					IO::File::WriteAllText(_save_file->FileName,s1);
				}
	private: System::Void _n_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					N=(int)(_n->Value);
				}
	private: System::Void _m_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					M=(int)(_m->Value);
				}
	private: System::Void _min_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					_max->Checked=!_min->Checked;
				}
	private: System::Void _example_4_Click(System::Object^  sender, System::EventArgs^  e) {
					_n->Value=5;
					_m->Value=2;
					_in_a->Text="-1 1 -1 1 0 5"+System::Environment::NewLine+"1 -1 1 -1 0 -1";
					_in_min->Text="10 20 40 20 40";
					_base->Text="1 5";
					_min->Checked=true;
				}
	private: System::Void _load_Click(System::Object^  sender, System::EventArgs^  e) {
					_load_file->ShowDialog();
					if(_load_file->FileName==String::Empty)
					{
						return;
					}
					array<String^,1>^ s1;
					s1=IO::File::ReadAllLines(_load_file->FileName);
					N=Convert::ToInt32(((String^)(s1->GetValue(0))));
					_n->Value=N;
					M=Convert::ToInt32(((String^)(s1->GetValue(1))));
					_m->Value=M;
					bool b1;
					b1=Convert::ToBoolean(((String^)(s1->GetValue(2))));
					_min->Checked=b1;
					_in_min->Text=((String^)(s1->GetValue(3)));
					_base->Text=((String^)(s1->GetValue(4)));
					_in_a->Text="";
					for(int i1=5;i1<s1->Length;i1++)
					{
						_in_a->Text+=((String^)(s1->GetValue(i1)));
						if(i1!=s1->Length-1)
						{
							_in_a->Text+=System::Environment::NewLine;
						}
					}
				}
	private: System::Void _example_5_Click(System::Object^  sender, System::EventArgs^  e) {
					_n->Value=5;
					_m->Value=2;
					_in_a->Text="-1 1 -1 1 0 5"+System::Environment::NewLine+"3 -1 -3 1 -2 -1";
					_in_min->Text="1 2 4 2 1";
					_base->Text="4 5";
					_min->Checked=true;
				}
	};
}