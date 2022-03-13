#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 10

void deleteArray(int arr[],int idx,int &size)
{
    //underflow
    //invalid index
    //delete
        //shift
        //reduce size
    
    
    if(size==0)
    {
        cout<<"\nUnderflow";
        return;
    }
    else if(size==1)
    {
        size--;
        cout<<"\nArray is Empty";
    }
    else if(idx>=size)
    {
        cout<<"\nInvalid Operation";
        return;
    }
    else
    {
        for(int i=idx;i<size-1;i++)
        {
            arr[i]=arr[i+1];
            size--;
        }

        if(size==idx+1)
        {
           arr[idx]=arr[idx+1];
            size--; 
        }
    }
}


void printArray(int arr[],int &size)
{
    //cout<<endl<<"Printing Array\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    system("cls");
    int arr[MAXSIZE]= {5,20,2};
    char choice;
    int size=3;

    cout<<endl;
    printArray(arr,size);
    do
    {
        int idx;
        cin>>idx;
        deleteArray(arr,idx,size);
        cout<<"\nArray after deletion:";
        printArray(arr,size);
        cout<<"\nDo you want to continue deletion?(y/n)";
        cin>>choice;
        
    }while (choice=='y');
}