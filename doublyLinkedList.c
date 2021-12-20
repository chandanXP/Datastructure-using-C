// --ALL OPERATIONS ON DOUBLYLINKED LIST-- 

//Name: Chandan, RollNo: 045

#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int data;          //The value
     struct Node *next; //adress to next element
     struct Node *prev; //adress to previous element
};

int Traversal(struct Node *ptr)
{
     while (ptr != NULL)
     {
          printf("Element: %d\n", ptr->data);
          ptr = ptr->next;
     }
}

//Case:1
struct Node *insertAtFirst(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->next = head;
     ptr->data = data;
     head->prev = ptr;
     ptr->prev = NULL;
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
     p->next->prev = ptr;
     ptr->prev = p;
     return head; //we have to return head as it was taken in function
};

//Case: 3
struct Node *insertAtEnd(struct Node *head, int data)
{
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node *p = head;
     while (p->next != NULL)
     {
          p = p->next;
     }
     ptr->data = data;
     p->next = ptr;
     ptr->next = NULL;
     ptr->prev = p;

     return head;
};

//DELETION

// Case: 1

struct Node *deleteFirst(struct Node *head)
{
     struct Node *ptr = head;
     head = head->next;
     head->prev = NULL;
     free(ptr);
     return head;
}

// CASE:2
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
     q->next->prev = p;
     free(q);
     return head;
}

// CASE: 3
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
     head->prev = NULL;

     //link second and third
     second->data = 11;
     second->next = third;
     second->prev = head;

     //link third and fouth
     third->data = 70;
     third->next = fourth;
     third->prev = second;

     //Link the fouth node with element
     fourth->data = 22;
     fourth->next = NULL;
     fourth->prev = third;

     Traversal(head); //original list

     // head = insertAtFirst(head, 99);
     // printf("\n--Linked list After insertion--\n");
     // Traversal(head);

     // head = insertAtIndex(head, 56, 1);
     // printf("\n--Linked list After insertion--\n");
     // Traversal(head);

     // head = insertAtEnd(head, 47);
     // printf("\n--Linked list After insertion--\n");
     // Traversal(head);

     //DELETION

     //Case: 1
     // head = deleteFirst(head);
     // printf("---After deletion---\n");
     // Traversal(head);

     //Case: 2
     // head = deleteInBetween(head, 1);
     // printf("---After deletion---\n");
     // Traversal(head);

     //Case: 3
     head = deleteLastNode(head);
     printf("---After deletion---\n");
     Traversal(head);

     return 0;
}

// traversal
// insert at first
// insert at end
// insert between
// delete at first
// delete between
// delete at end
