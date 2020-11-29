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
struct Node * deleteFirst(struct Node * head){
     struct Node * ptr = head;
     head = head->next;
     free(ptr);
     return head;

}

// void deleteInBetween(struct Node*p, int index){
//      struct Node*q = (struct Node*)malloc(sizeof(struct Node));
//      int i=0;
//      while(i!=index-1){
//           p = p->next;
//           i++;
//      }
//      q = p->next;
//      p->next = q->next;
//      free(q);
 
// };

struct Node * deleteInBetween(struct Node * head, int index){
     struct Node *p =head;
     struct Node *q = head->next;
     for (int i=0; i<index-1; i++){
          p= p->next;
          q=q->next;
     }
     p->next=q->next;
     free(q);
     return head;

}

struct Node * deleteLastNode(struct Node * head){
     struct Node *p = head;
     struct Node *q = head->next;
     while(q->next != NULL){
          p = p->next;
          q = q->next;
     }
     p->next = NULL;
     free(q);
     return head;

}

struct Node * deleteByGivenKey(struct Node * head, int value){
     struct Node *p = head;
     struct Node *q = head->next;

     while ( q->data != value && q->next != NULL)
     {
          p = p->next;
          q = q->next;
     }
      
     if (q->data == value)
     {
          p->next = q->next;
          free(q);
     }
     
     return head;
}

int main(){
     //These are the elements of Linked List
     struct Node*head;
     struct Node*second;
     struct Node*third;
     struct Node*fourth;
     struct Node*fifth;
     struct Node*sixth;
     struct Node*seventh;
 
     //Allocate memory for nodes in the linked list in Heap
     head = (struct Node *) malloc(sizeof(struct Node));
     second = (struct Node *) malloc(sizeof(struct Node));
     third = (struct Node *) malloc(sizeof(struct Node));
     fourth = (struct Node *) malloc(sizeof(struct Node));
     fifth = (struct Node *) malloc(sizeof(struct Node));
     sixth = (struct Node *) malloc(sizeof(struct Node));
     seventh = (struct Node *) malloc(sizeof(struct Node));

     //link fist and second
     head->data=7;
     head->next=second;

     //link second and third
     second->data=11;
     second->next=third;

     //link third and fouth
     third->data=70;
     third->next=fourth;

     //link fouth and fifth
     fourth->data=22;
     fourth->next=fifth;

      //link fifth and sixth
     fifth->data=44;
     fifth->next=sixth;

      //link sixth and seventh
     sixth->data=20;
     sixth->next=seventh; 

     //Terminate the seveth link with NUll
     seventh->data=100;
     seventh->next=NULL;

     linkedListTraversal(head);

     //Case: 1
     // head = deleteFirst(head);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     //Case: 2
     // head = deleteInBetween(head, 3);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     //Case: 3
     // head = deleteLastNode(head);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     //Case: 4
     head = deleteByGivenKey(head, 70);
     printf("---After deletion---\n");
     linkedListTraversal(head);

     return 0;
}

//Case1: Delete at the begining.
//Case2: Delete in between.
//Case3: Delete at the end.
//Case4: Delete at a given key(value).