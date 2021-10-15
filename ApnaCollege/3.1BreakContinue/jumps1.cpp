//Basic use of break and continue
#include<iostream>
using namespace std;

int main()
{   int pocketmoney=3000;
    for(int date=1;date<=30;date++)
    {   if(date%2==0)
    //continue -->shift to next iteration  
        {continue;}  
        if(pocketmoney<=0){
            break;//break-->end the loop
        }
        cout<<"You can go out today"<<date<<endl;
        pocketmoney=pocketmoney-300;

            
    }
}