#include<iostream>
#include "Pair.cpp"
using namespace std;

int main(){

    //Making triplet using pair
    Pair<Pair<int,int>,int> p2;


    Pair<int,int> p4;
    p4.setX(15);
    p4.setY(16);

    p2.setY(17);
    p2.setX(p4);

    cout<<"\n Triplet: "<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY();
    return 0;
}