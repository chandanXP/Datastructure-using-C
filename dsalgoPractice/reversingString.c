#include<stdio.h>
#include<string.h>

int main(){
     char string[10] ;
     int i=0,j;
     printf("Enter the String: \n");
     scanf("%s", string);
     int len = strlen(string);

     // printf("String you entered is: %s\n", string);
     printf("Size: %d\n", strlen(string));
     for(j=len; j>=i; j--){
          printf("%c", string[j-1]);
     }
     return 0;
}