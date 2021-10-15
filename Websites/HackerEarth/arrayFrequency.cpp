#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    
    int elementLimit=100;
    int elementSize=(2*elementLimit)+1;
    int frequency[elementSize];

    int highF=INT32_MIN;
    int output;

    //settings
    for(int i=0;i<=elementSize;i++)
    {
        frequency[i]=0;
    }
    
    //array input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        frequency[elementLimit+arr[i]]+=1;
    }

    //checking
    for(int i=0;i<2*elementLimit+1;i++)
    {
        if(highF<frequency[i])
        {
            highF=frequency[i];
            output=i-elementLimit;
        }
    }

    //cout<<"\nElement with max frequency is:";
    cout<<output;
    return 0;

}