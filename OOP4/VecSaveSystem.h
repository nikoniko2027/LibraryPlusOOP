#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "ClassBooks.h"

using namespace std;

class VSS {
private:
	vector<Books> A;
public:
	void DelLastBooks(int a) {
		int size = A.size();
		for (int i = a; i < size; i++)
			A.pop_back();
	}

	void Push(Books B) {
		A.push_back(B);
	}

	void Clear() {
		A.clear();
	}

	void SetTrue(int a) {
		A[a].SetTure();
	}

	void SetFalse(int a) {
		A[a].SetFalse();
	}

	void AddDays(int a) {
		A[a].AddDays();
	}

	void ClearDays(int a) {
		A[a].ClearDays();
	}

	void AddBooks(int a, int b) {
		A[a].AddBooks(b);
	}

	void SetDiscount(int a) {
		A[a].SetDiscount();
	}

	void DelDiscount(int a) {
		A[a].DelDiscount();
	}

	int ASize() {
		return A.size();
	}

	string RetName(int a) {
		BuyBook(a);
		return A[a].GetTitle();
	}

	string RetNameWithoutBuyBook(int a) {
		return A[a].GetTitle();
	}

	void BuyBook(int a) {
		A[a].Sell();
	}

	void SetSkidka(int a) {
		for (int i = 0; i < A.size(); i++)
			A[i].SetSkidka(a);
	}

	int RetPrice(int a) {
		return A[a].GetPrice();
	}

	int RetAllQuantity() {
		return A.size();
	}

	int RetAllBooks() {
		int all;
		for (int i = 0; i < A.size(); i++)
			all += A[i].GetQuantity();
		return all;
	}

	int RetQuantity(int a) {
		return A[a].GetQuantity();
	}

	int RetSellsBook(int a) {
		return A[a].GetSells();
	}

	int RetDays(int a) {
		return A[a].GetDays();
	}

	int RetDiscount(int a) {
		return A[a].GetDiscount();
	}

	bool RetApplication(int a) {
		return A[a].GetApplication();
	}

	string RetSTRING(int n, int i) {
		switch (n) {
		case 1:
			return A[i].GetTitle();
			break;
		case 2:
			return A[i].GetAuthor();
			break;
		case 3:
			return A[i].GetCategory();
			break;
		case 4:
			return A[i].GetPublisher();
			break;
		}
	}

	int RetINT(int n, int i) {
		switch (n) {
		case 1:
			return A[i].GetPrice();
			break;
		case 2:
			return A[i].GetQuantity();
			break;
		case 3:
			return A[i].GetDiscount();
			break;
		}
	}
};

VSS MV;