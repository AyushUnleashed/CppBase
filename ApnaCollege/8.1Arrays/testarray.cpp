#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int ar[n]={10,20,30,40,50};
    cout<<"\nEnter Array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    cout<<"\nArray elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }

    return 0;
}