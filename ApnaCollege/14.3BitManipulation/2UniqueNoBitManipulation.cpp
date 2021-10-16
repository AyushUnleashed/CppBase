//Program to find 2 unique no.s from given array in which all other are present twice.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xorSum=0;
    int firstUnique=0;
    int secondUnique=0;
    for(int i=0;i<n;i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    cout<<endl<<"XorSum:"<<xorSum;
    //we will get xor of 2 unique no.s  eg: 7 and 5
    int storeMask=0;
    int mask=1;int i=0;

    while (storeMask==0)
    {   cout<<endl<<"mask:"<<mask;
        if((mask & xorSum)!=0)
        {
            storeMask=mask;
            cout<<endl<<"storeMask:"<<storeMask;
            break;
        } 
        mask=mask<<1;
    }

    for(int i=0;i<n;i++)
    {
        if((storeMask & arr[i]) != 0)
        {   
            cout<<"\narr["<<i<<"]:"<<arr[i];
            cout<<"\nuniqueLoop:"<<firstUnique;
            firstUnique = firstUnique ^ arr[i]; 
        }
    }

    secondUnique = xorSum ^ firstUnique;

    cout<<endl<<"\nFirst Unique:"<<firstUnique;
    cout<<endl<<"\nSecond Unique:"<<secondUnique;
        
    return 0;
}