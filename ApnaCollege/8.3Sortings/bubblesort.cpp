#include<iostream>
#include<conio.h>
using namespace std;
//Compare , Bade wale ko aage pheko
int main()
{
    system("cls");
    int n;
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:";
    
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int temp;

    
    for(int i=1;i<n;i++)  // 6 element ke liye 5 me kaam ho jata h isliye n-1
    {   //For putting maximum no. to end again and again till array ends
        for(int j=0;j<n-i;j++)
        {   //Compare karo ,swap karo, bada no. aakhir me aajaege end me
            //Toh agli bar loop kam chalana hai ek bar that's why n-i; kyunki last wali value pakka maximum h
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                
            }
        }

    }

     cout<<"\nSorted Array is:";

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}



// for(int j=0;j<=n;j++)
//         {
            
//         }