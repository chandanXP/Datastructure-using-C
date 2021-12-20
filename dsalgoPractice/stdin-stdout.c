#include<stdio.h>

int main(){
     // printf("Hello, world!", stdout);
     // fprintf(stdout, "Hello, world!");

     // fprintf(stderr, "Oops, something went wrong\n");
     // printf("Oops, something went wrong\n", stderr);

     int a, b, sum;
     scanf("%d %d", &a, &b,stdin);
     sum=a+b;
     printf("the sum of two number is: %d", sum, stdout);

     return 0;
}