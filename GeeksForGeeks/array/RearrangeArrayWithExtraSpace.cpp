//  Rearrange an array with O(1) extra space

// https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    system("cls");
    int n;  int index =-1;
    cin>>n;
    int arr[n];
    int brr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i] = arr[i];
    }

    for(int i=0;i<n;i++)
    {   
        index = arr[i];
        arr[i] = brr[index];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}