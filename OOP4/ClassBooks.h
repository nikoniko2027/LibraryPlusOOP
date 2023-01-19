#pragma once

#include <string>

using namespace std;

//////////////������� ����� ��� ���� ����//////////////

class Books {
private:
	int Pages = 0; // ���������� �������
	int Quantity = 0; // ���������� ���� � ��������
	int Price = 0; // ��������� �����
	int Year = 0; // ��� ������� �����
	int Discount = 0; // ������� �� �����
	int Sells = 0; // ���������� ��������� ����
	int Days = 0; // ���������� ���������� ���� � ������� ������ ����� � �������� 
	int Skidka; // ��������� ������ �� �����
	string Author; // �����
	string Title; // �������� �����
	string Category; // ��������� �����
	string Publisher; // �������� �����
	bool Application = false; // ������ � ������������ true - �����������, false - �� ����������
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

	int GetPages() { // �������, ������� ���������� ���������� �������
		return Pages;
	}

	int GetQuantity() { // �������, ������� ���������� ���������� ���� � ��������
		return Quantity;
	}

	int GetPrice() { // �������, ������� ���������� ��������� �����
		if (Discount == 0)
			return Price;
		else
			return Price + ((Price / 100) * Discount);
	}

	int GetDiscount() { // �������, ������� ���������� ������� �� �����
		return Discount;
	}

	int GetSells() {
		return Sells;
	}

	int GetDays() {
		return Days;
	}

	string GetAuthor() { // �������, ������� ���������� ������
		return Author;
	}

	string GetTitle() { // �������, ������� ���������� �������� �����
		return Title;
	}

	string GetPublisher() { // �������, ������� ���������� �������� �������� �����
		return Publisher;
	}

	string GetCategory() { // �������, ������� ���������� ��������� �����
		return Category;
	}

	bool GetApplication() {
		return Application;
	}
};