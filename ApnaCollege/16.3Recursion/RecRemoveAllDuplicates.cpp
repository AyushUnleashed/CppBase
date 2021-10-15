#include<iostream>
#include<conio.h>
using namespace std;

string removeDub(string str)
{   
    if(str.length()==0)
    {
        return "";
    }

    char ch=str[0];
    string ans = removeDub(str.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    system("cls");
    string str;
    cin>>str;
    cout<<removeDub(str);
    return 0;
}


