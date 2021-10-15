#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    bool foundAns=false;
    int minimum=INT32_MAX;  //minimum no. used to find minimum +ve no. in array then modifed to get minimum positive not in the array
    int ans;
    int n;
    cin>>n;
    int arr[n];
   //Input Array 
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //code to solve problem
    for(int i=0;i<n;i++)
    {   
        if(arr[i]<minimum && arr[i]>0)
        {
            minimum=arr[i];
        }
        else{minimum=1;}
    }


    while(foundAns==false)
    {   
        //checking everyime if the number exist in array or not , if it does'nt than we found the ans
        for(int i=0;i<n;i++)
        {   
            //looping through every integer in array

            if(minimum==arr[i] && arr[i]>0) //if we found an element equal we increse it by one so to check if the incremented no. exist or not in array
            {
               minimum++;
                 
            }   //if increment no. does'nt exist we got the ans
            else{
                 foundAns=true;
                 ans=minimum;  
            }
            
        }
    }
    
    //Just aa precaution should never work;
    if(foundAns==true)
    {cout<<"\nAns is:"<<ans;}
    else{cout<<"Nhi pata";}

}