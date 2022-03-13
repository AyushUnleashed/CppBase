#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//non recursive -> Bit manipulation
int main()
{
    //system("cls");  
    string s;
    cin>>s;
    string subSet = s;
    int len = s.length();
    int total = pow(2,len);
    for(int num=0;num<total;num++)
    {  
      for(int j=0;j<len;j++)
      {
        int mask = 1 << j; 

        if( (num & mask)!=0)
        {   //cout<<"y";
            subSet[j]=s[j];
            //cout<<subSet[j];
        }
        else{subSet[j] = ' ';}
      } 
     cout<<subSet<<endl;
    }
    return 0;
}

