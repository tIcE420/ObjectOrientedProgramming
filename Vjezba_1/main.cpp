#include "myh.hpp"

int main() {
	//Ostalo test


	/*int* niz = NULL;
	int broj_el = 0;
	cout << "Unesite broj elemenata niza: ";
	cin >> broj_el;
	niz = new int[broj_el];
	int i = 0;
	cout << "Unesite clanove niza";
	unos(niz, broj_el);
	//ispis(niz, broj_el);
	int& rez = funk(niz);
	rez = 0;
	int broj = 0;
	int* niz2 = nizovi(niz, broj_el,&broj);
	for (i = 0; i < broj; i++) {
		cout << niz2[i];
	}
	niz2 = niz_n(niz, broj_el);
	for (i = 0; i < broj_el - 2; i++) {
		cout << niz2[i];
	}
	
	delete niz;
	niz = 0;
	*/

	//Struktura test
	int a = 0;
	cout << "Unesite velicinu niza";
	cin >> a;
	MyVector asd;
	asd.vector_new(a);
	cout << "Unesite clanove niza: ";
	for (int i = 0; asd.capacity - 1; i++) {
		int g;
		cin >> g;
		asd.vector_push_back(g);
		
	}
	asd.print_vector();
	asd.vector_delete();

}