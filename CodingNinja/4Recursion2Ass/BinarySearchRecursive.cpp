#include<iostream>
using namespace std;

int binarySearch(int input[],int l,int h,int element)
{
    if(l==h)
    {
        if(input[l]==element)
        {
            return l;
        }
        else
        {
            return -1;
        }
    }

    int mid=(l+h)/2;
    if(input[mid]==element)
    {
        return mid;
    }
    else if(element<input[mid])
    { 
        return binarySearch(input,l,mid-1,element);
    }
    else
    {
        return binarySearch(input,mid+1,h,element);
    }
}

int binarySearch(int input[],int size,int element)
{
    binarySearch(input,0,size-1,element);
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}