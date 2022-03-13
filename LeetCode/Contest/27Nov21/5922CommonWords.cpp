#include<bits/stdc++.h>
using namespace std;


int countWords(vector<string>& words1, vector<string>& words2) 
{
    unordered_map<string,int> wordMap1;
    unordered_map<string,int> wordMap2;
    // string is key , int is frequency
    int wordCount=0;
    for(int i=0;i<words1.size();i++)
    {
        wordMap1[words1[i]]++;
    }

    //output of map
    // cout<<endl;
    // for(auto &pr: wordMap1)
    // {
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }

    for(int i=0;i<words2.size();i++)
    {
        wordMap2[words2[i]]++;
    }
    // algorithm to check if element is present exactly once
    for (auto pr1:wordMap1)
    {
        for(auto pr2:wordMap2)
        {
            if((pr1.first == pr2.first) && (pr1.second==1 && pr2.second==1))
            {
                wordCount++;
            }
        }
    }
    return wordCount;
}

int  main()
{
    vector<string> words1 = {"leetcode","is","amazing","as","is"};
    vector<string> words2= {"amazing","leetcode","is"};
    cout<<countWords(words1,words2);
    return 0;

    
}
