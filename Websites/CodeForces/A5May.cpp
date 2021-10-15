        #include<bits/stdc++.h>
         
        using namespace std;
         
        int main()
        {
            //system("cls");
            int t;
            cin>>t;
            while(t>0)
            {
                int n;
                cin>>n;
                if(n==1)
                {
                    cout<<"YES"<<endl;
                    t--;
                    continue;
                }
               
         
                char givenString[n];
                bool isLetterCompleted[26];
         
                for(int i=0;i<26;i++)
                {
                    isLetterCompleted[i]=false;
                }
         
                bool isSuspision=false;
         
                //fflush(stdin);
                cin>>givenString;
                //cout<<endl<<givenString;
         
                for(int i=0;i<n-1;i++)
                {   int index = givenString[i]-65;  //A - Z => 0 - 25
         
                    if(givenString[i]!=givenString[i+1])
                    {   
                        if(isLetterCompleted[index]==true)
                        {
                            isSuspision=true;
                        }
                        isLetterCompleted[index]=true;
                    }
         
                }
                int lastIndex = givenString[n-1]-65;
                //cout<<"Last Index"<<lastIndex;
         
                if(isLetterCompleted[lastIndex]==true)
                {
                    isSuspision=true;
                }
         
         
                if(isSuspision==true)
                {
                //cout<<"got distracted";
                    cout<<"NO";
                }
                else
                {//cout<<"Didn't get distarcted";
                cout<<"YES";}
         
                t--;
                cout<<endl;
            }
            return 0;
        }