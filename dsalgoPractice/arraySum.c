// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
#include <stdio.h>
#include <conio.h>

// #include <stdlib.h>
// #include <string.h>

// void printVal();

void printVal(int *array[0]){
    printf("%d ", array[0]);
// return array[0];
    
}


int main(){
    
    int numOfElements=3;
//     printf("Enter the number of elements in array: \n");
//     scanf("%d", &numOfElements);
    
    int i=0;    
    int array[numOfElements];
    int a;
    while(numOfElements!=i){
        printf("Enter the values in Array: \n");
        scanf("%d", &array[i]);
        i++;
    }
    printVal(array[0]);

    
    printf("%d ", array[0]);    
    return 0;
}