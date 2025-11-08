#include<iostream>

using namespace std;

class Adresa {
private:
	int adresa;
	string nume;
	float valoare;

public:
	Adresa() {
		this->adresa = 0;
		this->valoare = 0;
		this->nume = "";
	}

	Adresa(int adresa, float valoare, string nume) {
		this->adresa = adresa;
		this->valoare = valoare;
		this->nume = nume;
	}

	void setNume(string nume) {
		if (nume.length() > 0) {
			this->nume = nume;
		}
	}

	string getNume() {
		return this->nume;
	}
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
	Adresa ion(1, 1000, "Ion");
	Adresa vasile;
	Tranzactie ion_vasile;

	vasile.setNume("Vasile");
	cout << ion.getNume() << endl;
	cout << vasile.getNume() << endl;
}