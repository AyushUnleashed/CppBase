#include<iostream>
#include<conio.h>
using namespace std;


bool isPalindrome(int start,int end,string str)
{
    //base condition
    if(start >= end) //if they cross 
    {
       // cout<<"\n Palindrome";
        return 1;
    }

    if(str[start]!=str[end]) //if thet are not equal
    {
        //cout<<"\n Not a Palindrome";
        return 0;
    }
    else //if ends are equal go inside
    { 
        return isPalindrome(start+1,end-1,str);
    }
}


int main()
{
    system("cls");
    cout<<"\n====Palindrome String(Recursive)====\n\n";
    string str;
    cin>>str;
    int n =str.length();
    
    bool ans = isPalindrome(0,n-1,str);
    if(ans==0)
    {
        cout<<"\nNot a Palindrome";
    }
    else
    {
        cout<<"\nPalindrome";
    }
    return 0;
}