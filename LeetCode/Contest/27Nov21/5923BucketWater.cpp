#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumBuckets(string street) {
       int bucketCount = 0;
        
        for(int i=0;i<street.length();i++)
        {
            if(street[i]=='H')
            {
                //Left Bucket
                
                if((i>0) and street[i-1]=='B' )
                {
                    //move on
                     continue;
                }
                else if((i!=street.length()-1) &&  street[i+1]=='.'  )
                {     
                    bucketCount++;
                    street[i+1]='B';
                }
                else if((i>0) && street[i-1]=='.' )
                {
                    bucketCount++;
                    street[i-1]='B'; 
                }
                else
                {
                    return -1;
                }    
            }
        }
        
        return bucketCount;
    }

int main()
{
    cout<<minimumBuckets(".H.");
    return 0;
}


// int minimumBuckets(string street) {
    
//         int bucketCount=0;
//         bool isPossibleForH[street.length()];
//         for(int i=0;i<street.length();i++)
//         {
//             if(street[i]=='H')
//             {
//                 if(street[i+1]=='.' || street[i-1]=='.')
//                 {
//                     isPossibleForH[i] =true;
//                     if(street[i+2]=='H' || street[i-2]=='H')
//                     {
//                         bucketCount++;
//                         i=i+2;
//                     }
//                     else
//                     {
//                         bucketCount+=2;
//                         i=i+3;
//                     }
//                 }
//                 else
//                 {
//                     isPossibleForH[i]==false;
//                 }
//             }
            
//             if(isPossibleForH[i]==false)
//             {
//                 return -1;
//             }
//         }
        
//         return bucketCount;
 //   }


   // int minimumBuckets(string street)
// {
//     int bucketCount = 0;
//     bool isPossibleForH[street.length()];

//         if(street=="H")
//         {
//             return -1;
//         }

//         if(street==".")
//         {
//             return 0;
//         }

//         for(int i=0;i<street.length();i++)
//         {
//             if(street[i]=='H')
//             {
//                 if(street[i+1]=='.')
//                 {
//                     street[i+1]='B';
//                     bucketCount++;
//                 }

//                 if(street[i-1]=='B')
//                 {
//                     //skip
//                     //already has a bucket
//                 }

//                 if(street[i-1]=='.')
//                 {
//                     street[i-1]='B';
//                     bucketCount++;
//                 }

//                 if(i==street.length()-1)
//                 {
//                     if(street[i-1]=='.')
//                     {
//                         street[i-1]='B';
//                         bucketCount++;
//                     }
//                 }
//             }
//         }


//     return bucketCount;
// }