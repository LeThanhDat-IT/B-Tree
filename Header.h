#include <iostream> 
using namespace std;
#define N 4  
struct node {
    int key[N - 1];
    node* child[N];
    int isleaf;
    int n;
    node* parent;
};
node* searchforleaf(node* root, int k,node* parent, int chindex);
node* insert(node* root, int k);