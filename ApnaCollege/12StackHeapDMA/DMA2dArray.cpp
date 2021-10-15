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
    //Allocating  memory in heap for 2d array
    int *myPointer = new int[size];

    cout<<"\nEnter 2d array:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>*( myPointer + (i*4)*column + (j*4) ); //multiply by 4 for int 4 bytes
        }
    }

    cout<<"\nThe 2d array you Entered is:\n";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<*( myPointer + (i*4)*column + (j*4) )<<" "; //multiply by 4 for int 4 bytes
        }
        cout<<endl;
    }

    delete[] myPointer;
    myPointer=NULL;
    return 0;

}