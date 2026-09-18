#include <iostream>

int main() {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < i + 1; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
