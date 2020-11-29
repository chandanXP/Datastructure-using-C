#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     char top;
     char *arr;
};

int isFull(struct stack*ptr){
     if(ptr->top == ptr->size-1){
          return 1;
     }
     else{
          return 0;
     }

}

int isEmpty(struct stack*ptr){
     if(ptr->top == -1){
          return 1;
     }
     else{
          return 0;
     }

}

char push(struct stack*ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        
    }
}

char pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
}



int parenthesisMatch(char*exp){
     // create an initialize stack
     struct stack* sp;
     sp->size=100;
     sp->top= -1;
     sp->arr = (char*)malloc(sp->size * sizeof(char));


     for (int i = 0; exp[i]!='\0'; i++)
     {
          if (exp[i]=='(')
          {
               push(sp,'(');
          }
          else if (exp[i]==')')
          {
               if (isEmpty(sp))
               {
                    return 0;
               }
               pop(sp); 
          }
          
     }
     if (isEmpty(sp))
     {
          return 1;
     }
     else{
          return 0;
     }
     
     
}

int main(){
     // char*exp = "8*((9)";//Parenthesis is not matching
     char*exp = "(8)*((9))";//Parenthesis is matching
     //check if Parenthesis is matching
     if(parenthesisMatch(exp)){
          printf("The Parenthesis is matching.\n");
     }
     else{
          printf("The Parenthesis is not matching.\n");
     }

  
     return 0;
}

//This program will only give the parenthesis of an expression not give the validity of an expression