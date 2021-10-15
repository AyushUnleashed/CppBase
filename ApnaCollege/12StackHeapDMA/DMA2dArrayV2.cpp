//2 May 21 1:14 am
//Method 1 O(n2)
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int rows,column;int size;
    cout<<"Enter row and column:";
    cin>>rows>>column;
    size=rows*column;
    
    int *myPointer[rows];


    for(int i=0;i<rows;i++)
    {   //this is similar to 1d allocation
        myPointer[i] = new int[column];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            //cin>>myPointer[i][j];
            cin>>*( myPointer[i] + (i*4)*column +j*4);
        }
    }
cout<<"\nGiven 2d array allocated using array of pointers is:\n";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            //cout<<myPointer[i][j]<<" ";
            cout<<*(myPointer[i] + (i*4)*column +j*4)<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++)
    {    delete[] myPointer[i];
        myPointer[i]=NULL;
    }
    return 0;

}