#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {   
        string output = "-1";
        char str[50];
        bool arr[25];
        cin>>str;

        for(int i=0;i<=25;i++)
        {
            arr[i]=0;
        }

        for(int i=0;str[i]!='\0';i++)
        {
            //a = 97
            // str[i] - 97 = 0 for a
            int index = (str[i]-97);
            arr[index] = 1;
        }

        int i=0;
        for(;i<=25;i++)
        {
            if(arr[i]==0)
            {
                output = char(i+97);
                break;
            }
        }

        // if(i==26)
        // {
        //     output = -1;
        // }


        cout<<output<<endl;
    }


    return 0;

}