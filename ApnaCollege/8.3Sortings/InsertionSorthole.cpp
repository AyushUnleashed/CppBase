#include<iostream>
#include<conio.h>

//always two lists one unsorted another sorted

//mycodeschool -- Best
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter no. of Elements:";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:";
    
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    //loop start from 1 because 1 element is always sorted therefore hole has to be always>0

    //left side=>unsorted
    //Right side=>sorted

    //we make hole

    //Sorting of Array;
    for(int i=1;i<n;i++)
    {   
        int value=array[i]; //before shifting
        int hole=i; //location of hole
        //hole>0 because hole 
        while(hole>0 && array[hole-1]>value)    //traversing sorted array to find smaller elements
        {
            array[hole]=array[hole-1];  //moving elements to right filling the hole
            hole--; //shifting hole to left
        }
        array[hole]=value;  //when we are correct posn we fill hole.
    }

    cout<<"\nSorted Array is:";

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}