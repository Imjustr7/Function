void cekHoki(int n) {
    if (n % 7 == 0 && n % 2 == 0) {
        cout << "HOKI" << endl;
    } else {
        cout << "BIASA" << endl;
    }
}
int main() {
    cekHoki(14);
    return 0;
}
