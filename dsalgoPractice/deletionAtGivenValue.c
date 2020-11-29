#include <stdio.h>
#include <stdlib.h>
struct Node 
{
     int data;
     struct Node *next;
};

int main(){
     struct Node *head;
     head = (struct Node *)malloc(sizeof(struct Node));
     head->data=100;
     printf(head->data);
     printf("hello world");
}