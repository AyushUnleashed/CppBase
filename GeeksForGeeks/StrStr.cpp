#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   system("cls");
    string str;
    string x;
    int ans;    //return -1 if false else give index of starting of x;
    cin>>str;
    cin>>x;
    int limit = str.length()-x.length();    //so that we never check garbage values
    if(limit<0) 
    ans=-1;

    for(int i=0;i<=limit;i++)
    {
        for(int j=0;j<x.length();j++)
        {
            if(str[i+j]==x[j])
            {
                ans = i;
            }
            else if(str[i+j]!=x[j])
            {
                
                ans = -1;
                //if first letter different don't check rest of it
                break;
            }

        } 

        if(ans!=-1)
        {
            break;
            //if we found the complete string dont check after wards
        }
        cout<<"\nFinal "<<i<<" th ans :"<<ans<<endl;
    }

    cout<<"\n\n\nx string is at location:"<<ans;

    return 0;
}