#include "head.hpp"

int get_integer()
{
    int n;
    std::cin >> n;
    if (std::cin.fail()) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::invalid_argument("Invalid operand input");
    }
    return n;
}

int calculate(int n1, int n2, char op)
{
    if (op == '+') {
        return n1 + n2;
    }
    else if (op == '-') {
        return n1 - n2;
    }
    else if (op == '*') {
        return n1 * n2;
    }
    else if (op == '/') {
        if (n2 == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return n1 / n2;
    }
    else {
        throw std::invalid_argument("Invalid operator input");
    }
}