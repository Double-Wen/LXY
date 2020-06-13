#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int foo[10] = {10, 11, 12, 13};
    reverse(foo, foo+4);
    cout << sizeof(foo)/sizeof(foo[0]) << endl;
    for(int i=0; i<10; i++)
    {
        cout << foo[i] << endl;
    }

    return 0;
}

