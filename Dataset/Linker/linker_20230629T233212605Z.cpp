#include <iostream>

int main() {
    int* arr = new int[5];
    delete[] arr;
    delete[] arr;
    return 0;
}
