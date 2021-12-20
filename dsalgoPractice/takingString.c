#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[100];
    //scanf("%s", &line);//will read a string value and store it in the variable called line
    scanf("%[^\n]",line); // will read the whole sentence(group of string) and store it in the variable called line
    printf("Hello,World\n");
    printf("%s",line);
    return 0;
}