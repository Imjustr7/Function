#include <iostream>
using namespace std;

int hitungTabungan(int i) {
  int total = 0;
  for (int hari = 1; hari <= i; hari++) {
    if (hari % 2 != 0) {
      total += 2000;
    } else {
      total += 5000;
    }
  }
  return total;
}

int main() 
{ cout << hitungTabungan(3) << endl; }
