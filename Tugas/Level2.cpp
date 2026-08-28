#include <iostream>
using namespace std;

void cekGanjilGenap(int angka) {
  if (angka % 2 == 0) {
    cout << "Genap";
  } else {
    cout << "Ganjil";
  }
}

int main() {
  cekGanjilGenap(3);
  return 0;
}
