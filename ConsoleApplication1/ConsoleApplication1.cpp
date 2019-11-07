#include <iostream>
#include <Windows.h>
#include <string>
#include "Library.h"
using namespace std;

int main(int argc, char* argv[])
{
	//Настройки консоли
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);

	string name, author;
	float price;

	cout << "Введите мнформацию про книгу" << endl;
	cout << "Название книги: ";		getline(cin, name);
	cout << "Автор книги: ";	getline(cin, author);
	cout << "Цена книги: ";	cin >> price;

	//Создание элемента класса
	Library client(name, author, price);
	client.getBook();
	//delete &client;

	//Указатель на компонент-функцию
	string(Library:: * na)();
	na = &Library::n;

	Library newClient("qwe", "rty", 15);
	cout << (newClient.*na)() << endl;

	//Указатель на экзэмпляр класса
	Library* ath = new (Library);
	ath->author = "Unknown";
	cout << "Автор " << ath->author << endl;

	//Вызов деструктора
	delete ath;

	return 0;
}