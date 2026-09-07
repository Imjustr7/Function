#include <iostream>
using namespace std;
void hitungKopi(int jumlahGelas) {
    int total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    cout << total << endl;
}
int main() {
    hitungKopi(2); 
    hitungKopi(4); 
    return 0;
}
