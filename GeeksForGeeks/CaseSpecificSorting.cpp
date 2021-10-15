#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int n=str.length();
    int lowerIdx[n];char lowerStr[n];
    int upperIdx[n];char upperStr[n];
    char ansStr[n];

    for(int i=0;i<n;i++)
    {
        lowerIdx[i]=-1;
        upperIdx[i]=-1;
    }

    int j=0;int finalLowerIdx,finalUpperIdx;

    for(int i=0;i<n;i++)
    {
        if(isupper(str[i]))
        {
            upperIdx[j] = i;
            upperStr[j] = str[i];
            finalUpperIdx=j;
            j++;

        }else
        if(islower(str[i]))
        {
            lowerIdx[j] = i;
            lowerStr[j] = str[i];
            finalLowerIdx=j;
            j++;
        }else
        {
            cout<<"error";
            return 0;
        }

    }

    //check
    cout<<"\nlowerCase String"; 
    for(int i=0;i<=finalLowerIdx;i++)
    {   
        cout<<str[lowerIdx[i]]<<" "<<lowerStr[i];
        cout<<endl;

    }

    //check
    cout<<"\nupperCase String"; 
    for(int i=0;i<=finalUpperIdx;i++)
    {   
        cout<<str[upperIdx[i]]<<" "<<upperStr[i];
        cout<<endl;

    }
    //sorting of lower str and upper str;




}