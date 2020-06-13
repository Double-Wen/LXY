#include <iostream>
using namespace std;

int main()
{
    char buff[100];
    fgets(buff, 100, stdin);
    fputs(buff, stdout);
    fputs(buff, stdout);
    return 0;
}

