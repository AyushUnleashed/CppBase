#include<iostream>
#include<math.h>
using namespace std;

void printAllSubsequences(string &str)
{
    int len = str.length();
    int total = pow(2,len);
    string subString=str;
    //loop from 0 to n-1
    for(int i=0;i<total;i++)
    {
        int num=i;
        // check number of 1 in the bit of current number
        //place those bits as answers
        
        //to check if 1 is present => num&1 !=0

      for(int j=0;j<len;j++)
      {
        int mask = i<<j;

        if((mask & num)!=0)
        {
            subString[j]=str[j];
        }
        else
        {
            subString[j]=' ';
        }
      }
      cout<<endl<<subString;
    }
}

int main()
{
    string str;
    cin>>str;
    printAllSubsequences(str);
    return 0;
}