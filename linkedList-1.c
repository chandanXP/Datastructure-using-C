// Linked List implementation

#include<stdio.h>  // include library
#include<stdlib.h>

typedef struct Node // using structure
{
        int data; // data of integer type
        struct Node *next; // pointer point to same strucutre
}node;
// Function insert
struct Node * insert(struct Node *head, int data, int index){
     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
     struct Node * p = head;
     int i = 0;
     while (i!=index-1)//until
     {
          p = p->next;//(from head) we go to the next element in every loop run w.r.t "i", this code is indicating that go to next and say that element "p"
          i++;
     }
     ptr->data = data;
     ptr->next = p->next;
     p->next = ptr;
     return head;//we have to return head as it was taken in function

};

int find(node *ptr, int key)
{
        node *start = ptr;
        ptr =  ptr -> next; //First node is dummy node.
        /* Iterate through the entire linked list and search for the key. */
        while(ptr!=start)
        {
                if(ptr->data == key) //key is found.
                {
                        return 1;
                }
                ptr = ptr -> next;  //Search in the next node.
        }
        /*Key is not found */
        return 0;
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

void print(node *start,node *ptr)
{
        if(ptr==start)
        {
                return;
        }
        printf("%d ",ptr->data);
        print(start,ptr->next);
}
int main()
{
        /* start always points to the first node of the linked list.
         temp is used to point to the last node of the linked list.*/
        node *start,*temp, *Head; // use different pointers pointing to similar structure as of node
        start = (node *)malloc(sizeof(node)); // memory allocation of the type node
        temp = start;  // pointer temp should point at start
        temp -> next = start; // make next of temp to point at start

 /* Here in this code, we take the first node as a dummy node.
           The first node does not contain data,
           but it used because to avoid handling special cases in insert and delete functions GROUNDED HEADER    */
        printf(" Linked List Example\n");
        printf("Choose List operation ");
           // prompt user to choose the option
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print\n");
        printf("4. Find\n");
        printf("5. EXIT\n");

        // take choice from the user we are taking it inside the while loop so that
        //we can perform the steps till we have true condition

 while(1)
        {
                printf(" Press your choice \n"); // prompt user to enter the choice

                int choice;  // variable to hold user choice
                scanf("%d",&choice); // take input from the user

                if(choice==1) // if user wants to insert data
                {
                        int data;
                        printf("The Element to be inserted in the list is: ");
                        scanf("%d",&data);
                        insert(struct node *start, int data, int index);
                }
                else if(choice==2)
                {
                        int data;
                        printf("The Element to be deleted from the list is: ");
                        scanf("%d",&data);
                        delete(start,data);   // Function Delete will take pointer start and data
                }
                else if(choice==3)
                {
                        printf("The list is ");
                        print(start,start->next);   // Function Print which takes two pointers start and next of start
                        printf("\n");
                }
                else if(choice==4)
                {
                        int data;
                        printf("The Element is to be searched in the list is: ");
                        scanf("%d",&data);
                        int status = find(start,data);    // Function search which takes pointer and data to be searched
                        if(status)
                        {
                                printf("Element Found\n");
                        }
                        else
                        {
                                printf("Element Not Found\n");
                        }
                }
        else
                    break;
        }
}

