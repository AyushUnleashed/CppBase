#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
void helper(char input[],char c1,char c2,int start)
{
    if(input[start]=='\0')
    {
        return ;
    }

    helper(input,c1,c2,start+1);
    
    if(input[start]==c1)
    {
        input[start]=c2;
    }

}

void replaceCharacter(char input[],char c1,char c2) {
    helper(input,c1,c2,0);
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

