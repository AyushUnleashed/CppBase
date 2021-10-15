#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


int main()
{
    system("cls");
    int n;
    cin>>n;
    char strg[n];
    //string str="Ayush";
    //cin>>str;
    //cout<<str;

    for(int i=0;i<n-1;i++)
    {
        cin>>strg[i];
    }
    //int len=str.length();
    //cout<<endl<<len;

    cout<<endl;

    for(int i=0;strg[i]!='\0';i++)
    {
        cout<<strg[i];
    }

    cout<<endl<<strg[n-1];

    return 0;

}