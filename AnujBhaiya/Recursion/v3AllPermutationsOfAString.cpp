#include<iostream>
using namespace std;

void permutationString(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++)
    {
        string temp=s;
        char tempChar = s[i];
        permutationString(temp.erase(i,1),ans+tempChar);
        

    }
}

int main()
{
    //sytem("cls");
    string s;
    cin>>s;
    cout<<endl;
    permutationString(s,"");
    return 0;
}