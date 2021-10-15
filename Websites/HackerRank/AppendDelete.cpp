#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    string sInput;
    string sOutput;



    int index=-1;
    int count=0;

    cin>>sInput;
    cin>>sOutput;

    int sz1 = sInput.length();
    int sz2 = sOutput.length();
    int len = (sz1>=sz2) ? sz1 : sz2 ;
    //len store bigger of them
    cout<<"\nLength is:"<<len;

    //code

    // checking same substring
    for(int i=0;i<len;i++)
    {
        if(sInput[i]!=sOutput[i])
        {   
            index=i;
            break;
        }
    }

    //erasing non common charcters fom Input string
    sInput.erase(index,sz1 - index);
    count += sz1-index;
    cout<<"\n\nErased unwanted characters";

    cout<<"\nCopied required characters";
    // substring of element to be copied
    string sToCopy = sOutput.substr(index,sz2 -index);

    //adding element from Output to input string

    sInput.insert(index,sToCopy);
    count+= sToCopy.length();

    cout<<"\n\nsOutput:"<<sOutput;
    cout<<"\nsInput :"<<sInput;
    cout<<"\nCount:"<<count;

    return 0;

}