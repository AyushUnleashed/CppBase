#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    //sytem("cls");
    string s;
    cin>>s;
    int p = s[0];
    string st = to_string(p);
    string s2= st+s.substr(1);
    cout<<endl<<s2;
    return 0;
}