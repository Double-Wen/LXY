#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> foo;
    for(int i=0; i<5; i++)
    {
        foo.push(i);
    }
    for(int i=0; i<5; i++)
    {
        cout << "fgresg" << " " << foo.size() << endl;
        cout << foo.front() << endl;
        foo.pop();
    }
    return 0;
}

