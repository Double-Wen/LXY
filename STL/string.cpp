#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";
    for(int i=0; i<str.length(); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

