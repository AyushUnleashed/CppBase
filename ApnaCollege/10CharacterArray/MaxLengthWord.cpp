#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    char arr[100],maxWord[100];
    cin.getline(arr,99);

    int len=strlen(arr);
    int currLength=0,start=0,end=0,maxWordLength=-1;

    for(int i=0;i<=len;i++)
    {
        currLength++;   //all currLength has to be subtracted by one becuase  of increasing currLength before comparison

        if(arr[i]==' ' || arr[i]=='\0') // '\0' ofr lst character
        {   
            if((currLength-1) > maxWordLength)
            {   end = i-1;
                start = end-(currLength-1)+1;   //by using pen and paper
                maxWordLength=currLength-1;
            }
            currLength=0;   
        }

    }
    
    cout<<"\nWord of max Size is:\n";
    for(int j=start;j<=end;j++)
    {
        cout<<arr[j];
    }
    return 0;
}