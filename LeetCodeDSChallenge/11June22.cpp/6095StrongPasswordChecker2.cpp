/*
A password is said to be strong if it satisfies all the following criteria:

    It has at least 8 characters.
    It contains at least one lowercase letter.
    It contains at least one uppercase letter.
    It contains at least one digit.
    It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
    It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).

Given a string password, return true if it is a strong password. Otherwise, return false.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool strongPasswordCheckerII(string password) {

    bool isPasswordStrong = false;
    bool atLeast8CharactersPresent =false;
    bool atLeastOneLowerCharacterPresent = false;
    bool atLeastOneUpperCharacterPresent = false;
    bool atLeastOneDigitPresent = false;
    bool atLeastOneSpecialCharacterPresent = false;
    bool HasAdjacentCharacters = false;

    // check length

    if(password.size()>=8)
    {
        atLeast8CharactersPresent = true;
    }
    else
    {
        isPasswordStrong = false;
        return isPasswordStrong;
    }


    //check one lower

    for(int i=0;password[i]!='\0';i++)
    {

        if(password[i]>='0' && password[i]<='9')
        {
            atLeastOneDigitPresent = true;
        }

        if(password[i]>='a' && password[i]<='z')
        {
            atLeastOneLowerCharacterPresent = true;
        }

        if(password[i]>='A' && password[i]<='Z')
        {
            atLeastOneUpperCharacterPresent = true;
        }

        if(password[i] =='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' ||
                password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*' ||
                password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+' )
            {
                atLeastOneSpecialCharacterPresent = true;
            }

        if(password[i+1]!='\0')
        {
            if(password[i] == password[i+1])
            {
                HasAdjacentCharacters = true;
            }
        }

    }

    if(atLeast8CharactersPresent==true && 
        atLeastOneDigitPresent == true &&
        atLeastOneLowerCharacterPresent==true &&
        atLeastOneUpperCharacterPresent ==true &&
        atLeastOneSpecialCharacterPresent ==true &&
        HasAdjacentCharacters == false)
    {   
        isPasswordStrong =true;
    }
    else
    {
        isPasswordStrong =false;
    }

    // cout<<endl<<atLeast8CharactersPresent<<" "
    //     <<atLeastOneDigitPresent<<" "
    //     <<atLeastOneLowerCharacterPresent<<" "
    //     <<atLeastOneUpperCharacterPresent<<" "
    //     <<atLeastOneSpecialCharacterPresent<<" "
    //     <<HasAdjacentCharacters;

    return isPasswordStrong;
}

int main()
{
    string password;
    cin>>password;
    cout<<strongPasswordCheckerII(password);
    return 0;
}