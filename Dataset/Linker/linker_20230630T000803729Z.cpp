int main() {
  int* ptr = new int;
  *ptr = 5;
  delete[] ptr;
  return 0;
}