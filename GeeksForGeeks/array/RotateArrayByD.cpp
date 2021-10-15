#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    int d;
    cin>>n;
    cin>>d; //rotate by d clockwise
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i] =arr[i];
    }
    int rem ;

    for(int i = 0;i<n;i++)
    {   
        rem = ( i+d ) %n ;
        arr[i] = arr2[rem];
    }

    cout<<"\nAfter Rotating by:"<<d<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }   
    return 0;
}