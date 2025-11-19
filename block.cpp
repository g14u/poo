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

	int getAdresa() {
		return this->adresa;
	}

	void operator=(const Adresa& copie) {
		this->nume = copie.nume;
		this->valoare = copie.valoare;
	}

	void operator+=(int valoare) {
		this->valoare += valoare;
	}

	void afisareAdresa() {
		cout << endl << "Adresa: " << this->adresa << endl
			<< "Nume: " << this->nume << endl
			<< "Suma: " << this->valoare << endl;
	}
};

class Tranzactie {
private:
	int expeditor;
	int destinatar;
	float suma;

public:
	Tranzactie() {
		this->expeditor = 0;
		this->destinatar = 0;
		this->suma = 0;
	}

	void setDestinatar(int dest) {
		this->destinatar = dest;
	}

	int getDestinatar() {
		return this->destinatar;
	}

	void setExpeditor(int exp) {
		this->expeditor = exp;
	}

	int getExpeditor() {
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
	//cout << ion.getNume() << endl;
	//cout << vasile.getNume() << endl;
	vasile.afisareAdresa();
	ion.afisareAdresa();
	vasile += 100;
	vasile.afisareAdresa();
}