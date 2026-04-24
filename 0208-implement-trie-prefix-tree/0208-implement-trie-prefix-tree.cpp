class Trie {
private:
    struct Node {
        Node* links[26];
        bool isEnd;

        Node() {
            for(int i = 0; i < 26; i++) links[i] = NULL;
            isEnd = false;
        }
    };

    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;

        for(char ch : word) {
            int index = ch - 'a';

            if(node->links[index] == NULL) {
                node->links[index] = new Node();
            }

            node = node->links[index];
        }

        node->isEnd = true;
    }
    
    bool search(string word) {
        Node* node = root;

        for(char ch : word) {
            int index = ch - 'a';

            if(node->links[index] == NULL) {
                return false;
            }

            node = node->links[index];
        }

        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;

        for(char ch : prefix) {
            int index = ch - 'a';

            if(node->links[index] == NULL) {
                return false;
            }

            node = node->links[index];
        }

        return true;
    }
};