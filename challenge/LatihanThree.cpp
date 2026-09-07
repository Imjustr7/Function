#include <iostream>
using namespace std;
void cekTilang(int plat, int tanggal) {
    if (plat % 2 == tanggal % 2) {
        cout << "AMAN" << endl;
    } else {
        cout << "TILANG" << endl;
    }
}
int main() {
    cekTilang(24, 12); // Output: AMAN
    cekTilang(13, 20); // Output: TILANG
    return 0;
}
