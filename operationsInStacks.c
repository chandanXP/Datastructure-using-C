//operations in stack and parenthesis
#include <stdio.h>
#include<stdlib.h>
#include "myStackADT.h"//You have to put your header file name in " "(quotes) no ';'


int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));//creating stack dynamically
    sp->size=10;//size of array
    sp->top= -1;//position of top, intially null
    sp->arr= (char *)malloc(sp->size* sizeof(int));//creating arr dynamically
    // printf("stack has been created successfully..\n");
    
    printf("Before pushing, Full: %d\n", isFull(sp));//message on calling isFull()
    printf("Before pushing, Empty: %d\n", isEmpty(sp));//message on calling isEmpty()
    
    push(sp, 56);//pushing 56
    push(sp, 55);//pushing 55
    push(sp, 54);//pushing 54
    push(sp, 53);//pushing 53
    push(sp, 52);//pushing 52
    push(sp, 51);//pushing 51
    push(sp, 50);//pushing 50
    push(sp, 49);//pushing 49
    push(sp, 48);//pushing 48
    push(sp, 47); //pushed, 10 values here
    push(sp, 46);//pushing 46
    
    printf("After pushing, Full: %d\n", isFull(sp));//message on calling isFull()
    printf("After pushing, Empty: %d\n", isEmpty(sp));//message on calling isEmpty()
    
    printf("Popped %d from the stack\n", pop(sp)); //calling pop(), Last in first out 



    char*exp = "(8)*((9))";//Parenthesis is matching
     //check if Parenthesis is matching
     if(parenthesisMatch(exp)){//parenthesisMatch()
          printf("The Parenthesis is matching.\n");//message
     }
     else{
          printf("The Parenthesis is not matching.\n");//message
     }
     
    return 0;
}