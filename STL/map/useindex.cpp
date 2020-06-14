#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> mp;
    mp['c'] = 20;
    mp['d'] = 30;
    cout << mp['c'] << endl;
    return 0;
}

