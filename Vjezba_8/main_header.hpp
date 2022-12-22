#include <iostream>
#include <string>
#include <vector>
#include <cctype>
template <typename moj_temp>
moj_temp min(moj_temp a, moj_temp b)
{
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}
template<typename moj_temp>
class set {
private:
    moj_temp element;
    std::vector<moj_temp> skup;
public:
    void set_add(moj_temp ele) {
        skup.push_back(ele);
    }
    std::vector<moj_temp> pop(moj_temp ele) {
        for (int i = 0; i < element.size(); i++) {
            if (element.at(i) == ele) {
                element.erase(i);
            }
        }
    }
    moj_temp find(moj_temp ele) {
        for (int i = 0; i < element.size(); i++) {
            if (element.at(i) == ele) {
                return element.at(i);
            }
        }
    }
};
template<typename moj_temp>
void quicksort(moj_temp* arr,int left, int right) {
    if (left >= right)
        return;
    moj_temp pivot = arr[(left + right) / 2];
    moj_temp i = left;
    moj_temp j = right;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quicksort(arr, left, j);
    quicksort(arr,i, right);
}
template<typename moj_temp>
void quicksort2(moj_temp* arr,int n) {
    quicksort(arr, 0, n - 1);
}
template <>
void quicksort<char>(char *arr, int left, int right) {
    
    if (left >= right)
        return;
    int pivot = tolower(arr[(left + right) / 2]);
    int i = left;
    int j = right;

    while (i <= j) {
        while (tolower(arr[i]) < pivot) i++;
        while (tolower(arr[j]) > pivot) j--;

        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quicksort<char>(arr, left, j);
    quicksort<char>(arr, i, right);
}

template <>
void quicksort2<char>(char* arr, int n) {
    quicksort<char>(arr, 0, n - 1);
}