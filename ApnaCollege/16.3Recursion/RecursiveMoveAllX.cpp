#include<iostream>
#include<conio.h>
using namespace std;

void moveAllXToTheEnd(string str,int idx,int count, string newString)
{   
    if(idx==str.length())
    {
        for(int i=0;i<count;i++)
        {
            newString+='x';
        }
        cout<<newString;
        return;
    }
       char currChar = str[idx];
        if(currChar == 'x')
        {
            count++;
            moveAllXToTheEnd(str,idx+1,count,newString);
        } 
        else
        {
            newString+=currChar;
             moveAllXToTheEnd(str,idx+1,count,newString);
        }
    }
int main()
{
    system("cls");
    string s1;
    cin>>s1;
    moveAllXToTheEnd(s1,0,0,"");
    //cout<<s1;
}

