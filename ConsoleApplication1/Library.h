#include <iostream>

using namespace std;

class Library
{
public:
	string name, author;
	float price;

	string n() { return name; }


	//����������� ��� ����������
	Library() {
		cout << "����������� ��� ����������" << endl;
	};

	//����������� �� ���������
	Library(string thisName, string thisAuthor, float thisPrice) {
		cout << "����������� �� ���������" << endl;
		setBook(thisName, thisAuthor, thisPrice);
	};

	//����������� �����������
	Library(const Library& library) :
		name(library.name), author(library.author), price(library.price) {
		cout << "����������� �����������" << endl;
	};

	//����������
	~Library() {
		cout << "���������� ��� " << "���: " << name << " �����: "
			<< author << endl;
	};

	//��������� ��������
	void setBook(string thisName, string thisAuthor, float thisPrice)
	{
		name = thisName;
		author = thisAuthor;
		price = thisPrice;
	}

	//���������� ��������
	void getBook() // ���������� ������� ����
	{
		cout << "�����: " << name << " �����: " << author << " ����: " << price << "���" << endl;
	}
};
