#include<iostream>
using namespace std;
#define MAXSIZE 10

void insertArray(int* arr,int value,int position,int &size)
{
    int index=position-1;
    //valid index for insertion = 0 to 
    //insertion at any index i; index = position -1;

    //if at some index
    if(size==MAXSIZE)
    {
        cout<<"\nOverflow of array";
        return;
    }

    if(size+1<position)
    {
        cout<<"\nInvalid Operation";
    }
    else
    {
         for(int i=MAXSIZE-2;i>=index;i--)
        {
            arr[i+1]=arr[i];
            arr[index]=value;
            size++;
            //shift
            //insert
            //increase size
            return;
        }
        //insertion at last index;
        arr[index]=value;
        size++;
    }
}

void printArray(int arr[],int &size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int  main()
{
    system("cls"); 
    int arr[10]={3};
   
    char choice;
    int size=1;
    do
    {
        int value;
        int position;
        cin>>value;
        cin>>position;
        insertArray(arr,value,position,size);
        cout<<"\nArray after insertion:";
        printArray(arr,size);
        cout<<"\nDo you want to continue insertion?(y/n)";
        cin>>choice;
        
    }while (choice=='y');
    
}