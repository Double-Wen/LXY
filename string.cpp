#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    printf("%s\n", str.c_str());
    char foo[100];
    strcpy(foo, str.c_str());
    cout << foo << endl;
    char buff[100] = "fgersgs";
    string ss = buff;
    cout << ss << endl;
    return 0;
}

