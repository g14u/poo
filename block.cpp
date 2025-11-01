#include<iostream>

using namespace std;

class Adresa {
private:
	char* nume;
	int adresa;
public:
	setNume(char* nume) {
		this->nume = nume;
	}
	setAdresa(int a) {
		if (a > 0) {
			this->adresa = a;
		}
	}
};

class Tranzactie {
private:
	Adresa expeditor;
	Adresa destinatar;
	float suma;
public:
	void setDestinatar(Adresa dest) {
		this->destinatar = dest;
	}
	void setExpeditor(Adresa exp) {
		this->expeditor = exp;
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
}