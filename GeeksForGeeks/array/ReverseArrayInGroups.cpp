#include<iostream>
#include<conio.h>
using namespace std;

//Reverse array in groups 

int main()
{
    system("cls");
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i+=k)
    {   
        int starti= i;
        int end=min(i+k-1,n-1);

        for(int start=0; starti<=(end/2);starti++)
        {
            int temp=arr[i+ end-starti];
            arr[i+end-starti] =arr[i+starti];
            arr[i+starti]=temp;
        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

// void reverse(int starti,int end,int arr[])
// {   
//     //reverse from start index to end
//     for(int start=0; starti<=(end/2)-1;starti)
//     {
//         int temp=arr[end-starti-1];
//         arr[end-starti-1] =arr[starti];
//         arr[starti]=temp;
//     }
// }