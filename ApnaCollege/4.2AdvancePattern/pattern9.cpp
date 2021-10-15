//0-1 Pattern 

#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter no. of rows:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            /*if( (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0) )
            {cout<<"1"<<" ";}
            else
            {
                cout<<"0"<<" ";
            }*/

            //or

            if((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
            
            
        }
        cout<<endl;
    } 
}