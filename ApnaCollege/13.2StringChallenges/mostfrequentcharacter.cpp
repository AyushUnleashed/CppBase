#include<iostream>
#include<conio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    string str; int maxum=0; char alphaF;
    cin>>str;
    int charMap[26];
    //to upper;
    transform(str.begin(),str.end(),str.begin(),::toupper);

    for(int i=0;i<26;i++)
    {
        charMap[i] = 0; 
    }
    
    for(int i=0;i<str.length();i++)
    {   
        int index=str[i]-'A';
        charMap[index]++;
    }

    for(int i=0;i<26;i++)
    {   
        if(charMap[i]>maxum)
        {
            maxum = charMap[i];
            alphaF = i + 65;

        }
    }

    cout<<endl<<alphaF<<" has occured maximum times: "<<maxum;

    return 0;
}   