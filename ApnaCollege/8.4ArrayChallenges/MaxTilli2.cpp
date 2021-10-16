#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

//Max of an array
int main()
{
    system("cls");
    int n,i,mx=INT32_MIN;
    cin>>n;
    int ar[n];
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"\nMax till i :   ";
    for(i=0;i<n;i++)
    {
        mx=max(ar[i],mx);
        cout<<mx<<"\t";
    }
    
    return 0;
}
