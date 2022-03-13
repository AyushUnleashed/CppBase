#include<iostream>
using namespace std;

int main()
{
    int rowSize;
    int colSize;
    cin>>rowSize;
    cin>>colSize;

    //creating array of integer pointers in heap
    //and storing address in a pointer to pointer ( which is stored in stack)
    int** p2dArray = new int* [rowSize]; 
    //going to point each pointer to new space allocated in heap
    //pointing to independent dynamic arrays

    for(int i=0;i<rowSize;i++)
    {
        p2dArray[i] = new int[colSize];
        // creating individual rows
    }

    //giving input

    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            cin>>p2dArray[i][j];
        }
    }

    cout<<endl<<"Ouptut:\n";
    //giving output
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
           cout<<p2dArray[i][j]<<" ";
        }
        cout<<endl;
    }
    //deallocation of 2d array
    for(int i=0;i<rowSize;i++)
    {
        delete[] p2dArray[i];
    }

    delete[] p2dArray;

    p2dArray = NULL;
    return 0;
}
