#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,n2,n3;
    cin>>n;
    n2=n*2;
    n3=n*3;

    string s1 = to_string(n);
    string s2 = to_string(n2);
    string s3 = to_string(n3);
    string total =s1+s2+s3;
    //3 digit or more
    // x1,x2 ,x3, concate together;
    bool isNumPresent[10];
    // if present okay otherwise not fascinating
    bool isFascinating = true;

    for(int i=0;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(total[i]==j)
            {

            }
        }
    }

    

}