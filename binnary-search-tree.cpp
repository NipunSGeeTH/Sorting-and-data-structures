// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int key;
    node *left,*right;
    
};


//insert value to BST
 node* insert (node *root, int key){
     if (root == nullptr){
         node *node1 = new node();
     node1->key=key;
        
         return node1;
     }
     else if ( root->key > key){
         
         root->left=insert (root->left, key);
     }
     else if (root->key < key){
         
         root->right=insert (root->right,key);
     }
     return root;
     
     
 };
 
 

int main() {
    node *root = nullptr ;
    root=insert(root, 66);
    root=insert(root,99);
    root=insert(root,22);
    root=insert(root,11);
    cout<< node().key;

    return 0;
}