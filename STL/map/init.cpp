#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> foo;
    map<int, int> bar{ {1, 2}, {3, 4}, {5, 6}};
    cout << bar[1] << endl;
    cout << bar.at(3) << endl;
    map<int, int> qux (bar);
    cout << qux[1] << endl;
    cout << qux[5] << endl;
    bool a = false;
    cout << a << endl;

    return 0;
}

