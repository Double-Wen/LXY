#include <iostream>
using namespace std;

int main()
{
    string s1 = "ferwsfr";
    string s2 = "rgesgrs";
    cout << (s1<s2) << endl;
    cout << (1>2) << endl;
    string ss = "fwaewfa";
    cout << ss.length() << endl;
    cout << ss.size() << endl;
    string st = "我我我";
    cout << st.length() << endl;
    cout << st.size() << endl;
    string foo = "abcxyz";
    string bar = "opq";
    foo.insert(3, bar);
    cout << foo << endl;
    return 0;
}

