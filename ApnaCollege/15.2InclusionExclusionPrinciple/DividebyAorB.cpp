#include<iostream>
#include<conio.h>
using namespace std;

// numbers between 1 and n divisible by a or b
//count of numbers
int main()
{
    system("cls");
    int n,a,b;
    cin>>n;
    cin>>a>>b;
    int countA=0,countB=0,countAandB=0,countAorB=0;
    //divide by a | divide by b |divide by both
    countA=n/a;
    countB=n/b;
    countAandB= n/(a*b);
    countAorB=countA+countB-countAandB;

    std::cout<<endl<<"Total numbers divisible by: "<<a<<" or "<< b<<" is:"<<countAorB;
    return 0;
}