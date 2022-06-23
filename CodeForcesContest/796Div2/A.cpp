#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        bool found=false;
        int y=1;

        for(y=1;found==false;y++)
        {
            int andXY = x&y;
            int xorXY = x^y;

            if(andXY>0 && xorXY>0)
            {
                found=true;
                break;
            }
        }

        if(found==true)
        {
            cout<<y<<endl;
        }
    }

    return 0;
}