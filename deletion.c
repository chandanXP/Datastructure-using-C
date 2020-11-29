#include<stdio.h>

int display(int arr[], int n)//n is the size of an array
{//Code for travesal
     for(int i = 0; i < n; i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
}

void indDeletion(int arr[], int size, int index){ 
     //Code for deletion
     for(int i = index; i < size-1; i++ ){
          arr[i] = arr[i+1]; //Element of index 2 is now element of index 1
     } 
}

int main(){
     int arr[100] = {7, 8, 12, 27, 88};
     int size = 5, element = 40, index = 1;
     display(arr, size);
     indDeletion(arr, size, index);
     size -=1;//we decerased the size by 1 because of the removal of a element from the array
     display(arr, size);
 
     return 0;
}