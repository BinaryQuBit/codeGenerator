#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    int index = 2;
    numbers.erase(numbers.begin() + index, numbers.begin() + index + 3);
    return 0;
}
