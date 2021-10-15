#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    cout<<"Replace pi with 3.14 in a String\n";
    string s1;
    cin>>s1;
    int i;
    for(int i=0;i<s1.length()-1;i++)
    {
        if(s1.substr(i,2)=="pi")
        {
            //cout<<"IT Works";
            s1.erase(i,2);
            s1.insert(i,"3.14");
        }
    }
    cout<<endl<<s1;
    return 0;
}