#include "head.hpp"
int main()
{
    std::vector<std::string>greske;
    while (true) {
        try {
            std::cout << "Enter two integers and an operator (+, -, *, /): ";
            int n1 = get_integer();
            int n2 = get_integer();
            char op;
            std::cin >> op;
            int result = calculate(n1, n2, op);
            std::cout << "Result: " << result << std::endl;
        }
        catch (my_exception& e) {
            std::cout << "Error: " << e.what() << std::endl;
            if (e.what()) {
                std::string greska;
                time_t now = time(NULL);
                greska.append(e.what());
                greska.append(": ");
                greska.append(ctime(&now));
                greske.push_back(greska);
            }

        }

        char n;
        std::cout << "If you want to exit press n or any key to continue " << std::endl;
        std::cin >> n;
        if (n == 'n') {
            break;
        }
    }
    for (int i = 0; i < greske.size(); i++) {
        std::cout << greske.at(i) << std::endl;
    }

    return 0;
}