#include<bits/stdc++.h>
using namespace std;

struct node{
  long long data;
  node* left;
  node* right;
};

node* newNode(long long data) 
{ 
    node* temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 

long long univalTree(node* root , long long count){
    if(root == NULL){
        return count;
    }
    else if(root->left == NULL){
        if((root->left == NULL and root->right == NULL) or ((root->right)->data == root->data)){
            count += 1;
        }
    }
    else if(root->right == NULL){
        if((root->left == NULL and root->right == NULL) or ((root->left)->data == root->data)){
            count += 1;
        }
    }
    else if(root->left != NULL and root->right != NULL){
        if((root->left == NULL and root->right == NULL) or ((root->left)->data == root->data and (root->right)->data == root->data)){
            count += 1;
        }
    }
    count = univalTree(root->left , count);
    count = univalTree(root->right , count);
}

int main()
{
    node* root = NULL;
    root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(0);
    root->left->left = newNode(1);
    root->right->right = newNode(0);
    root->left->right = newNode(1);
    long long count = 0;
    count = univalTree(root , count);
    cout<<count<<endl;
}