#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

string appendAndDelete(string s,string t, int k)
{   
    int index=-1;
    int count=0;

    int sz1 = s.length();
    int sz2 = t.length();
    int len = (sz1>=sz2) ? sz1 : sz2 ;

    if(s == t)
    {    //cout<<"\n(s == t) ";

        if(k >=sz1+sz2)
        {   //cout<<"\n (k >=sz1+sz2) ";
            return "Yes";
        }
        else
        {   //cout<<"\n (k < sz1+sz2)";
            if( k % 2 == 0)
            {   //cout<<"\n ( k % 2 == 0)";
                return "Yes";
            }
            else
            {   //cout<<"\n ( k % 2 != 0)";
                return "No";
            }

        }
    }

    //code

    // checking same substring
    for(int i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {   
            index=i;
            break;
        }
    }
    cout<<"\n Index is:"<<index;
    //erasing non common charcters fom Input string
    s.erase(index,sz1 - index);
    count += sz1-index;

    // substring of element to be copied
    string sToCopy = t.substr(index, sz2-index);

    //adding element from Output to input string

    s.insert(index,sToCopy);
    count+= sToCopy.length();

    int copyLen = sToCopy.length();

    cout<<" \n copyLen:"<<copyLen;

    if(count>k)
    {
        return "No";
    } 
    else if(count == k)  //direct ans
    {   //cout<<"\n (count == k)";
        return "Yes";
    }
    else if( k >= sz1 + sz2)    //pura delete karke add krdega
    {   //cout<<"\n ( k >= sz1 + sz2) ";
        return "Yes";
    }
    else if( k < sz1 + sz2 )
    {   cout<<"\n ( k < sz1 + sz2 )";

        if( k % copyLen == 0)   //k is multiple of copyLen
        {   cout<<"\n ( k % copyLen == 0) ";

            if( (k/copyLen ) % 2 != 0 )   //k is odd multiple
            {   
                cout<<"\n ( (k/copyLen ) % 2 != 0 )";
                return "Yes";
            }
            else    //k is even multiple
            {   
                cout<<"\n k is even multiple";
                return "No";
            }
        }
        else    //k is not a multiple
        {   cout<<"\n k is not a multiple";
            return "No";
        }
    }
    else
    {   cout<<"\n Every Fucking Condition Failed";
        return "No";
    }
}

int main()
{
    system("cls");
    string s;
    string t;
    int k;
    cin>>s;
    cin>>t;
    cin>>k;
    string ans = appendAndDelete(s,t,k);

    cout<<ans;
    return 0;

}

