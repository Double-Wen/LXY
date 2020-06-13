#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int foo[10] = {1, 2, 3};
    do {
        printf("%d %d %d\n", foo[0], foo[1], foo[2]);
    } while(next_permutation(foo, foo+3));
    return 0;
}

