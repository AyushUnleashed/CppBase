#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int ans;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int no_of_odd = 0;
        int no_of_even = 0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                no_of_even+=1;
            }
            else
            {
                no_of_odd+=1;
            }
        }

        if(no_of_even == 0)
        {
            ans = 0;
        }
        else if(no_of_odd>=1 && no_of_even>0)
        {
            ans = no_of_even;
        }
        else if(no_of_odd==0)
        {
            //if all even

            int sum=0;
            int count=0;    
            for(int i=0;i<n;i++)
            {
                sum+=arr[i];
            }

            while(sum%2==0)
            {
                sum=sum/2;
                count++;
            }

            ans = count + (n-1);
        }
        cout<<ans<<endl;
    }

    return 0;
}