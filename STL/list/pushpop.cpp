#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> foo{1, 2, 3};
    foo.push_back(4);
    for(list<int>::iterator it=foo.begin(); it!=foo.end(); it++)
    {
        cout << *it << endl;
    }
    cout << foo.front() << " " << foo.back() << endl;

    return 0;
}

