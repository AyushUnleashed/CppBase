#include<iostream>
#include<conio.h>
using namespace std;


bool isPalindrome(int start,int end,string str)
{
    //cout<<"\nstart:"<<start<<" end:"<<end;
    	
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
    {   start++;end--;
        return isPalindrome(start,end,str);
    }
}


int main()
{
    system("cls");
    string str;
    cin>>str;
    int n =str.length();
    cout<<endl<<"n:"<<n;
    bool ans = isPalindrome(0,n-1,str);
    if(ans==0)
    {
        cout<<"\n Not a Palindrome";
    }
    else
    {
        cout<<"\n Palindrome";
    }
    return 0;
}