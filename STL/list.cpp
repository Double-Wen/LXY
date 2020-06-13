#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList = {1};
    list<int> foo = {2};
    list<int> bar = {1, 2, 3, 4, 5};
    list<int>::iterator it = bar.begin();
    bar.insert(++it, 100);
    for(list<int>::iterator t = bar.begin(); t != bar.end(); t++)
    {
        cout << *t << endl;
    }
   
    return 0;
}

