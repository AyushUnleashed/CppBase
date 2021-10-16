#include<iostream>
#include<conio.h>
using namespace std;
//With Recursion

void replaceALLpi(string s)
{
    if(s.length()==0)
    return;

    if(s[0]=='p'&& s[1]=='i')
    {
        cout<<"3.14";
        replaceALLpi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replaceALLpi(s.substr(1));
    }

}


int main()
{
    system("cls");
    cout<<"Replace pi with 3.14 in a String\n";
    string s1;
    cin>>s1;
    cout<<endl;
    replaceALLpi(s1);
    return 0;
}