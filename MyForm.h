#pragma once

using namespace std;
using namespace RegistroLibros;

namespace RegistroBiblioteca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			arbol= gcnew RegistroLibros::NodoLibros::ArbolBinarioBusqueda();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBoxPlaca;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ Lista;
	private: System::Windows::Forms::Button^ btnAgregar;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		NodoLibros::ArbolBinarioBusqueda^ arbol;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlaca = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->Lista = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(353, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO BIBLIOTECARIO";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero ISBN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Titulo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Autor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Genero";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBoxPlaca);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(22, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(426, 207);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(188, 163);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->MaxLength = 10;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 30);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(188, 117);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->MaxLength = 10;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 30);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(188, 63);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->MaxLength = 10;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 30);
			this->textBox1->TabIndex = 18;
			// 
			// textBoxPlaca
			// 
			this->textBoxPlaca->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPlaca->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxPlaca->Location = System::Drawing::Point(188, 18);
			this->textBoxPlaca->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPlaca->MaxLength = 10;
			this->textBoxPlaca->Multiline = true;
			this->textBoxPlaca->Name = L"textBoxPlaca";
			this->textBoxPlaca->Size = System::Drawing::Size(157, 29);
			this->textBoxPlaca->TabIndex = 17;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnAgregar);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->btnEditar);
			this->groupBox2->Location = System::Drawing::Point(22, 258);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(426, 100);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(158, 22);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 28);
			this->btnAgregar->TabIndex = 41;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(158, 69);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Listar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 65);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(307, 69);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 22);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->Location = System::Drawing::Point(12, 22);
			this->btnEditar->Margin = System::Windows::Forms::Padding(4);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(100, 28);
			this->btnEditar->TabIndex = 23;
			this->btnEditar->Text = L"Nuevo";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &MyForm::btnEditar_Click);
			// 
			// Lista
			// 
			this->Lista->FormattingEnabled = true;
			this->Lista->ItemHeight = 16;
			this->Lista->Location = System::Drawing::Point(521, 47);
			this->Lista->Name = L"Lista";
			this->Lista->Size = System::Drawing::Size(509, 308);
			this->Lista->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1058, 360);
			this->Controls->Add(this->Lista);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ isbn = textBoxPlaca->Text;
	String^ titulo = textBox1->Text;
	String^ autor = textBox2->Text;
	String^ genero = textBox3->Text;
	Libros^ libro = gcnew Libros(isbn, titulo, autor, genero);
	arbol->insertar(libro);
	MessageBox::Show("Libro agregado correctamente");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ isbn = textBoxPlaca->Text;
	Libros^ libro = arbol->buscar(isbn);
	if (libro != nullptr)
	{
		textBox1->Text = libro->GetTitulo();
		textBox2->Text = libro->GetAutor();
		textBox3->Text = libro->GetGenero();
	}
	else
	{
		MessageBox::Show("Libro no encontrado");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ isbn = textBoxPlaca->Text;
		arbol->eliminar(isbn);
	String^ titulo = textBox1->Text;
	String^ autor = textBox2->Text;
	String^ genero = textBox3->Text;
	Libros^ libro = gcnew Libros(isbn, titulo, autor, genero);
	arbol->insertar(libro);
	MessageBox::Show("Libro editado correctamente");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ isbn = textBoxPlaca->Text;
	arbol->eliminar(isbn);
	MessageBox::Show("Libro eliminado correctamente");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Lista->Items->Clear();
	System::Collections::Generic::List<Libros^>^ lista = arbol->listaVehiculos();
	for (int i = 0; i < lista->Count; i++)
	{
		Libros^ libro = lista[i];
		Lista->Items->Add(libro->ToString());
	}
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxPlaca->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
};
}
