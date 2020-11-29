// // C program to reverse a string using stack 
// #include <stdio.h> 
// #include <string.h> 
// #include <stdlib.h> 
// #include <limits.h> 


// struct Stack 
// { 

//     int top; 

//     unsigned capacity; 

//     char* array; 
// }; 

// struct Stack* createStack(unsigned capacity) 
// { 

//     struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 

//     stack->capacity = capacity; 

//     stack->top = -1; 

//     stack->array = (char*) malloc(stack->capacity * sizeof(char)); 

//     return stack; 
// } 

// int isFull(struct Stack* stack) 

// { return stack->top == stack->capacity - 1; } 


// int isEmpty(struct Stack* stack) 

// { return stack->top == -1; } 

// void push(struct Stack* stack, char item) 
// { 

//     if (isFull(stack)) 

//         return; 

//     stack->array[++stack->top] = item; 
// } 

// char pop(struct Stack* stack) 
// { 

//     if (isEmpty(stack)) 

//         return INT_MIN; 

//     return stack->array[stack->top--]; 
// } 

// void reverse(char str[]) 
// {  

//     int n = strlen(str); 

//     struct Stack* stack = createStack(n); 

  

//     // Push all characters of string to stack 

//     int i; 

//     for (i = 0; i < n; i++) 

//         push(stack, str[i]); 

  

//     // Pop all characters of string and  

//     // put them back to str 

//     for (i = 0; i < n; i++) 

//         str[i] = pop(stack); 
// } 

  
// // Driver program to test above functions 

// int main() 
// { 

//     char str[] = "GeeksQuiz"; 
//     reverse(str); 
//     printf("Reversed string is %s", str);

//     return 0; 
// } 






/*
 * C Program to Insert Character/Word in any Desired Location 
 * in a String 
 */
#include <stdio.h>
#include <string.h>
 
void main()
{
    int i, j, count = 0, pos, flag = 0;
    char s1[100], s2[10], s3[100];
    char *ptr1, *ptr2, *ptr3;
 
    printf("\nenter the String:");
    scanf(" %[^\n]s", s1);
    printf("\nenter the string to be inserted:");
    scanf(" %[^\n]s", s2);
    printf("\nenter the position you like to insert:");
    scanf("%d", &pos);
 
    ptr1 = s1;
    ptr3 = s3;
    /*COPYING THE GIVEN STRING TO NEW ARRAY AND INSERTING THE STRING IN NEW ARRAY*/
    for (i = 0, j = 0;*ptr1 != '\0'; ptr1++, i++, j++, ptr3++)
    {
        s3[j] = s1[i];
        if (*ptr1 == ' ' && flag != 1)
            ++count;
        if (flag != 1 && count == pos - 1)
        {
            flag = 1;
            for(ptr2 = s2;*ptr2 != '\0'; ptr2++)
            {
                s3[++j] = *ptr2;
                ptr3++;
            }
            s3[++j] = ' ';
            ptr3++;
        }
    }
    s3[j] = '\0';
    printf("\nthe string after modification is\n\n %s\n", s3);
}