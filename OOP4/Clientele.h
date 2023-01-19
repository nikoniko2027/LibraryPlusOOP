#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct men {
	string Name;
	string Phone;
	string Email;
};

class People {
private:
	vector <men> V;
public:
	void Push(men A) {
		V.push_back(A);
	}

	string GetName() {
		return V[rand() % V.size()].Name;
	}

	string GetPhone() {
		return V[rand() % V.size()].Phone;
	}

	string GetEmail() {
		return V[rand() % V.size()].Email;
	}
};

People VP;

void SetClientele() {
	men A;
	A.Name = "Иванов";
	A.Phone = "8-(927)-123-45-67";
	A.Email = "ivanov@mail.ru";
	VP.Push(A);
	A.Name = "Петров";
	A.Phone = "8-(927)-723-55-17";
	A.Email = "petrov@mail.ru";
	VP.Push(A);
	A.Name = "Филиппов";
	A.Phone = "8-(937)-749-28-10";
	A.Email = "filippov@yandex.ru";
	VP.Push(A);
	A.Name = "Зарипов";
	A.Phone = "8-(999)-285-11-60";
	A.Email = "zaripov@yandex.ru";
	VP.Push(A);
	A.Name = "Репин";
	A.Phone = "8-(917)-432-53-44";
	A.Email = "repin@yandex.ru";
	VP.Push(A);
	A.Name = "Должинин";
	A.Phone = "8-(917)-743-25-74";
	A.Email = "doljinin@yandex.ru";
	VP.Push(A);
	A.Name = "Морозов";
	A.Phone = "8-(977)-132-21-91";
	A.Email = "morovoz@gmail.com";
	VP.Push(A);
}

