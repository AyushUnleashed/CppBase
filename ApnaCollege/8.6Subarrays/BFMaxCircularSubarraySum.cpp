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

    int arr[sizeOfArray];
    int startPt=0,endPt=(sizeOfArray-1)+startPt;
    
    //input array
    for(int i=0;i<sizeOfArray;i++)
    {
        cin>>arr[i];
    }

    
    // cout<<"\ncurrSum:";

    //code to solve 
    for(startPt=0;startPt<sizeOfArray; startPt++)  //loop to shift start point s
    {   
        currSum=0;

        //troubleshooting
        // cout<<"\nstartPt:"<<startPt;
        // cout<<" || endPt:"<<endPt<<endl;
        // cout<<"index || currSum || MaxSum"<<endl;

        for(int i=startPt; i <= startPt+(sizeOfArray-1) ;i++)   //traversing array
        {   
            int index= (i % sizeOfArray);   //to wrap around array

            //kadanes algorithm
            currSum+=arr[index];
            
            if(currSum>maxSum)
            {maxSum=currSum;}
            //because we are setting currSum=0 after assigning maxSum that's why maxSum will not get zero in case of all negative values 
           
            // cout<<index<<" "<<currSum<<" "<<maxSum<<endl;

            if(currSum<0)
            {   currSum=0;}

        }


        // endPt++;        //just to see
        // endPt=(endPt%sizeOfArray);
    }

    cout<<"\nMaximum sum is:"<<maxSum;
    return 0;

}