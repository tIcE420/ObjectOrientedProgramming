#include "head.hpp"
int main()
{
    std::vector<int> numbers;
    try {
        numbers = read_file_int();
        

        }
    catch (my_exception& e) {
            std::cout << "Error: " << e.what() << std::endl;

        }
    std::vector<int>::iterator it = std::find_if(numbers.begin(), numbers.end(), IsOdd);
    int mycount = std::count_if(numbers.begin(), numbers.end(), IsOdd);
    std::replace_if(numbers.begin(), numbers.end(), isnormal, 0);
    std::sort(numbers.begin(), numbers.end());
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        if (a % 2 == 0 && b % 2 == 0) {
            return a > b;
        }
        else if (a % 2 == 0) {
            return true;
        }
        else if (b % 2 == 0) {
            return false;
        }
        else {
            return a > b;
        }
        });
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers.at(i);
    }
    return 0;
}
