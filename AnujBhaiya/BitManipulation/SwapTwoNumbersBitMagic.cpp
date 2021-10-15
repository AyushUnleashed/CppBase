#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a=5;
    int b=6;
    //int o = a^b;
    //Swapping mehod 1

    // a=a+b;
    // b=a-b;
    // a=a-b;

    //method 2
    // a = a^o;
    // b = b^o;
    a = a  ^ b;  // a ke andar  o aagya
    b = a ^ b;  // actually o ^ b hua , orignal a ki value b me gyi
    a = a ^ b;  // actually o ^ a  hua, toh orignal b ki value a me gyi
 

    cout<<"\na:"<<a;
    cout<<"\nb:"<<b;
    return 0;   
}