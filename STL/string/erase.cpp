#include <iostream>
using namespace std;
int main()
{
    string ss = "123456";
    //ss.erase(ss.begin()+2, ss.begin()+4);
    ss.erase(2, 2);
    cout << ss << endl;
    ss.clear();
    cout << ss.length() << endl;

    return 0;
}

