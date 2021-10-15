#include<iostream>
using namespace std;

void permutationString(string s,char prev)
{
    if(s.length()==0)
    {
        cout<<endl;
        return;
    }
    
    for(int i=0;i<s.length();i++)
    {   if(i!=0)
        {cout<<prev;}
        string temp = s;
        cout<<temp[i];
        permutationString(temp.erase(i,1),temp[i]);
    }
}

int main()
{
    //sytem("cls");
    string s;
    cin>>s;
    cout<<endl;
    permutationString(s,s[0]);
    return 0;
}