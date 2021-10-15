#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    int count=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( (arr[i] ^ arr[j])== 0)
            {
                count++;
            }
        }
    }

    cout<<endl<<count;
    return 0;
}