#include <iostream>
using namespace std;

int main()
{
    int i=0;
    for(int j=0; j<1000000000; j++)
    {
        ++i;
        --i;
    }
    return 0;
}

