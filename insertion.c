#include<stdio.h>

int display(int arr[], int n)//n is the size of an array
{//Code for travesal
     for(int i = 0; i < n; i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){ 
     if(size >= capacity){
          printf("Insertion failed!");
          return 0;
     }
     for(int i = size-1; i >= index; i-- ){
          arr[i+1] = arr[i];//index 4th element is now index 5th element
     }
     arr[index] = element;
     size +=1;
     display(arr, size);
     
}

int main(){
     int arr[100] = {7, 8, 12, 27, 88};
     int size = 5, element = 40, index = 3;
     display(arr, size);
     indInsertion(arr, size, element, 100, index);
     // display(arr, size);
 
     return 0;
}