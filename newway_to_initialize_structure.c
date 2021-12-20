#include<stdio.h>
#include<string.h>


struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
};

int main(){
     struct employee chandan = {100, 34.44, "Chandan"};

     printf("Code is: %d\n", chandan.code);
     printf("Salary is: %f\n", chandan.salary);
     printf("Name is: %s\n", chandan.name);
     return 0;
}