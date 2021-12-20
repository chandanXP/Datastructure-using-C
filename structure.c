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
     
     e1.salary=4000.123;
     e1.code=50;
     // e1.name="chandan";//wrong way
     strcpy(e1.name, "Chandan");

     printf("Code: %d\n", e1.code);
     printf("Name: %s\n", e1.name);
     printf("Salary: %.3f\n", e1.salary);
     
     return 0;
}
//First define the your custom structure.
//Then emplement your value to the structure