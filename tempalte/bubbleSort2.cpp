#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int foo[6] = {4, 5, 7, 1, 2, 6};
    int n=6;
    bubbleSort(foo, n);
    for(int i=0; i<n; i++)
    {
        cout << foo[i] << endl;
    }
}
