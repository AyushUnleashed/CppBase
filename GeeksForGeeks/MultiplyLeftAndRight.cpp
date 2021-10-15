#include<iostream>
#include<conio.h>
using namespace std;

int multiply(int[], int);
int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];

    // int sumLeft=0;
    // int sumRight=0;
    

    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    //     if(i<=(n/2)-1)
    //     {
    //         sumLeft+=arr[i];
    //     }
    //     else
    //     {
    //         sumRight+=arr[i];
    //     }
    // }

    int mulSum = multiply(arr,n);

    // mulSum=sumLeft*sumRight;
    // cout<<"\nLeftSum:"<<sumLeft;
    // cout<<"\nRightSum:"<<sumRight;
    cout<<"\nmulSum:"<<mulSum;

    return 0;
}

int multiply(int arr[], int n)
{
    int sumLeft=0;
    int sumRight=0;
    int mulSum=1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i<=(n/2)-1)
        {
            sumLeft+=arr[i];
        }
        else
        {
            sumRight+=arr[i];
        }
    }
    mulSum=sumLeft*sumRight;
    
    return mulSum;
}