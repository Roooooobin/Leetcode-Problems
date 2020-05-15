#include <bits/stdc++.h>
using namespace std;

// leetcode-208 by Robin
class TrieNode {
private:
    TrieNode* children[26];
    int isEnd;

public:
    TrieNode() {
        isEnd = false;
        for (int i=0; i<26; ++i) {
            children[i] = NULL;
        }
    }

    bool containsKey(char ch) {
        return children[ch - 'a'] != nullptr;
    }

    TrieNode* get(char ch) {
        return children[ch - 'a'];
    }

    void put(char ch) {
        children[ch - 'a'] = new TrieNode();
    }

    void setEnd() {
        isEnd = true;
    }

    bool isEnded() {
        return isEnd;
    }

};

class Trie {
private:
    TrieNode* root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *node = root;
        for (int i=0; i<word.size(); ++i) {
            if (!node->containsKey(word[i])) {
                node->put(word[i]);
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    TrieNode* searchPrefix(string& word) {
        TrieNode *node = root;
        for (int i=0; i<word.size(); ++i) {
            if (!node->containsKey(word[i])) {
                return nullptr;
            }
            node = node->get(word[i]);
        }
        return node;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *node = searchPrefix(word);
        return node != nullptr && node->isEnded();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *node = searchPrefix(prefix);
        return node != nullptr;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
