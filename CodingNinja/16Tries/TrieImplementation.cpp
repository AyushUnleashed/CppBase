#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode** children;
    bool isTerminal;

    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal=false;
    }
};

class Trie{ // manage root
    TrieNode* root;
    public:
    Trie(){
        root = new TrieNode('/0');
    }

    void insertWordHelper(string word,TrieNode* root){

        if(word.size()==0){
            //mark as word end
            root->isTerminal=true;
            return;
        }
        //ascii, a (97)
        int idx = word[0]-'a';

        if(root->children[idx]==NULL){
            root->children[idx] = new TrieNode(word[0]);
        }

        insertWordHelper(word.substr(1),root->children[idx]);
    }

    void insertWord(string word){
        //recursive
        //add "AND" -> insert A in root, ask to insert "ND"
        
        //base condn => add "", mark node as word end
        // small calculation => inset first character
        // recursive call => pass arr+1, 
        insertWordHelper(word,root);
    }

    bool searchWord(string word, TrieNode* root){
        
        if(word.size()==0){
            //mark as word end
            return root->isTerminal;
        }

        //ascii, a (97)
        int idx = word[0]-'a';

        if(root->children[idx]==NULL){
           return false;
        }

        if(root->children[idx]!=NULL){ 
            //search again
            return searchWord(word.substr(1),root->children[idx]);
        }
    }

    bool searchWord(string word){
        searchWord(word,root);
    }

    void removeWord(string word,TrieNode* root){
        // remove word
        // recursive
        // on "" -> set terminal to false
        // if we don't found in between, just return , the word is not present

        if(word.size()==0){
            root->isTerminal=false; //setting to false, means no such word exist
            return;
        }
        int idx = word[0]-'a';
        TrieNode* child = root->children[idx];
        
        if(root->children[idx]==NULL){
            //element doesn't exist
            // no need to delete 
            return;
        }
            
        //element exist
        removeWord(word.substr(1),child);

        if(child->isTerminal==false){
            for(int i=0;i<26;i++){
                if(child->children[i]!=NULL){
                    return;
                }
            }
            //if all null
            //remove node
            delete child;
            root->children[idx]=NULL;
        }
    }


    bool patternMatchingHelper(string pattern, TrieNode* root) {
        if(pattern.size()==0){
            return true;
        }

        int idx = pattern[0]-'a';
        if(root->children[idx]==NULL){
            return false;
        }

        return patternMatchingHelper(pattern.substr(1), root->children[idx]);
    }

    bool patternMatching(vector<string> vect, string pattern) {
        // Write your code here
        for(auto s:vect){
            while(s.size()>0){
                insertWord(s);
                s= s.substr(1);
            }
        }
        bool ans = patternMatchingHelper(pattern,root);
        return ans;
    }

};