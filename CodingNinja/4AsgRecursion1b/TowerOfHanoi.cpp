#include <iostream>
using namespace std;

//auxillary is the helper
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
	//base case
    if(n==0)
    {
        return;
    }
    //n-1 from a to b using c
    towerOfHanoi(n-1,source,destination,auxiliary);

    //nth from A(source) to c(destination)
    cout<<endl<<source<<" "<<destination;

    //n-1 from b to c using a
    towerOfHanoi(n-1,auxiliary,source,destination);
}




int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
