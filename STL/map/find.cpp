#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> foo;
    foo['a'] = 10;
    foo['b'] = 20;
    foo['c'] = 30;
    foo['d'] = 40;
    map<char, int>::iterator it = foo.find('b');
    cout << it->first << " " << it->second << endl;
    for(map<char, int>::iterator xy=foo.begin(); xy!=foo.end(); xy++)
    {
        cout << xy->first << " " << xy->second << endl;
    }
    cout << "Size: " << foo.size() << endl;
    foo.erase(it, foo.end());
    for(map<char, int>::iterator xy=foo.begin(); xy!=foo.end(); xy++)
    {
        cout << xy->first << " " << xy->second << endl;
    }
    //cout << it->first << " " << it->second << endl;
    foo.clear();
    cout << foo.size() << endl;
    for(map<char, int>::iterator xy=foo.begin(); xy!=foo.end(); xy++)
    {
        cout << xy->first << " " << xy->second << endl;
    }

    return 0;
}

