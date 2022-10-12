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

    // member functions
    void vector_new(size_t sz = 0);/*Kreira novi vektor*/
    void vector_delete();/*Brise vektor*/
    void vector_push_back(int n);/* Dodaje novi element na kraj vektora */
    void vector_pop_back();/* Uklanja posljednji element vektora */
    int& vector_front();/* Vraca referencu na prvi element vekotra*/
    int& vector_back(); /* Vraca referencu na posljednji element vektora */
    size_t vector_size(); /*Vraca broj elemenata vektora */

    void print_vector(); /*Ispisiva vektor*/
};

