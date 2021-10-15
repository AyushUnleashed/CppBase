#include<iostream>
#include<conio.h>
using namespace std;

int mxtill(int[],int);
//mx of an array
int main()
{
    system("cls");
    int n,i,mx;
    cin>>n;
    int ar[n];
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"\nmx till i :   ";
    for(i=0;i<n;i++)
    {
        mx=mxtill(ar,i);
        cout<<mx<<"\t";
    }
    
    return 0;
}

int mxtill(int ar[],int n)
{   
    int mx=INT32_MIN;
    for(int j=0;j<=n;j++)
    {
        if(ar[j]>mx)
        {
            mx=ar[j];
        }
    }
    return mx;
}