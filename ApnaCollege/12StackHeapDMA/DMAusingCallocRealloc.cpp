#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{   system("cls");
    int* ptr;
    int n, i;
    cin>>n;
    //memory allocation using malloc
    ptr = (int*)malloc(n*sizeof(int));  //malloc return null pointer || we do type conversion

    cout<<"currentSize:"<<n;
    if(ptr == NULL)
    {
        cout<<"\nMemory not allocated\n";
        return 0;
    }
    else
    {   
        cout<<"\nMemory  successfully allocated using realloc\n";

        for(int i=0;i<n;i++)
        {
            cin>>ptr[i];
        }
    }

    cout<<"\nElements of Array are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }

    ptr = (int*) realloc(ptr,2*n*sizeof(int));

    cout<<"\n\ncurrentSize:"<<2*n;

        if(ptr == NULL)
    {
        cout<<"\nMemory not allocated\n";
        return 0;
    }
    else
    {   
        cout<<"\nMemory  successfully allocated using malloc\n";

        for(int i=0;i<2*n;i++)
        {
            cin>>ptr[i];
        }
    }

    cout<<"\nElements of Array are:\n";
    for(int i=0;i<2*n;i++)
    {
        cout<<ptr[i]<<" ";
    }

    free(ptr);

    return 0;
}