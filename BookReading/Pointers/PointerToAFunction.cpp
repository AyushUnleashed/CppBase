#include<iostream>
#include<conio.h>
using namespace std;
//Function Prototyping for mess and *ptr;
    int addn(int ,int );
    int (*ptr) (int ,int ); //() for precndence ;

int main()
{  
    system("cls");
    //Getting 2 Numbers
    int a,b;
    cin>>a>>b;

    ptr= addn;  //ptr pointing to addn Function

    int sum=(*ptr) (a,b); //calling (*ptr) function,which point to addn || and storing output in sum

    cout<<"\nSum is:"<<sum;
    return 0;
}

int addn(int c,int d)
{return(c+d);}


