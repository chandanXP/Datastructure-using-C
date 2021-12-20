#include<stdio.h>
#include<string.h>

struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
};

int main(){
     struct employee facebook[100];//array of employee
     facebook[0].code=10;
     strcpy(facebook[0].name, "Chandan");
     facebook[0].salary=10.70;

     facebook[1].code=11;
     strcpy(facebook[1].name, "Rahul");
     facebook[1].salary=100.70;

     facebook[2].code=13;
     strcpy(facebook[2].name, "Ankit");
     facebook[2].salary=12.70;

     return 0;
}