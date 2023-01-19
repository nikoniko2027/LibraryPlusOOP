#pragma once

#include <string>

using namespace std;

//////////////Главный класс для всех книг//////////////

class Books {
private:
	int Pages = 0; // Количество страниц
	int Quantity = 0; // Количество книг в магазине
	int Price = 0; // Стоимость книги
	int Year = 0; // Год издания книги
	int Discount = 0; // Наценка на книгу
	int Sells = 0; // Количество проданных книг
	int Days = 0; // Количество пройденных дней с момента заказа книги у издателя 
	int Skidka; // Дефолтная скидка на книгу
	string Author; // Автор
	string Title; // Название книги
	string Category; // Категория книги
	string Publisher; // Издатель книги
	bool Application = false; // Заявка в издательство true - выполняется, false - не заказывали
public:

	void SetBooks(int Pa, int Qu, int Pr, int Ye, int Di, string Au, string Ti, string Ca, string Pu) {
		Pages = Pa;
		Quantity = Qu;
		Price = Pr;
		Year = Ye;
		Discount = Di;
		Author = Au;
		Title = Ti;
		Category = Ca;
		Publisher = Pu;
	}

	void Sell() {
		Quantity--;
		Sells++;
	}

	void SetSkidka(int a) {
		Skidka = a;
	}

	void AddDays() {
		Days++;
	}

	void ClearDays() {
		Days = 0;
	}

	void SetTure() {
		Application = true;
	}

	void SetFalse() {
		Application = false;
	}

	void AddBooks(int a) {
		Quantity += a;
	}

	void SetDiscount() {
		Discount = Skidka;
	}

	void DelDiscount() {
		Discount = 0;
	}

	int GetPages() { // Функция, которая возвращает Количество страниц
		return Pages;
	}

	int GetQuantity() { // Функция, которая возвращает Количество книг в магазине
		return Quantity;
	}

	int GetPrice() { // Функция, которая возвращает Стоимость книги
		if (Discount == 0)
			return Price;
		else
			return Price + ((Price / 100) * Discount);
	}

	int GetDiscount() { // Функция, которая возвращает Наценку на книгу
		return Discount;
	}

	int GetSells() {
		return Sells;
	}

	int GetDays() {
		return Days;
	}

	string GetAuthor() { // Функция, которая возвращает Автора
		return Author;
	}

	string GetTitle() { // Функция, которая возвращает Название книги
		return Title;
	}

	string GetPublisher() { // Функция, которая возвращает название Издателя книги
		return Publisher;
	}

	string GetCategory() { // Функция, которая возвращает Категорию книги
		return Category;
	}

	bool GetApplication() {
		return Application;
	}
};