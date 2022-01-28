class TrieNode{
    public:
    TrieNode *children[26];
    bool is_word;
    TrieNode(){
        is_word=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
            
        }
    }
};
class Trie {
public:
   
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        int n=word.size();
        int k=0;
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            k=word[i]-'a';
            if(curr->children[k]==NULL)
                curr->children[k]=new TrieNode();
            curr=curr->children[k];
            
        }
        curr->is_word=true;
    }
    
    bool search(string word) {
         int n=word.size();
        int k=0;
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            k=word[i]-'a';
            curr=curr->children[k];
            if(curr==NULL)
               return false;
        }
        return curr->is_word;
    }
    
    bool startsWith(string prefix) {
         int n=prefix.size();
        int k=0;
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            k=prefix[i]-'a';
            curr=curr->children[k];
            if(curr==NULL)
               return false;
        }
        return true;
    }
    private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */