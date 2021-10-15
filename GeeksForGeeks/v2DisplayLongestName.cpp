#include<iostream>
#include<conio.h>
using namespace std;

string longest(string names[], int n)
{   //cout<<"\nFunction works";
    int max = -1;
    string ans;
    for(int i=0;i<n;i++)
    {   cout<<"\nnames[i]:"<<names[i]<<" length:"<<names[i].length();
        int len = names[i].size();
        if(len>max)
        {   
            max = names[i].length();
            ans = names[i];
            //cout<<"\n Curr ans:"<<ans;
        }
    }
    //cout<<"\n Function ans:"<<ans;
    return ans;
}

int main()
{
    system("cls");
    string names[] = {"Geeks","For","GeeksForGeeks","Itna Promotion"};
    string longestString = longest(names,4);
    cout<<"\n\nLongest String is:"<<longestString;
    return 0;
}