#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //system("cls");
    int n;
    cin>>n;
    int arr[n],sum=0,max=INT32_MIN,start=-1,end=-1;
    //Enter Array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
   for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {   sum=0;

            for(int j=k;j<n-i;j++)
            {   
                sum=sum+arr[j];
            }

            if(sum>max)
            {   max=sum;
                start=k;
                end=n-i-1;  //since j is less than n-i so index is n-i-1
            }
            //cout<<sum<<" ";
            
            
        }
    //  cout<<endl;
    }
    
cout<<"\nMax sum is:"<<max<<endl;
    for(int i=start;i<=end;i++)
    {
        
        cout<<arr[i]<<" ";
    }

}