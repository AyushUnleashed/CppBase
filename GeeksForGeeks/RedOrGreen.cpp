#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int rCount=0,gCount=0,ans=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='R')
        {
            rCount++;
        }else 
        if(str[i]=='G')
        {
            gCount++;
        }
    }
    if(rCount==gCount)
    {
        ans=str.length()-rCount;        
    }
    else
    if(rCount>gCount)
    {
        ans=str.length()-rCount;        
    }
    else
    {
        ans = str.length() -gCount;
    }
    
    cout<<"\nMinimum no. of charcters to convert to one color:"<<ans;

    return 0;
}