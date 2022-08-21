#include<vector>
using namespace std;

// each node , holds data , and address of all child nodes
// we prefer to use vector to store addresses of all child node of a particular node


// to stores multiple addresses -> array, linkedlist,vector available
//we don't use array because of fixed size
//we avoid LL because , no direct access, access require O(n)


// we use class to make a new custom Data Structure

template <typename T>
class TreeNode{

    public:
    T data;
    vector< TreeNode<T>*> children;

    TreeNode(T data){
        this->data= data;
    }
};
