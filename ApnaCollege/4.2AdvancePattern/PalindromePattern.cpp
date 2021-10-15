//Pattern 12
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   system("cls");  
     int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   int p=i;
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        
            while(p>1)
            {
                cout<<p<<" ";
                p--;
            }
            while(p<=i)
            {
                cout<<p<<" ";
                p++;
            }
        cout<<endl;
        
    }
    return 0;
}