//2 May 21 9:51 pm

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int rows,column,depth;
    int size;
    cout<<"=======================3d Array=========================\n";
    cout<<"Enter row and column and layers:";
    cin>>rows>>column>>depth;
    size=rows*column*depth;

    //Allocating  memory in heap for 2d array
    int *myPointer = new int[size];

    cout<<"\nEnter 3d array:\n";
    for(int k=0;k<depth;k++)
    {
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>*( myPointer + (k*4)*rows*column + (i*4)*column + (j*4) ); //multiply by 4 for int 4 bytes
            }
            
        }
    }

    cout<<"\nThe 3d array you Entered is:\n";

    for(int k=0;k<depth;k++)
    {
        cout<<endl<<"Layer "<<k+1<<endl;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<*( myPointer + (k*4)*rows*column + (i*4)*column + (j*4) )<<"\t"; //multiply by 4 for int 4 bytes
            }
            cout<<endl;
        }
        
    }


    delete[] myPointer;
    myPointer=NULL;
    return 0;

}

    // cout<<"\nEnter 3d array:\n";
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<column;j++)
    //     {
    //         for(int k=0;k<depth;k++)
    //         {
    //             cin>>*( myPointer + (k*4)*rows*column + (i*4)*column + (j*4) ); //multiply by 4 for int 4 bytes
    //         }
            
    //     }
    // }

    // cout<<"\nThe 3d array you Entered is:\n";

    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<column;j++)
    //     {
    //         for(int k=0;k<depth;k++)
    //         {
    //             cout<<*( myPointer +  (k*4)*rows*column + (i*4)*column + (j*4) )<<" "; //multiply by 4 for int 4 bytes
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl<<endl;
    // }
