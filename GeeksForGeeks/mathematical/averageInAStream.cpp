#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    float arr[n];
    float ansArray[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ansArray[i]=0;
    }

    for(int i=0;i<n;i++)
    {   
        sum=sum+arr[i];
        ansArray[i]=(sum/(i+1));
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<ansArray[i]<<" ";
    }
    
}