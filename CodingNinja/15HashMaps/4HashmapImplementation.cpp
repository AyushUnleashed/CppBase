#include<iostream>
#include<math.h>
using namespace std;

//Hashmap implement
// key ( string), V value -> store it using open addressing/chaining
// Node<v>{} , Map<v>{}

template <typename V>
class MapNode{
    public:
    string key;
    V value;
    MapNode<V>* next;
    MapNode(string key,V value){
        this->key = key;
        this->value = value;
        next=NULL;
    }

    ~MapNode(){
        delete next;
    }
};

template <typename V>
class HashMap{
    public:
    int currSize;
    int bucketSize;
    MapNode<V>** buckets;

    HashMap(){
        currSize=0;
        bucketSize = 20;
        buckets = new MapNode<V>*[bucketSize];
        // set all addresses to null
        for(int i=0;i<bucketSize;i++){
            buckets[i]=NULL;
        }
    }

    private:

    int getHashedIndex(string key){
        // 2 steps => 1. get hashed code, 2. compress it.
        int len = key.size();
        //1 hashcode -> "abc" -> int(p2*a+p*b+c*p0)
        int pw = 0;
        int p=11;
        int hashCode=0;

        //to do this "abc" -> int(p2*a+p*b+c*p0)
        for(int i=len-1;i>=0;i--){
            int currCoef=pow(p,pw);
            currCoef%=bucketSize; //to make sure it remains in int

            hashCode+=(key[i]*currCoef);
            pw++; // 0,1,2,3 ...
            hashCode%=bucketSize;//to make sure it remains in int
        }
        //2 Compression 
        int hashedIndex = hashCode % bucketSize;
        return hashedIndex;
    }

    void reshash(){
        // point temp to current bucket array
        // create new array of double size & point buckets to that
        // traverse old array, traverse each element of linkedlist
        // copy it to new buckets, by recalculating hashedindex

        MapNode<V>** temp = buckets;
        buckets = new MapNode<V>*[2*bucketSize];
        int oldBucketSize = bucketSize;
        bucketSize*=2;
        currSize=0;

        for(int i=0;i<bucketSize;i++){
            buckets[i]=NULL;
        }
        // element from old buckets to new buckets
        for(int i=0;i<oldBucketSize;i++){
            MapNode<V>* head = temp[i];

            // traverse LL & copy elements
            while(head!=NULL){
                //action
                string key = head->key;
                V val=head->value;
                insert(key,val);
                head=head->next;
            }
        }

        //deleting temp
        for(int i=0;i<oldBucketSize;i++){
            MapNode<V>* head= temp[i];
            delete  head; // recursive deletion
        }
        delete [] temp;
    }

    public:

    V getValue(string key){
        //search & return
        int idx=getHashedIndex(key);
        MapNode<V>* head=buckets[idx];
        while(head!=NULL){
            if(head->key==key){
                return head->value;
            }
            head=head->next;
        }
        //not found
        return 0; // if ptr 0 = null, int -> 0 
    }

    V remove(string key){

        int idx=getHashedIndex(key);
        MapNode<V>* head=buckets[idx];
        MapNode<V>* prev=NULL;

        while(head!=NULL){
            if(head->key==key){
                V val = head->value;
                MapNode<V>* temp=head;

                if(prev!=NULL){
                    prev->next=head->next;
                }else{
                    //first element is ans
                    buckets[idx]=head->next;
                }
                head->next = NULL; //we set this 
                delete head; //so delete call doesn't delete all the next nodes
                currSize--;
                return val;
            }
            prev=head;
            head=head->next;
        }
        // element not found
        return 0;
        
    }

    void insert(string key, V value){
        // to insert, we need index to insert in
        int idx=getHashedIndex(key);
        MapNode<V>* head=buckets[idx];
        MapNode<V>* tail=NULL;

        //check if key already exist
        //search in LL
        MapNode<V>* temp=head;
        while(temp!=NULL){
            if(temp->key==key){
                //already exist, just update it
                temp->value = value;
                return;
            }
            temp=temp->next;
        }
        // reaches here, if it's not present
        // insertion in LL at Head
        MapNode<V>* newNode = new MapNode<V>(key,value);
        newNode->next = head;
        buckets[idx]=newNode; // head changed
        currSize++;//node added

        double loadFactor = ((double)(currSize)/bucketSize);
        if(loadFactor>0.7){
            reshash();
        }
    }

    int size(){
        return currSize;
    }

    double getLoadFactor(){
        return (1.0*currSize)/bucketSize;
    }

    ~HashMap(){
        for(int i=0;i<bucketSize;i++){
            delete buckets[i];
        }
        delete [] buckets;
    }

};


int main() { 
    HashMap<int> map; 
    for (int i = 0; i < 10; i++) {
        char c = '0' + i; 
        string key = "abc"; 
        key = key + c; 
        int value = i + 1; 
        map.insert(key, value); 
        cout << map.getLoadFactor() << endl;
    } 

    map.remove("abc2");
    map.remove("abc5");
    cout<<endl;
    for (int i = 0; i < 10; i++) {
        char c = '0' + i; 
        string key = "abc"; 
        key = key + c; 
        cout<< key<< ":"<<map.getValue(key)<<endl ;
    } 
    cout << map.size()<< endl;
}