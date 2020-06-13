#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main()
{
    pair<string, int> p;
    pair<string, int> q("fresrge", 5);
    p.first = "hahaha";
    p.second = 5;
    cout << p.first << " " << p.second << endl;
    p = make_pair("xixi", 6);
    cout << p.first << " " << p.second << endl;
    p = pair<string, int>("wenwen", 7);
    cout << p.first << " " << p.second << endl;
    return 0;
}

