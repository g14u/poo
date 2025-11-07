#include <iostream>
using namespace std;

//struct set de date unde stochezi mai multe caracteristici despre un obiect

struct Carte {            //avand acces din main => zona publica: Public
	char* autor;   //char* nume...un pointer la primul caracter din nume!!!
	int nrPagini;
};

void afisare(Carte c) {

	cout << endl << "Cartea scrisa de " << c.autor << " are " << c.nrPagini << ".";

};
void endl2(int a) {
	for (int i = 0; i < a; i++)
		cout << endl;
}
int suma() {
	int dimensiune = 4;
	int s = 0;
	int vector[] = { 17, 29, 45, 78 };

	for (int i = 0; i < dimensiune; i++)
	{
		s += vector[i];
	}
	return s;
};
void afisareVector(int* vector, int dim) {   //transimterea parametrilor: este de 3 feluri(valoare, adresa si referinta)---prin valoare nu modifica nimic global(doar la nivel de functie se creeaza niste copii locale), prin adresa modifica si dupa iesirea din functie

	cout << endl << "Afisare vector: " << endl << endl;
	for (int i = 0; i < dim; i++)
		cout << endl << "vector[" << i << "]=" << vector[i]; //la fct care nu necesita modificarea variabilelor trimitem prin valoare...recomadat!

}
int pozMaxV(int* vector, int dim) {
	int pozMax = 0;
	for (int i = 1; i < dim; i++)
		if (vector[pozMax] < vector[i])
			pozMax = i;

	return pozMax;

}

void stergereMaxDePePozitie(int** vector, int* dim, int pozitie) { //prima *:pastreaza tipul de date din main   a doua *:transmit parametrul prin pointer sau adresa 

	int* vectorAux = new int[*dim - 1];   //folosesti dereferentierea
	int j = 0;
	for (int i = 0; i < *dim; i++) {
		if (i != pozitie)
			vectorAux[j++] = (*vector)[i]; //dereferentiezi vectorul...normal: prima data se executa indexarea inainte derentiere...(*)=se executa deferentierea inainte de indexare
	}


	delete[](*vector);
	(*dim)--;

	*vector = vectorAux;



}
void main1() {

	Carte carte;
	carte.nrPagini = 250;
	carte.autor = new char[strlen("Popescu") + 1];  //la pointeri: alocare de memorie(operatorul new), dezalocare(operatorul delete)

	//daca pui new char* apare eroare in pop up  

	strcpy_s(carte.autor, strlen("Popescu") + 1, "Popescu");

	afisare(carte);

	delete[]
		carte.autor;
	cout << endl;
	afisare(carte);

	int sumaCalc = suma();
	cout << endl << endl << endl << "Suma calculata este:" << sumaCalc << endl << endl << endl;

	/*
	 Start_Block1
		char* adresa;
		char buffer[50];
		cout << "Adresa este: ";
		cin.getline(buffer, 50);
		adresa = new char[strlen(buffer) + 1];
		strcpy_s(adresa, strlen(buffer) + 1, buffer);
		endl2(2);
		cout << "Adresa citita este: " << adresa;
		endl2(2);



		delete[] adresa;
		Start_Block2
		*/
	int* vector;
	int dim = 3;
	vector = new int[dim];
	for (int i = 0; i < dim; i++)
	{
		cout << "vector[" << i << "]= ";
		cin >> vector[i];
	}
	afisareVector(vector, dim);
	cout << endl << "Pozitia pe care se afla maximul este: " << pozMaxV(vector, dim);


	//Daca vreau sa sterg un element dintr-un vector folosesc pointer.  Modific vectorul si dim, dar si poz dupa care fac stergerea.

	stergereMaxDePePozitie(&vector, &dim, 1);  //transmitere prin pointer cu &...daca dau adresele prin pointer cand ma intorc in main ele sunt modificate

	afisareVector(vector, dim);
	//Recomandare tema...stergere pozitie prin referinta!!!

}