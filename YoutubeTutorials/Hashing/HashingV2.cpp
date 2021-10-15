#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 100

bool hashTable[2][MAX+1];   //all values are set to 0(false) automatically

//Hashing -> index i , 0 +ve
// index i , 1 -ve values
//O(n)
//Program to search given element by hashing
// Values in array (-Max to +Max) Rule

//to give map of present element

void  hashInput(int arr[],int n)
{       
    for(int i=0;i<n;i++)
    {   
        if(arr[i]>=0)
        { 
            hashTable[0][arr[i]]=true;    // setting +ve values in first row 0
        }
        else
        {   arr[i]=abs(arr[i]);
            hashTable[1][arr[i]]=true;    // setting -ve values in second row 1
        }
    }
}

bool searchHash(int key)
{   bool found=false;

    if(key>=0)
    {
        if(hashTable[0][key]==true)
        {
            found=true;
        }
    }
    else
    {   key=abs(key);
       if(hashTable[1][key]==true)
        {
            found=true;
        } 
    }

    return found;
}

int  main()
{
    system("cls");
    int arr[] = {5,-23,47,44,20};
    int n =sizeof(arr)/arr[0] +1;
    hashInput(arr,n);
    int key;
    cout<<"Enter key to be searched:";
    cin>>key ;

    if(searchHash(key))
    {
        cout<<"\nfound it";
    }
    else
    {
        cout<<"\nNot found";
    }

    return 0;
}