#include "head.hpp"


const char* unosenje::what()const throw() {
    return "NaN";
}



const char* operacije::what() const throw() {
    return "Invalid operator";
}




const char* nula::what() const throw() {
    return "Division by zero";
}

int get_integer()
{
    int n;
    std::cin >> n;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw unosenje();
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
            throw nula();
        }
        return n1 / n2;
    }
    else {
        throw operacije();
    }
}