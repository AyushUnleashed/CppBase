#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];  
    }
    cin>>k;
    if(k>n)
    {
        cout<<"error";
        return 0;
    }

     int temp;
   
    for(int i=1;i<n;i++)  // 6 element ke liye 5 me kaam ho jata h isliye n-1
    {   //For putting maximum no. to end again and again till array ends
        for(int j=0;j<n-i;j++)
        {   //Compare karo ,swap karo, bada no. aakhir me aajaege end me
            //Toh agli bar loop kam chalana hai ek bar that's why n-i; kyunki last wali value pakka maximum h
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }

    }

    cout<<"\nKth Smallest element is:"<<arr[k-1];

  

}