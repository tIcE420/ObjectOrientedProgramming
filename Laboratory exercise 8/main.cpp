#include "main_header.hpp"
int main()
{
    
    int a = 10;
    int b = 20;
    std::cout << "Minimum of " << a << " and " << b << " is " << min(a,b) << std::endl;

    std::cout<<"Minimum of 'apple' and 'banana' is " << min("banana", "apple") << std::endl;
    
    int arr[] = { 5, 3, 7, 1, 4, 2, 6 };
    int n = 7;
    quicksort(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] <<std::endl;
    }
    char arr2[] = { 'c', 'a', 'b', 'd', 'e', 'f' };
    int n2 = 6;
    quicksort<char>(arr2,n2);
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i]<<std::endl;
    }
    point <int> p1(2, 3);
    point <int> p2(3, 4);
    std::cout << "udaljenost tocaka" << p1 <<" i " << p2 << " je " << p1 - p2;
    return 0;
}


