#include <iostream>
#include <vector>
#include <algorithm>

void sort01245(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

int main() {
    std::vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 0, 4, 5, 5, 5, 4};

    sort01245(arr);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;   
}