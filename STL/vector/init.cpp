#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> foo;
    for(int i=1; i<=5; i++)
    {
        foo.push_back(i);
    }
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    for(vector<int>::iterator it=foo.begin(); it!=foo.end(); it++)
    {
        cout << *it << endl;
    }
    foo.pop_back();
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    foo.clear();
    cout << endl;
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    foo.insert(foo.begin(), 100);
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    for(int i=0; i<10; i++)
    {
        foo.push_back(i+5);
    }
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    foo.erase(foo.begin()+3);
    for(int i=0; i<foo.size(); i++)
    {
        cout << foo[i] << endl;
    }
    return 0;
}

