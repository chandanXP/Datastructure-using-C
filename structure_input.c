#include<stdio.h>

struct employee//custom datatype initialization
{
     int code;
     float salary;
     char name[10];
};
//This program will only takes input.
int main(){
     struct employee e1, e2, e3;
     //For e1
     printf("Enter the value for code of e1: ");
     scanf("%d", &e1.code);
     printf("Enter the value for salary of e1: ");
     scanf("%f", &e1.salary);
     printf("Enter the value for name of e1: ");
     scanf("%s", e1.name);
     //we dont need to add '&' in case of char beacause first character already holds the adress of a string.


     //for e2
     printf("Enter the value for code of e2: ");
     scanf("%d", &e2.code);
     printf("Enter the value for salary of e2; ");
     scanf("%f", &e2.salary);
     printf("Enter the value for name of e2; ");
     scanf("%s", e2.name);


     //for e3
     printf("Enter the value for code of e3: ");
     scanf("%d", &e3.code);
     printf("Enter the value for salary of e3: ");
     scanf("%f", &e3.salary);
     printf("Enter the value for name of e3: ");
     scanf("%s", e3.name);

     return 0;
}