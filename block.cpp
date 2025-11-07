#include<iostream>

using namespace std;

class Adresa {
private:
	const int adresa;
	char* nume;
	float valoare;
public:
	void setNume(const char* nume) {
		if (strlen(nume) > 0) {
			this->nume = new char[strlen(nume) + 1];
			strcpy_s(this->nume, strlen(nume) + 1, nume);
		}
	}

	char* getNume() {
		return this->nume;
	}
//	setAdresa(int a) {
//		if (a > 0) {
//			this->adresa = a;
//		}
//	}
};

class Tranzactie {
private:
	Adresa expeditor;
	Adresa destinatar;
	float suma;
public:
	void setDestinatar(Adresa dest) {
		//this->destinatar = dest;
	}
	void setExpeditor(Adresa exp) {
		//this->expeditor = exp;
	}
	void setSuma(float suma) {
		if (suma > 0) {
			this->suma = suma;
		}
	}
};

void main() {
	Adresa ion;
	Adresa vasile;
	Tranzactie ion_vasile;

	ion.setNume("Ion");
	vasile.setNume("Vasile");
	cout << ion.getNume << endl;
	cout << vasile.getNume << endl;
}