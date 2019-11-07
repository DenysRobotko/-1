#include <iostream>

using namespace std;

class Library
{
public:
	string name, author;
	float price;

	string n() { return name; }


	//Конструктор без параметров
	Library() {
		cout << "Конструктор без параметров" << endl;
	};

	//Конструктор по умолчанию
	Library(string thisName, string thisAuthor, float thisPrice) {
		cout << "Конструктор по умолчанию" << endl;
		setBook(thisName, thisAuthor, thisPrice);
	};

	//Конструктор копирования
	Library(const Library& library) :
		name(library.name), author(library.author), price(library.price) {
		cout << "Конструктор копирования" << endl;
	};

	//Деструктор
	~Library() {
		cout << "Деструктор для " << "имя: " << name << " автор: "
			<< author << endl;
	};

	//Установка значений
	void setBook(string thisName, string thisAuthor, float thisPrice)
	{
		name = thisName;
		author = thisAuthor;
		price = thisPrice;
	}

	//Считывание значений
	void getBook() // отобразить текущую дату
	{
		cout << "Книга: " << name << " Автор: " << author << " Цена: " << price << "грн" << endl;
	}
};
