//just like sorting of arrray
//final ans: aabcnsAFKY type
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   system("cls");
    string str;
    getline(cin,str);
    int n=str.length();
    int lowerCaseCount=0;

    for(int i=0;i<n;i++)
    {
        if(islower(str[i]))
        {
            lowerCaseCount++;
        }
    }

    //Binary Sort
    int temp;
    for(int i=1;i<n;i++)  // 6 element ke liye 5 me kaam ho jata h isliye n-1
    {   //For putting maximum no. to end again and again till str ends
        for(int j=0;j<n-i;j++)
        {   //Compare karo ,swap karo, bada no. aakhir me aajaege end me
            //Toh agli bar loop kam chalana hai ek bar that's why n-i; kyunki last wali value pakka maximum h
            if(str[j]>str[j+1])
            {
                temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
                
            }
        }

    }



    cout<<"\nSorted str is:"<<str;
    string lowerStr = str.substr(n-lowerCaseCount,lowerCaseCount);
    
    return 0;
}