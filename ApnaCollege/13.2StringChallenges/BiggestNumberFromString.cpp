#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    system("cls");
    string numericString;
    cin>>numericString;
    int n=numericString.length();
    int temp;
    //Bubble Sort

        for(int i=1;i<n;i++)  // 6 element ke liye 5 me kaam ho jata h isliye n-1
    {   //For putting maximum no. to end again and again till numericString ends
        for(int j=0;j<n-i;j++)
        {   //Compare karo ,swap karo, bada no. aakhir me aajaege end me
            //Toh agli bar loop kam chalana hai ek bar that's why n-i; kyunki last wali value pakka maximum h
            if(numericString[j]<numericString[j+1])
            {
                temp=numericString[j+1];
                numericString[j+1]=numericString[j];
                numericString[j]=temp;
                
            }
        }

    }

    cout<<"\nBiggest no. is:"<<numericString;

    return 0;
}