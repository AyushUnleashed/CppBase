#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{   system("cls");
    char num[100];
    int sle;
    bool paal=1;
    cout<<"Enter num:";
    cin>>num;
    sle=strlen(num);
    /*cout<<"Length is"<<slength<<endl<<"Last no is";
    
    cout<<num[slength-1];*/
    for(int i=0;i<=sle/2;i++)
    {
        if(num[i]!=num[sle-i-1])
        {
            paal=0;
        }
    }

    if(paal==1)
    {cout<<"It is a Palindrome";}
    else if(paal==0)
    {
        cout<<"Not a Palindrome";
    }
    

    return 0;

}