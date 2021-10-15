#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    bool isPerfect = true;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!= arr[n-i-1])
        {
            isPerfect=false;
        }
    }

    if(isPerfect == true)
    {
        cout<<"PERFECT";
    }
    else
    {
        cout<<"NOT PERFECT";
    }
}