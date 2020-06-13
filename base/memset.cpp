#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int foo[100];
    int bar[100];
    memset(foo, 0, sizeof(foo));
    for(int i=0; i<100; i++)
    {
        cout << foo[i] << endl;
        cout << bar[i] << endl;
    }
    return 0;
}

