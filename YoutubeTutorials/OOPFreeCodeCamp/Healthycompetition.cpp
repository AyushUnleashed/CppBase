#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int arr1[3];
    int arr2[3];int n=3;
    int sc1=0,sc2=0;
    cout<<"\nEnter skills for A:";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    cout<<"\nEnter skills for B:";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[i])
        {
            sc1++;
        }
        else if(arr2[i]>arr1[i])
        {
            sc2++;
        }
    }

    cout<<"\nScore of \n A:"<<sc1<<"\nB:"<<sc2;
    return 0;

}