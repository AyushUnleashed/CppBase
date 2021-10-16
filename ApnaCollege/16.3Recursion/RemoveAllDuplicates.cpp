#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string oStr,str;
    cin>>oStr;
    str=oStr;
    bool found=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j] && i!=j)
            {
               str.erase(j,1);
               j--;
            }
        }
    }
    cout<<endl<<endl<<str;

    return 0;
}