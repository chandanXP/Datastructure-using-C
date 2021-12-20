//All types of Tree traversal
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Prototype
struct Node{
     int data;
     struct Node*left;
     struct Node*right;

};
struct Node*create(int x){
     struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=x;
     temp->left=NULL;
     temp->right=NULL;

}

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

void preOrderTraversal(struct Node *root){
     if(root==NULL){
          return;
     }else{
          printf("%d ",root->data);
          inOrderTraversal(root->left);
          inOrderTraversal(root->right);
          return;
     }
}

void postOrderTraversal(struct Node *root){
     if(root==NULL){
          return;
     }else{
          inOrderTraversal(root->left);
          inOrderTraversal(root->right);
          printf("%d ",root->data);
          return;
     }
}

int main(){
     //intializing as null tree
     struct Node*root=NULL;

     //Created root of the tree 
     root = create(10);//root
     // printf("%d\n",  root->data);
     //Level 2
     root->left=create(20);//Left
     root->right=create(30);//Right
     //Level 3
     root->left->left=create(40);
     root->left->right=create(50);
     root->right->left=create(60);
     root->right->right=create(70);


     // printf("%d\n", root->left->data);

     // printf("%d\n", root->left->left->data);

     //Inorder Treaversal
     printf("\n--InOrder Traversal--\n");
     inOrderTraversal(root);

     //preorder Treaversal
     printf("\n--preOrder Traversal--\n");
     preOrderTraversal(root);

     //postorder Treaversal
     printf("\n--postOrder Traversal--\n");
     postOrderTraversal(root);

     return 0;

}
