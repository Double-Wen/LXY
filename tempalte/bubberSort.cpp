#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T foo[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(foo[j]>foo[j+1])
                swap(foo[j], foo[j+1]);
        }
    }
}


int main()
{
    int foo[5] = {5, 8, 7, 6, 9};
    int n=sizeof(foo)/sizeof(foo[0]);
    bubbleSort<int>(foo, 5);
    for(int i=0; i<n; i++)
    {
        cout << foo[i] << endl;
    }
    return 0;
}

