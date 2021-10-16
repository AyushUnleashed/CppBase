#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");int n;
    cin>>n;
    int arr[n];
    bool x;
    int ansindex=-1;
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }

int temp=arr[0];
    for(int i=0;i<n;i++)
    {   x=true;
        for(int j=i+1;j<n;j++)
        {
        
            if(arr[i]==arr[j])
            {
                x=false;
                break;
            }
            else
            {   
                if(x==true)
                {ansindex=j;}
            }
        }
    }

    cout<<"index is:"<<ansindex;
    return 0;
}