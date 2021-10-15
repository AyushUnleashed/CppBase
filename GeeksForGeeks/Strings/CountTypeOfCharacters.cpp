#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string s;
    cin>>s;
    int n=s.length();
    int uCount=0;
    int lCount=0;
    int nCount=0;
    int sCount=0;
    cout<<n;
    for(int i=0;i<n;i++)
    {
        if(s[i]<='z' && s[i]>='a')
        {
            lCount++;
            //continue;
        }else if(s[i]<='Z' && s[i]>='A')
        {
            uCount++;
            //continue;
        }else   if(s[i]<='9' && s[i]>='0')
        {
            nCount++;
            //continue;
        }else
        {
            sCount++;
            //continue;
        }
    }

    cout<<"\n=======================\n";
    cout<<"uCount:"<<uCount;cout<<endl;
    cout<<"lCount:"<<lCount;cout<<endl; 
    cout<<"nCount:"<<nCount;cout<<endl;
    cout<<"sCount:"<<sCount;cout<<endl;
}