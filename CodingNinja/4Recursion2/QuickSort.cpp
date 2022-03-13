#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int input[],int start,int end)
{   
    //to put x at its correct location
    //we count all element less than or equal to x
    int x=input[start];

    int smallCount=0;
    for(int i=start+1;i<=end;i++)
    {
        if(input[i]<=x)
        {
            smallCount++;
        }
    }

    //putting x at index => start+smallCount by swapping
    int pIndex =start+smallCount; 
    swap(input[start],input[pIndex]);

    //swap done , now putting all element less than equal to x on left side
    //we use two point i and j , if both are at wrong postion we swap them
    //otherwise we move that pointer 
    // i starts from start goes till x , j starts from end goes till x

    int i=start,j=end;
    while(i<pIndex && j>pIndex)
    {
        if(input[i]<=input[pIndex])
        {
            //at correct postion we move on
            i++;
        }
        else if(input[j]>input[pIndex])
        {
            //at correct postion we move on
            j--;
        }
        else
        {//both at wrong position we swap
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
    return pIndex;
}

void quickSort(int input[], int start, int end)
{
    if(start>=end)
    {
        //if size is 0 or 1 do nothing
        return;
    }

    int pIndex= partition(input,start,end);
    //partition putted x at its corrected location
    //shifted all elements smaller than equal to x to left side
    //shifted all elements bigger than x to right side

    quickSort(input,start,pIndex-1);
    quickSort(input,pIndex+1,end);
}

void quickSort(int input[], int size)
{
    quickSort(input, 0, size - 1);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}

