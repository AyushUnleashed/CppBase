//https://practice.geeksforgeeks.org/problems/total-count2415/1/?category[]=Arrays&category[]=Arrays&page=2&query=category[]Arrayspage2category[]Arrays
#include<iostream>
#include<conio.h>
using namespace std;

int totalCount(int[], int, int);
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
    int k;
    cin>>k;
    int tCount = totalCount(arr,n,k);
    cout<<endl<<tCount;
    return 0;
}

int totalCount(int arr[], int n, int k) 
{   int ctSum=0;
    for(int i=0;i<n;i++)
    {
        int ct;
        ct = arr[i]/k;
        if(arr[i] % k != 0)
        {
            ct++;
        }
        else{
            //do nothing
        }
        ctSum+=ct;
    }    
    return ctSum;
}