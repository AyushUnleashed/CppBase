/* An efficient program to print
subarray with sum as given sum */
#include <iostream>
using namespace std;
 
/* Returns true if the there is a subarray of
arr[] with a sum equal to 'sum' otherwise
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i;
 
    /* Add elements one by one to curr_sum and
    if the curr_sum exceeds the sum,
    then remove starting element */
    for (i = 1; i <= n; i++) {
        // If curr_sum exceeds the sum,
        // then remove the starting elements
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }
 
        // If curr_sum becomes equal to sum,
        // then return true
        if (curr_sum == sum) {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return 1;
        }
 
        // Add this element to curr_sum
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
 
    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}
 
// Driver Code
int main()
{   int n;
    cin>>n;
    int arr[n];

    cout<<"\nEnter Array:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"enter Sum:";
    cin>>sum;
    subArraySum(arr, n, sum);
    return 0;
}
 
// This code is contributed by SHUBHAMSINGH10