#include <iostream>
using namespace std;

int main()
{
    int foo[100];
    fill(foo, foo+100, 123);
    for(int i=0; i<100; i++)
    {
        cout << foo[i] << endl;
    }
    return 0;
}

