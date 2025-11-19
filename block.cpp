#include<iostream>

using namespace std;

class Adresa {
private:
	const int adresa;
	string nume;
	float valoare;

public:
	Adresa() :adresa(genereazaAdresa()) {
		this->valoare = 0;
		this->nume = "";
	}

	Adresa(int adresa, float valoare, string nume) :adresa(genereazaAdresa()) {
		this->valoare = valoare;
		this->nume = nume;
	}

	static int genereazaAdresa() {
		static int contor = 0;
		return ++contor;
	}

	void setNume(string nume) {
		if (nume.length() > 0) {
			this->nume = nume;
		}
	}

	string getNume() {
		return this->nume;
	}

	void setValoare(float valoare) {
		this->valoare = valoare;
	}

	float getValoare() {
		return this->valoare;
	}
};

class Tranzactie {
private:
	Adresa expeditor;
	Adresa destinatar;
	float suma;

public:
	Tranzactie() {
		//this->expeditor = nullptr;
		//this->destinatar = nullptr;
		this->suma = 0;
	}

	void setDestinatar(const Adresa dest) {
		//this->destinatar = dest;
	}

	Adresa getDestinatar() {
		return this->destinatar;
	}

	void setExpeditor(const Adresa exp) {
		//this->expeditor = exp;
	}

	Adresa getExpeditor() {
		return this->expeditor;
	}

	void setSuma(float suma) {
		if (suma > 0) {
			this->suma = suma;
		}
	}

	float getSuma() {
		return this->suma;
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