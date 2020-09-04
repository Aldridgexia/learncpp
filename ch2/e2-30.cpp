#include <iostream>

int main()
{
    const int v2 = 0;
    int i = 10;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    r1 = v2; // ok
    p1 = p2; // error
    p2 = p1;  // ok
    p1 = p3; // error
    p2 = p3; // ok
    return 0;
}
