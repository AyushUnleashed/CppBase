//Wrong Ans 
//Question from apna college video

#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

void swap(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
 

void permutationArray(int arr[],int n,int cIdx)
{
    if(cIdx == n-1)
    {
        printArray(arr,n);
        return;
    }

    for(int i=0;i<n;i++)
    {
        swap(&arr[i],&arr[cIdx]);
        permutationArray(arr,n,cIdx+1);
        swap(&arr[i],&arr[cIdx]);
    }
}

int main()
{
    //sytem("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    permutationArray(arr,n,0);
    return 0;
}