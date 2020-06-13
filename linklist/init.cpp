#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int data;
    node* next;
};


int main()
{
    int *p = (int*)malloc(sizeof(int));
    node *n = (node*)malloc(sizeof(node));
    int *q = (int*)malloc(sizeof(900000000000)*sizeof(int));
    int *qq = nullptr;
    int *pp;
    if(pp)
    {
        cout << "DFEAS" << endl;
    }
    if(qq)
    {
        cout << "NULLL" << endl;
    }

    if(q==NULL)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    node* foo = new node();
    cout << *q << endl;
    free(q);
    if(q==NULL)
    {
        cout << "error free" << endl;
    }
    else
    {
        cout << *q << endl;
    }
    return 0;
}

