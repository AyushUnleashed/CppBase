#include<iostream>
#include<conio.h>
using namespace std;

void moveAllXToTheEnd(string &s2)
{   
    string ans="";
    int count=0;

    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='x')
        {
            count++;
            s2.erase(i,1);
            i--;
        }
        else
        {
            ans.append(s2.substr(i,1));
        }
    }
    string xa="x";

    for(int i=1;i<=count;i++)
    {
        ans.append(s2.append(xa));
    }
}
int main()
{
    system("cls");
    string s1;
    cin>>s1;
    moveAllXToTheEnd(s1);
    cout<<s1;
}