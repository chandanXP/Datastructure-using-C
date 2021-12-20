#include<stdio.h>
#include<string.h>

typedef struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
} emp;

//Note: we can use the 'typedef' keyword to create an 
//alias(short name) name for data types in C. It is commonly used with Structure.

void show(emp emp1){
     printf("The Code of employee is : %d\n", emp1.code);
     printf("The Salary of employee is : %f\n", emp1.salary);
     printf("The Name of employee is : %s\n", emp1.name);
}
 

int main(){
     //Delcaring e1 and ptr
     emp e1;
     emp *ptr;
     //pointing ptr to e1
     ptr = &e1;
      
     ptr->code =102;//this will also work. '->' is known as arrow operator
     ptr->salary = 20.12;
     strcpy(ptr->name, "Chandan");
     show(e1);
     return 0;
}