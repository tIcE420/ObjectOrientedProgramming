#include "head.hpp"


const char* read_file::what()const throw() {
    return "Couldn't read file";
}
std::vector<int> read_file_int() {
    std::string line;
    std::ifstream myfile("numbers.txt");
    std::vector<std::string> nums;
    std::vector<int>numbers;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            nums.push_back(line);
            
           
        }
        myfile.close();
    }
    else {
        throw read_file();
    }
    for (int i = 0; i < nums.at(0).size(); i++) {
        if (nums.at(0).at(i) - '0' >0) {
            numbers.push_back(nums.at(0).at(i) - '0');
        }
        
        
    }
   
    return numbers; 
}
int find_bigger_500(std::vector<int> numbers) {
    int j = 0;
    for (int i = 0; i < numbers.at(i); i++) {
        if (numbers.at(i) > 500) {
            j++;
        }
    }
    return j;
}
std::tuple <int, int> min_max(std::vector<int> numbers) {
 
    int min = numbers.at(0);
    int max = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers.at(i) > max) {
            max = numbers.at(i);

        }
        if (numbers.at(i) < min) {
            min = numbers.at(i);
        }
    }
    std::tuple<int, int> mini_maxi(min, max);
    return mini_maxi;
}
std::vector<int> find_lower_300(std::vector<int> numbers) {

    for (int i = 0; i < numbers.at(i); i++) {
        if (numbers.at(i) <300) {
            numbers.erase(numbers.begin() + i);
        }
    }
    return numbers;
}
std::vector<int> sort(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return numbers;
}
bool IsOdd(int i) {
    return ((i % 2) == 1);
}
bool isnormal(int i) {
    return ((i % 2) == 0);
}