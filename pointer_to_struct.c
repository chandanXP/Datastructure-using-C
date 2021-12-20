#include<stdio.h>
#include<string.h>

struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
};

int main(){
     struct employee e1;
     struct employee *ptr;

     ptr = &e1;
     ptr->code =102;//this will also work. '->' is known as arrow operator
     (*ptr).code = 101;
     printf("%d", e1.code);
     return 0;
}
//Note: Arrow operator is ease to get acess to the variables in structor.
