//operations in stack and parenthesis

//Name: Chandan, RollNo: 045

#include <stdio.h>
#include<stdlib.h>
// you have to write the required header file name even it is also a header file.


//creating stack ADT
struct stack{
     int size;//size of the stack
     char top;//positon of top value of the sack
     char *arr;//array, collection of data
};

int isFull(struct stack*ptr){//isFull is the function to check whether the stack is full or not
     if(ptr->top == ptr->size-1){//if the position of top value beacomes the last or equal to the size of stack  
          return 1;//return 1 means stack is full now
     }
     else{
          return 0;//return 0 means stack still have space
     }

}

int isEmpty(struct stack*ptr){//isEmpty is the function to check whether the stack is empty or not
     if(ptr->top == -1){//means it become less than 0 i.e, null
          return 1;//return -1 means stack is empty now
     }
     else{
          return 0;//return 0 means stack still not empty
     }

}

char push(struct stack*ptr, char val){//to push/add an element in the stack
    if(isFull(ptr)){// first we will check whether the stack is full or not, if full then we cant fill it further
        printf("Stack Overflow! Cannot push %d to the stack\n", val);//the message
    }
    else{
        ptr->top++;//increase the position of top by one step
        ptr->arr[ptr->top]=val;//the value we added is now the top of the array.
        
    }
}

char pop(struct stack*ptr){//to pop out  an element in the stack
    if(isEmpty(ptr)){// first we will check whether the stack is empty or not, if empty then we cant pop it further
        printf("Stack Underflow! Cannot pop from the stack\n");//the message
        return -1;//-1 means index is less than zero i.e, empty array
    }
    else{
        int val = ptr->arr[ptr->top];//passing the removed/poped value in 'val'
        ptr->top--;//decreasing position by one step
        return val;//return the poped value
        
    }
}



int parenthesisMatch(char*exp){//to check whether the statement is parenthesized or not
     // create an initialize stack
     struct stack* sp;
     sp->size=100;//size
     sp->top= -1;//top is null intially
     sp->arr = (char*)malloc(sp->size * sizeof(char));//intializing arr dynamically(in heap memory)


     for (int i = 0; exp[i]!='\0'; i++)//untill we get \0 on a string(end) 
     {
          if (exp[i]=='(')//if get open bracket
          {
               push(sp,'(');//push "(" (i.e, open braces) to stack
          }
          else if (exp[i]==')')//if get closing braces
          {
               if (isEmpty(sp))
               {
                    return 0;
               }
               pop(sp); //then pop out
          }
          
     }
     if (isEmpty(sp))//check whether it is empty or not
     {
          return 1;//if true
     }
     else{
          return 0;//if false
     }
     
     
}