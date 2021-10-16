//Solution 1 // O (n) TimeComplexity solution and O(n) Space complexity
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
//Kadane's Algorithm solution for maximum sum of contiguous subarray //O(n)

//traverse array add elements to currSum 
// if currSum is -ve that means that subarray will reduce sum, so we don't use it by setting currSum=0
//if currSum >maximum we set it to maximum 

//for reference watch anuj bhaiya's video

int main()
{
    system("cls");
    //Varaible Initialisation
    int currSum=0,maxSum=INT32_MIN;
    
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[2*sizeOfArray];
    int ptr=0;  //count the no. of times elements hass been added to currsum, since it became zero quite often
    
    //input array
    for(int i=0;i<sizeOfArray;i++)
    {
        cin>>arr[i];
        arr[i+sizeOfArray]=arr[i];  //setting elements after index n-1

    }

    //code to solve 


        for(int i=0; i < (2*sizeOfArray);i++)   //traversing array
        {   
            ptr++;

            if(ptr>sizeOfArray) //if the loop has ever crossed
            {
                break;
            }

            //kadanes algorithm
            currSum+=arr[i];
            
            if(currSum>maxSum)
            {maxSum=currSum;}
            //because we are setting currSum=0 after assigning maxSum that's why maxSum will not get zero in case of all negative values 
           
            if(currSum<=0)
            {   currSum=0;  
                ptr=0;  //cursum<=0 for this because if currsum is zero then we can move forward , ptr=0 here because in nect interation it will become 1 as soon as loop starts
            }
            

        }

    cout<<"\nMaximum sum is:"<<maxSum;
    return 0;

}