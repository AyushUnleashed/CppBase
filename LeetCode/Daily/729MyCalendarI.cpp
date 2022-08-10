#include<bits/stdc++.h>
#include<vector>
using namespace std;



class MyCalendar {
public:

    vector<vector<int>> bookingTimes;

    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        bool succeds = false;

        if(bookingTimes.size()==0)
        {
            succeds = true;
        }
        
        for(auto &vect: bookingTimes)
        {
            int currStart = vect[0];
            int currEnd = vect[1];
            
            if( (start<currStart && end<=currStart) || (start>=currEnd && end> currEnd))
            {
                succeds = true;
            }else
            {
                succeds = false;
                break;
            }
        }
  
        if(succeds)
        {
            bookingTimes.push_back({start,end});
            
            return true;
        }else { return false;}
        
    }
}; 

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

int main()
{
    MyCalendar myCalendar = MyCalendar();
    cout<<myCalendar.book(10, 20)<<endl; // return True
    cout<<myCalendar.book(15, 25)<<endl; // return False, It can not be booked because time 15 is already booked by another event.
    cout<<myCalendar.book(20, 30)<<endl; // return True, The event can be booked, as the first event takes every time less than 20, but not including 20.

return 0;
}