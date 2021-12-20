#include<stdio.h>
#include<string.h>

struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
};

void show(struct employee emp){
     printf("The Code of employee is : %d\n", emp.code);
     printf("The Salary of employee is : %f\n", emp.salary);
     printf("The Name of employee is : %s\n", emp.name);
};

int main(){
     struct employee e1;
     struct employee *ptr;

     ptr = &e1;
     // (*ptr).code = 101;
     ptr->code =102;//this will also work. '->' is known as arrow operator
     ptr->salary = 20.12;
     strcpy(ptr->name, "Chandan");
     show(e1);
     return 0;
}