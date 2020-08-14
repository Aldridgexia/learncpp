#include <iostream>

int main() {
    int val1 = 0, val2 = 0;
    std::cout << "Please input 2 numbers: " << std::endl;
    std::cin >> val1 >> val2;
    if (val1 >= val2) {
        int tmp = val1;
        val1 = val2;
        val2 = tmp;
    }
    int i = val1;
    while (i <= val2) {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}
