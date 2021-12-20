//Insertion, Traverse, verification and Deletion in BST

//Name: Chandan, RollNo: 045

#include<stdio.h>
#include<stdlib.h>

//ADT
struct Node{
     int data;
     struct Node*left;
     struct Node*right;
     };
//to create a new Node
struct Node*create(int x){
     struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=x;
     temp->left=NULL;
     temp->right=NULL;
}

//to traverse binary tree
void inOrderTraversal(struct Node *root){
     if(root==NULL){
          return;
     }else{
          inOrderTraversal(root->left);
          printf("%d ",root->data);
          inOrderTraversal(root->right);
          return;
     }
}

//Insertion in  BST
struct Node*insert(struct Node*root, int value){
     if(root==NULL){
          root = create(value);
     }
     else if(value<root->data){
          root->left = insert(root->left, value);
     }
     else if (value > root->data){
          root->right = insert(root->right, value);
     }

     // printf("%d\n", root->data);
     else{
          printf("\nValue: %d you enterd is already exist\n", value);
     }

     return root;
}

struct Node*findMinimum(struct Node*root){
     // printf("\nmin: %d\n", root->data);
     if(root==NULL){
          return NULL;
     }
     else if(root->left!=NULL){
          return findMinimum(root->left);
     }
     return root;
}
struct Node*delete(struct Node*root, int value){
     if(root==NULL){
          printf("\nValue: %d is not present or the tree is empty!\n", value);
          return NULL;
     }
     else if(value<root->data){
          root->left = delete(root->left, value);
     }
     else if(value>root->data){
          root->right= delete(root->right, value);
     }
     else{
          //No child
          if(root->left == NULL && root->right==NULL){
               // printf("\nNode have no child\n");
               free(root);
               return NULL;
          }
          //One child
          else if(root->left ==NULL || root->right==NULL){
               // printf("\nNode have one child...\n");
               // printf("\n%d %d\n", root->left->data, root->right->data);
               struct Node*temp=root;
               if(root->left==NULL){
                    root=root->right;
               }
               else{
                    root=root->left;
               }
               free(temp);
               
          }
          //Two child
          else{
               // printf("\nNode have two children..\n");
               // printf("%d\n", root->data);
               struct Node*temp = findMinimum(root->right);
               root->data=temp->data;
               // printf("%d\n", temp->data);

               root->right= delete(root->right, temp->data);

          }
     }
     return root;
}
//To Check whether the value we want is present or not
struct Node*verify(struct Node*root, int value){
     if(root==NULL){
          printf("\nThe Tree maybe Empty or value is not present...\n");
          return root;
     }
     else if(value<root->data){
          root->left= verify(root->left, value);
     }
     else if(value>root->data)
     {
          root->right= verify(root->right, value);
     }
     else if(root->data==value){
          printf("\nThe value you mentioned is present in this tree..(value: %d)\n", root->data);
     }
     else{
          printf("\nValue you entered is no present..\n");
     }
     return root;
     
}

int main(){
     //intializing as null tree
     struct Node*root=NULL;
     //root
     root=create(10);
     
     insert(root, 5);
     insert(root, 7);
     insert(root, 13);
     insert(root, 1);
     insert(root, 49);
     insert(root, 50);
     insert(root, 35);
     insert(root, 8);
     insert(root, 8);

     delete(root,49);
     delete(root,99);

     verify(root, 70);

     printf("\n--inOrder Traversal--\n");
     inOrderTraversal(root);

     return 0;
}