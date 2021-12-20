//ALL TYPES OF OPERATIONS ON CIRCULAR LINKED LIST IS APPLIED IN THIS PROGRAM

//Name: Chandan, RollNo: 045


#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int data;          //The value
     struct Node *next; //adress to next element
};

void linkedListTraversal(struct Node *head)
{
     struct Node *ptr = head;
     do
     {
          printf("Element is : %d\n", ptr->data);
          ptr = ptr->next;
     } while (ptr != head);
}

struct Node *insertAtEnd(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     struct Node *p = head->next;
     while (p->next != head)
     {
          p = p->next;
     }
     //at this point p points to the last mode of this circular list
     p->next = ptr;
     ptr->next = head;
     return head;
}

struct Node *insertAtTheIndex(struct Node *head, int data, int index)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node *q = head;
     int i = 0;
     while (i != index - 1)
     {
          q = q->next;
          i++;
     }
     ptr->data = data;
     ptr->next = q->next;
     q->next = ptr;
     return head;
}

struct Node *insertAtTheFirst(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     struct Node *p = head->next;
     while (p->next != head)
     {
          p = p->next;
     }
     //at thie point p points to the last mode of this circular list
     ptr->next = p->next;
     p->next = ptr;
     return ptr;
}

struct Node *deleteFirst(struct Node *head)
{
     struct Node *ptr = head;
     //loop to last node
     struct Node *p = head->next;
     while (p->next != head)
     {
          p = p->next;
     }
     head = head->next; //head pushed by one step
     p->next = head;    // head is now next of p
     free(ptr);         //p has been deleted
     return head;       //returned head to main function
}

struct Node *deleteByGivenKey(struct Node *head, int value)
{
     struct Node *p = head;
     struct Node *q = head->next;

     while (q->data != value) //if loop found the value which is equal to q i.e given key
     {
          p = p->next;
          q = q->next;
     }

     if (q->data == value) //if value is equal to given key
     {
          p->next = q->next; // head is now neaxt of p as well as q
          free(q);           //removed
     }

     return head;
}

struct Node *deleteLastNode(struct Node *head)
{
     struct Node *p = head;
     struct Node *q = head->next;
     while (q->next != head)
     { //until we places the q at last node
          p = p->next;
          q = q->next;
     }
     p->next = head; //head is nw next of p
     free(q);        //removed
     return head;    //returned to main function
}

int main()
{
     //These are the elements of Linked List
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;

     //Allocate memory for nodes in the linked list in Heap
     head = (struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));

     //link fist and second
     head->data = 7;
     head->next = second;

     //link second and third
     second->data = 11;
     second->next = third;

     //link third and fouth
     third->data = 70;
     third->next = fourth;

     //Link the fouth node with element
     fourth->data = 22;
     fourth->next = head;

     linkedListTraversal(head);

     //ALL THE OPERATIONS ARE APPLIED BELOW

     head = insertAtEnd(head, 54);
     printf("---List After Insertion---\n");
     linkedListTraversal(head);

     // head = insertAtTheFirst(head,40);//ptr have been returned by the function and here we assign ptr as head.
     // printf("---List After Insertion---\n");
     // linkedListTraversal(head);//traversal

     // head = insertAtTheIndex(head,88,2);
     // printf("---List After Insertion---\n");
     // linkedListTraversal(head);

     // head = deleteFirst(head);
     // printf("---List After deletion---\n");
     // linkedListTraversal(head);

     // head = deleteByGivenKey(head, 70);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     // head = deleteLastNode(head);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     return 0;
}

//Case1: Insert at the begining.
//Case2: Insert in between.
//Case3: Insert at the end.
//Case4: Insert after a Node.