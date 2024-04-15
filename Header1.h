#include<iostream>
using namespace std;
class Node {
    int* keys;
    int t;
    Node** C;
    int n;
    bool leaf;

public:
    Node(int _t, bool _leaf);

    void insertNonFull(int k);
    void splitChild(int i, Node* y);
    void traverse();

    friend class BTree;
};

class BTree {
    Node* root;
    int t;

public:
    BTree(int _t) {
        root = NULL;
        t = _t;
    }

    void traverse() {
        if (root != NULL)
            root->traverse();
    }

    void insert(int k);
};