#include<bits/stdc++.h>

using namespace std;

//ordinary => all digit same , if anyone diff isOrdinary=false;
int main()
{
    system("cls");

    bool isOrdinary=true;
    

    // int t;
    // cin>>t;

    long num;
    cin>>num;
    int totalOrdinaryNumbers=num;


    for(long i=1;i<=num;i++)
    {
        string str= to_string(i);
        int len=str.length();
        if(len==1)
        {
            isOrdinary=true;
            
        }
        else
        {  
            for(int j=0;j<len-1;j++)
            {   
                if(str[j] != str[j+1])
                {
                    isOrdinary=false;
                    
                    break;
                }
            }

            
        }
        cout<<endl;

        if(isOrdinary==true)
         {   cout<<str<<" ";
                totalOrdinaryNumbers+=1;
         }

    }

    cout<<endl<<endl<<totalOrdinaryNumbers;
    return 0;
}