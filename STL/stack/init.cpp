#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    for(int i=0; i<5; i++)
    {
        st.push(i);
    }
    cout << st.empty() << endl;
    while(!st.empty())
    {
        cout << "---" << st.size() << endl;
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}

