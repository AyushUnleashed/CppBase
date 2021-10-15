#include<iostream>
#include<conio.h>
using namespace std;

//always two lists one unsorted another sorted

//mycodeschool -- Best
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

    //loop start from 1 because 1 element is always sorted

    //left side=>unsorted
    //Right side=>sorted

    //Sorting of Array;
    for(int i=1;i<n;i++)
    {   
        int current=array[i];
        int j=i-1;  //current se pehle wala unsorted hai 

        //j>=0 kyunki uske pehle elements nhi h
        while(array[j]>current && j>=0) //unsorted elemnets ko aage shift krte jaao jab tak bade ho
        {
            array[j+1]=array[j];
            j--;    //unsorted arrray ke dusre element ko check karne 
        }
        array[j+1]=current; //j+1 kyunki j-- bad me likha h toh 0th ke time pe j-- ke bad j=-1 hoga but place toh j=0 pe krna hoga na
    }

    cout<<"\nSorted Array is:";

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}