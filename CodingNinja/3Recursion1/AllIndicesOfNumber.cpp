#include<iostream>
#include<conio.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) 
{
    //if array is empty , 0 elements are present
    if(size==0)
    {return 0; }
    
    int arrSize =allIndexes(input+1,size-1,x,output);

    // update each element of array by 1;
    //because relative to our array they have indices +1;
    for(int i=0;i<arrSize;i++)
    {output[i]+=1; }

    //if first element is required element
    if(x==input[0])
    {
        //add it to output array
        //first shift them right by 1 element
        //because output should be in increasing order

        for(int i=arrSize;i>0;i--)
        {
            output[i]=output[i-1];
        }
        //first element to 0 , becuase it lies at index 0
        output[0]=0;

        return 1+arrSize;
    }
    else
    {
        //if not , previous ans is final ans
        // no new element will be added to output array
        return arrSize;
    }
}


//from right to left , Backward Approach
int allIndexesBack(int input[], int size, int x, int output[]) 
{
    //if array is empty , 0 elements are present
    if(size==0)
    {
        return 0;
    }
    
    int arrSize =allIndexesBack(input,size-1,x,output);

    //if first element is required element
    if(x==input[size-1])
    {
        //add it to output array
        //first element to 0 , becuase it lies at index 0
        output[arrSize]=size-1;
        return 1+arrSize;
    }
    else
    {
        //if not , previous ans is final ans
        // no new element will be added to output array
        return arrSize;
    }
}

int main()
{
    int n=5;
    cin>>n;
    int input[n],output[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<allIndexesBack(input,n,x,output);
}