#include<iostream>
#include<conio.h>
#include<algorithm>
//#include<string>
using namespace std;


int main()
{
    system("cls");
    string s1="fam";string s2="ily";
    string s5="abc";string s6="xyz"; string s4="nincompoop"; string s3="asfsafas  sdasfa sdfa";
    // s3.clear();
    // cout<<s3;

    // s1.append(s2);
    //s1=s1+s2;
  
    //cout<<s1+s2;
    //cout<<"my "+s1+s2+" is Awesome";

    //cout<<s6.compare(s5);   //s6 is bigger than s5

    // if(s3.empty())
    // {
    //     cout<<"\nstring is empty";
    // }
    //s4.erase(3,3);
    //int startIndex = s4.find("xyz");
    cout<<endl<<s4;
    //cout<<endl<<s4[startIndex];
    //s4.insert(2,"LOL");
    //cout<<endl<<s4;
    //cout<<endl<<s4.length();
    string s = s4.substr(6,4);
    //cout<<endl<<s;
    sort(s4.begin(),s4.end());
    cout<<endl<<s4;
    return 0;
}