#include <iostream>
using namespace std;

template <typename T>
class Array
{
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for(int i=0; i<size; i++)
    {
        ptr[i] = arr[i];
    }
}

template <typename T>
void Array<T>::print()
{
    for(int i=0; i<size-1; i++)
    {
        cout << *(ptr+i) << " ";
    }
    cout << *(ptr+size-1) << endl;
}

int main()
{
    int foo[6] = {4, 5, 1, 2, 3, 8};
    Array<int> bar(foo, 6);
    bar.print();
    char qux[6] = "fress";
    Array<char> abc(qux, 6);
    abc.print();
    return 0;
}

