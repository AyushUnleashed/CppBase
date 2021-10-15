#include<iostream>
#include<conio.h>
using namespace std;

    void swapElements(int arr[], int sizeof_array)
    {
        for(int i=0;i<sizeof_array-2;i++)
        {
            int temp =arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
            cout<<endl;
            for(int i=0;i<sizeof_array;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        
        
    }

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapElements(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}