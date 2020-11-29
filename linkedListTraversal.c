#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;//The value
     struct Node *next;//adress to next element

};
void linkedListTraversal(struct Node*ptr){
     while(ptr!=NULL){
          printf("Element: %d\n",ptr->data);
          ptr=ptr->next;
     }
}

int main(){
     //These are the elements of Linked List
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;
 
     //Allocate memory for nodes in the linked list in Heap
     head = (struct Node *) malloc(sizeof(struct Node));
     second = (struct Node *) malloc(sizeof(struct Node));
     third = (struct Node *) malloc(sizeof(struct Node));
     fourth = (struct Node *) malloc(sizeof(struct Node));


     //link fist and second
     head->data=7;
     head->next=second;

     //link second and third
     second->data=11;
     second->next=third;

     //link third and fouth
     third->data=70;
     third->next=fourth;

     //terminate the list at the third node
     fourth->data=22;
     fourth->next=NULL;

     linkedListTraversal(head);

     return 0;
}

//Case1: Insert at the begining.
//Case2: Insert in between.
//Case3: Insert at the end.
//Case4: Insert after a Node.