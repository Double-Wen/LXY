#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ss = "Hello World, dw, Hello World";
    string sub = "dw";
    cout << ss.find(sub) << endl;
    cout << ss.find("Hello") << endl;
    cout << ss.find("Hello", ss.find("Hello")+1) << endl;
    return 0;
}

