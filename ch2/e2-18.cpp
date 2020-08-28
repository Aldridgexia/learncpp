#include <iostream>

int main()
{
    int val = 2;
    int val2 = 3;
    int *ptr = &val;
    int *ptr2 = &val2;
    ptr = ptr2;
    std::cout << *ptr << std::endl;
    *ptr = 4;
    std::cout << *ptr << " and ptr2 value" << *ptr2 << std::endl;
    return 0;
}
