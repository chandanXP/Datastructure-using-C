//ALL OPERTIONS ON LINKED LIST

//Name: Chandan, RollNo: 045

#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int data;          //The value
     struct Node *next; //adress to next element
};
void linkedListTraversal(struct Node *ptr)
{
     while (ptr != NULL)
     {
          printf("Element: %d\n", ptr->data);
          ptr = ptr->next;
     }
};

//Case:1
struct Node *insertAtFirst(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->next = head;
     ptr->data = data;
     return ptr;
};

//Case:2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node *p = head;
     int i = 0;
     while (i != index - 1) //until
     {
          p = p->next; //(from head) we go to the next element in every loop run w.r.t "i", this code is indicating that go to next and say that element "p"
          i++;
     }
     ptr->data = data;
     ptr->next = p->next;
     p->next = ptr;
     return head; //we have to return head as it was taken in function
};

//Case:1
struct Node *insertAtEnd(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     struct Node *p = head;
     while (p->next != NULL)
     {
          p = p->next;
     }
     p->next = ptr;
     ptr->next = NULL;
     return head; //we have to return head as it was taken in function
};

struct Node *insertAfterNode(struct Node *head, struct Node *previousNode, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     ptr->next = previousNode->next;
     previousNode->next = ptr;
     return head; //we have to return head as it was taken in function
};

//DELETION
struct Node *deleteFirst(struct Node *head)
{
     struct Node *ptr = head;
     head = head->next;
     free(ptr);
     return head;
}

struct Node *deleteInBetween(struct Node *head, int index)
{
     struct Node *p = head;
     struct Node *q = head->next;
     for (int i = 0; i < index - 1; i++)
     {
          p = p->next;
          q = q->next;
     }
     p->next = q->next;
     free(q);
     return head;
}

struct Node *deleteLastNode(struct Node *head)
{
     struct Node *p = head;
     struct Node *q = head->next;
     while (q->next != NULL)
     {
          p = p->next;
          q = q->next;
     }
     p->next = NULL;
     free(q);
     return head;
}

struct Node *deleteByGivenKey(struct Node *head, int value)
{
     struct Node *p = head;
     struct Node *q = head->next;

     while (q->data != value && q->next != NULL)
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

     //terminate the list at the third node
     fourth->data = 22;
     fourth->next = NULL;

     printf("\nLinked list before insertion\n");
     linkedListTraversal(head);
     // head = insertAtFirst(head,56);
     // head = insertAtIndex(head, 56, 1);
     // head = insertAtEnd(head, 56);
     head = insertAfterNode(head, second, 45);
     printf("\nLinked list after insertion\n");
     linkedListTraversal(head);

     //DELETION
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
     // head = deleteByGivenKey(head, 70);
     // printf("---After deletion---\n");
     // linkedListTraversal(head);

     return 0;
}

//Case1: Insert at the begining. Requirements: (i)head of linked list (ii) and the data we want to insert
//Case2: Insert in between. Requirements: (i) adress of a data (ii) earlier element's pointer should store the adress of data we want to insert.(index)
//Case3: Insert at the end. Requirement: we have to go until a node->next is NUll.
//Case4: Insert after a Node.