#include "main_header.hpp"
int main()
{
    
    int a = 10;
    int b = 20;
    std::cout << "Minimum of " << a << " and " << b << " is " << min(a,b) << std::endl;

    std::cout<<"Minimum of 'apple' and 'banana' is " << min("banana", "apple") << std::endl;
    
    int arr[] = { 5, 3, 7, 1, 4, 2, 6 };
    int n = 7;
    quicksort2(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
    }
    char arr2[] = { 'c', 'a', 'b', 'd', 'e', 'f' };
    int n2 = 6;
    quicksort2<char>(arr2,n2);
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i];
    }
    return 0;
}

