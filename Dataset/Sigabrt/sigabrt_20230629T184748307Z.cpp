#include <iostream>

int main() {
    int* ptr = new int;
    delete ptr;
    delete ptr;

    return 0;
}
