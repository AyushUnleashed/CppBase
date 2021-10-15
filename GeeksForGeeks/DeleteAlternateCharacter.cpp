#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    char str2[30];
    cin>>str;int j=0;
    for(int i=0;i<str.length();i++)
    {   
        if(i%2==0)
        {
            str2[j] = str[i];
            j++;
        }
    }

    cout<<endl<<endl;
    cout<<str2;

    return 0;
}
