#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    char arr[100];
    cin>>arr;
    bool isPalindrome=true;
    int n=strlen(arr);  //size using '/0'
    cout<<"n:"<<n;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            isPalindrome=false;
            break;
        }
    }

    if(isPalindrome==true)
    {
        cout<<"\nit is a Palindrome";
    }else{
        cout<<"\nNot a Palindrome";
    }
}