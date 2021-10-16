#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int fact=1;
    vector<int> factors;

    if(n==0)
    {
        fact=0;
    }
    cout<<endl;
    while(n!=1)
    {
        for(int i=2;i<=n;i++)
        {
            if((n%i)==0)
            {
                fact=i;
               // cout<<fact<<" ";
                factors.push_back(i);
                break;
            }
        }
        n=n/fact;
    }

    for(int i=0;i<factors.size();i++)
    {
        cout<<factors[i]<<" ";
    }
    return 0;
}
