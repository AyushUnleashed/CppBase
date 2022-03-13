#include<iostream>
using namespace std;


void helper(int input[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    
    int mid =(start+end)/2;
    //sort 2 sections of array
    helper(input,start,mid);
    helper(input,mid+1,end);

    //sorting 2 sorted arrays into a new one
    int arrSize=end-start;
    int arr[arrSize];

    int i=start;int j=mid+1;int k=0;
    for(; k<arrSize && i<=mid && j<=end;k++)
    {
        if(input[i]<input[j])
        {
            arr[k]=input[i];
            i++;
        }
        else
        {
            arr[k]=input[j];
            j++;
        }
        k++;
    }

    //copy rest of it
 
        while(j<=end)
        {
            arr[k]=input[j];
            j++;
            k++;
        }

        while(i<=mid)
        {
            arr[k]=input[i];
            i++;
            k++;
        }


    //copy whole thing into orignal
    for(int i=start,k=0;i<=end;i++,k++)
    {
        input[i]=arr[k];
    }
}

void mergeSort(int input[], int size){
    helper(input,0,size-1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}