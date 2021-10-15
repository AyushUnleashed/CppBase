#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void SumBinary(int,int);

//ayushcodes

int main()
{    
    system("cls");
    int number1,number2;
    cout<<"\nEnter number1:";
    cin>>number1;
    cout<<"\nEnter number2:";
    cin>>number2;
    SumBinary(number1,number2);
}

void SumBinary(int number1,int number2)
{   
    //Code to calculate length of number 1 and number2
    //Method:converting int number1 to string , then finding length of string  using .size();
    int length1=to_string(number1).size();
    int length2=to_string(number2).size();
    
    int a=0,b=0; // a and b used to hold digits at one's ten's hunder'th places
    int sum[50];    //sum is used to store sum of the two binary numbers.
    int ans=0,carry=0,i=0;  // ans is ued to store individual digit sums, i for loop iterations.
    int length=max(length1,length2); // to get ki  3 digit no. h ya 4 digit no.

/*loop badi length wale number + 1 times chalega ,
kyunki agar carry hoga toh 1 place or chahiye hogi eg:100(3 digit) +900(3 digit)=1000(4 digit) or eg:100(3 digit) +200(3 digit)=0300(4 digit)*/

    while(i<=length)        

    {   
        a=number1%10;
        number1=number1/10;

        b=number2%10;
        number2=number2/10;

        if(a==1 && b==1)
        {      
            if(carry==1)
            {
                ans=1;
                carry=1;
            }
            else if(carry==0)
            {  
                ans=0;
                carry=1;
            }
            
        }
        else if(a==0 && b==0)
        {   
            if(carry==1)
            {
                ans=1;
                carry=0;
            
            }
            else if(carry==0)
            {
                ans=0;
                carry=0;

            }
        }
        else if((a==1 && b==0) ||(a==0 && b==1))
        {   
            if(carry==1)
            {
                ans=0;
                carry=1;
            }
            else if(carry==0)
            {
                ans=1;
                carry=0;
        
            }
        }
        sum[i]=ans; //sum[0] to sum[i] will store sum in reverse order 

        i++;
    }

    // reversing to print the correct ans
    cout<<"\nSumoftwobinary is:";
    for(i=length;i>=0;i--)
    {
        cout<<sum[i];
    }
}