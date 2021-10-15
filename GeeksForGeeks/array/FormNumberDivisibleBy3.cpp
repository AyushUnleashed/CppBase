// Form a number divisible by 3 using array digits

// https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

// if possible return 1;
#include<iostream>
#include<conio.h>
using namespace std;

int isPossible(int N, int arr[])
{
    int elementSum = 0;int totalSum=0;
    int element;
    int isPos = -1;
    int rem=0;

    for(int i=0;i<N;i++)
    {   
        elementSum=0;
        element = arr[i];

        while(element>0)
        {
            rem = element % 10;
            elementSum = elementSum +rem;
            element = element /10;
        }

        // cout<<"\nSum of digits of num is:"<<elementSum;
        totalSum +=elementSum;

    }

    if(totalSum%3 == 0)
    {
        isPos = 1;
    }else
    {
        isPos =0;
    }

    // cout<<"\ntotalSum:"<<totalSum;
    return isPos;
}

//code to find sum of digits
int main()
{
    system("cls");
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout<<isPossible(N,arr);
    // cout<<"\nis array divisible by 3: "<<isPos;

    return 0;
}
