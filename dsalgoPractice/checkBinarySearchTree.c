#include<stdio.h>
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
int res=1;
int checkBinarySearch(struct Node* root){
     if( (root==NULL) || ( (root->left==NULL) && (root->right ==NULL) )){     
          return res;
     }
     else if((root->left->data < root->data) && (root->right->data > root->data)){      
          checkBinarySearch(root->left);     
          checkBinarySearch(root->right);     
     }
     else{    
          res=0;     
          return res;
     }
     return res;
}

int main(){
     struct Node*root=NULL;
     root = create(10);

     root->left =create(5);
     root->right = create(15);

     root->left->left =create(3);
     root->left->right = create(6);

     root->right->left =create(13);
     root->right->right = create(18); 

     root->right->left->left =create(11);
     root->right->left->right = create(14); 

     int c = checkBinarySearch(root);
     printf("\nc= %d\n",c);
     
     return 0;
}