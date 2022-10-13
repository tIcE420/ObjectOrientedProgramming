#include <iostream>
using namespace std;
void ispis(int* niz, int broj_el);
void unos(int* niz, int broj_el);
int* nizovi(int* niz, int broj_el,int *broj);
int& funk(int* niz);
int* niz_n(int* niz, int n);
struct MyVector
{
    int* arr;
    size_t size, capacity;
	/*Kreira novi vektor*/
	void vector_new(size_t sz = 0);
	/*Brise vektor*/
	void vector_delete();
	/* Dodaje novi element na kraj vektora */
	void vector_push_back(int n);
	/* Uklanja posljednji element vektora */
	void vector_pop_back();
	/* Vraca referencu na prvi element vekotra*/
	int& vector_front();
	/* Vraca referencu na posljednji element vektora */
    int& vector_back(); 
	/*Vraca broj elemenata vektora */
    size_t vector_size(); 
	/*Ispisiva vektor*/
    void print_vector();
};

