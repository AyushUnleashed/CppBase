#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    system("cls");
    int n,j=0;
    cin>>n;
    int ar[n],diffar[n-1],length[n-1];

    cout<<"Enter array:";

    //Entering array of size n and setting length array elements to zero
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        length[i]=0;
    }

    //A.P. jese difference array banai (n-1 because 3 term have 2 difference)
    for(int i=0;i<n-1;i++)
    {
        diffar[i]=ar[i+1]-ar[i];
    }

    //code to increase length if consecutive difference are same otherwise change length variable by using j
    for(int i=0;i<n-1;i++)
    {   
       
        if(diffar[i]==diffar[i+1])
        {
          length[j]++;  
        }
        else
        {
            j++;
        }
    }

    
    int size=INT32_MIN; //Size is minimum so that every term is greater than this 
    //Code to get maximum of length array;
    for(int i=0;i<=j;i++)
    {   
        size=max(length[i],size);
    }

    size=size+2;    //actual size and difference counter has difference of 2

    cout<<endl<<"length of max subarray is:"<<size;

    return 0;
}