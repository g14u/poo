#include<iostream>

using namespace std;

class Tranzactie {
private:
	char* expeditor;
	char* destinatar;
	float suma;
public:
	void setDestinatar(char* address) {

	}
	void setExpeditor(char* address) {

	}
	void setSuma(float suma) {
		if (suma > 0) {
			this->suma = suma;
		}
	}
};

void main() {
	Tranzactie t;
}