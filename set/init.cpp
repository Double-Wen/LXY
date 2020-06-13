#include <iostream>
#include <set>
using namespace std;
int main()
{
     set<int> foo;
     set<int>::iterator it;
     foo.insert(6);
     foo.insert(2);
     foo.insert(3);
     foo.insert(5);
     foo.insert(3);
     for(it=foo.begin(); it!=foo.end(); it++)
     {
         cout << *it << endl;
     }
     return 0;
}

