#include<iostream>
#include<conio.h>
using namespace std;

//print after removing duplicates using recursion
void removeDub(char k,string str,int &c)
{   
    bool found=false;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==k)
        {
            found=true;
            str.erase(i,1);
            i--;
        }        
    }
    cout<<k;
    if(found==false)
    {
        if(c==0)
        {
            cout<<str;
        }
        return;
    }
    removeDub(str[0],str,c);
}

int main()
{
    system("cls");
    string oStr,str;
    int count=0;
    cin>>oStr;
    str=oStr;
    removeDub(str[0],str.substr(1),count);
    return 0;
}


