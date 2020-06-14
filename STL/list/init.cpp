#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> foo{1, 2, 3};
    list<int> bar;
    list<int>::iterator it = foo.begin();
    foo.insert(++it, 100);
    for(list<int>::iterator i = foo.begin(); i!=foo.end(); i++)
    {
        cout << *i << endl;
    }
    list<int> qux{6, 7, 8};
    foo.insert(foo.begin(), qux.begin(), qux.end());
    for(list<int>::iterator i = foo.begin(); i!=foo.end(); i++)
    {
        cout << *i << endl;
    }

    foo.insert(foo.end(), 5, 10);
    for(list<int>::iterator i = foo.begin(); i!=foo.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;

}

