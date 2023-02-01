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

template <typename v>
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

    public:

    V getValue(string key){
        //search & return
        int idx=getHashedIndex(string key);
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

        int idx=getHashedIndex(string key);
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
                    buckets[i]=head->next;
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
        MapNode<V>* head=buckets[idx],tail=NULL;

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
    }

    ~HashMap(){
        for(int i=0;i<bucketSize;i++){
            delete buckets[i];
        }
        delete [] buckets;
    }

};
