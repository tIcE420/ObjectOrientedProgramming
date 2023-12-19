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

	void vector_new(size_t sz = 0);

	void vector_delete();

	void vector_push_back(int n);

	void vector_pop_back();

	int& vector_front();

    int& vector_back(); 

    size_t vector_size(); 

    void print_vector();
};

