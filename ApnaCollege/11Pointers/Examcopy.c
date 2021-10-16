#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int sum=0; float mean;
    printf("Size:");
    scanf("%d",&n);
    int arr[n];
    int *arrPtr;
    
    arrPtr=arr;

    printf("\nEnter array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arrPtr);
        arrPtr++;

    }
    printf("\n");

    arrPtr=arr;
      for(int i=0;i<n;i++)
    {
        sum=sum+*arrPtr;
        arrPtr++;

    }
    mean=sum/n;

    printf("\nSum is:%d",sum);
    printf("\nMean is:%f",mean);
    return 0;
}