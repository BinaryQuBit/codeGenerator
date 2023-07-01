#include <iostream>

class MyClass {
public:
  MyClass() {
    std::cout << "Class constructor" << std::endl;
  }
  ~MyClass() {
    std::cout << "Class destructor" << std::endl;
    delete[] arr;
  }
private:
  int* arr;
};

int main() {
  MyClass* obj = nullptr;
  delete obj;
  return 0;
}
