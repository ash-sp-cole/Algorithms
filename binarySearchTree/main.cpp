#include <iostream>


/// define bst nide tree
struct BSTNode 
{
    int data{};

    BSTNode* left{};
    BSTNode* right{};
};


// creat new nodes in the HEAP


BSTNode* getNewNode (int data) {

BSTNode* newNode = new BSTNode();
newNode->data = data;
newNode ->left = newNode->right = NULL;
return newNode;
}



int main () {

    return 0;
}
