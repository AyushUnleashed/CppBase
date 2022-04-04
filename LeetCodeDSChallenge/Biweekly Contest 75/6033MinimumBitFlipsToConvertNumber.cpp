#include<iostream>
using namespace std;
    
int minBitFlips(int start, int goal) {

    int xorS=start^goal; //only different bits remain ( so we will have 1s)
    //count 1s
    int bitCount=0;
    while(xorS>0)
    {
        if((xorS&1)!=0)
        {
            bitCount++;
        }
        xorS=xorS>>1;
    }
    return bitCount;
}

int main()
{
    cout<<minBitFlips(10,7);
}