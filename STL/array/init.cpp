#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> foo{1, 2, 3, 4, 5};
    array<int, 5> bar={1, 2, 3, 4, 5};
    array<int, 5> sf{4, 5, 6, 7, 8};
    sf.swap(foo);
    cout << "---" << sf.size() << endl;
    for(int i=0; i<sf.size(); i++)
    {
        cout << sf.at(i) << endl;
    }
    cout << endl;
    cout << foo.at(1) << endl;
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    cout << "------" << endl;
    cout << foo.front() << endl;
    cout << foo.back() << endl;
    array<int, 8> qux;
    qux.fill(1);
    for(int i=0; i<qux.size(); i++)
    {
        cout << qux[i] << endl;
    }
    cout << qux.size() << " " << qux.max_size() << endl;
    array<int, 100> xy;
    cout << xy.size() << " " << xy.max_size() << endl;

    return 0;
}

