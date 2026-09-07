#include <iostream>
using namespace std;
void tepokNyamuk(int jumlah) {
    for (int i = 1; i <= jumlah; i++) {
        if (i % 3 == 0) {
            cout << "TEPOK" << endl;
        } else {
            cout << i << endl;
        }
    }
}
int main() {
    tepokNyamuk(5);
    return 0;
}
