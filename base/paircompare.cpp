#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int,int> p=make_pair(5, 10);
    pair<int,int> q=make_pair(10, 5);
    pair<int,int> w=make_pair(10, 10);
    cout << (p<q) << endl;
    cout << (q<w) << endl;
    cout << (p<w) << endl;
    return 0;
}

