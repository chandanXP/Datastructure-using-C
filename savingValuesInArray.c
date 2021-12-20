#include<stdio.h>

void insertInArr(){
     int data;
     int size = 5;
     int arr[size];
     for(size=0; size<=5; size++){
          printf("Enter the value: ");
          scanf("%d", &arr[data]);
          printf("The value you entered is: %d : ", arr[data]);
     }
     // printf("%d", arr[data]);
     for(size=0; size<=5; size++){
          printf("%d", arr[data]);
     }
     
     
     
     // size++;
}
// void val(int arr[]){
     
// }

int main(){
     // int data;
     // int max= 5;

     // int newArr[max];
     int newArr={1,3,5,7,9};
     int i;
     for(i=0; i<=5; i++){
          printf("%d", newArr[i]);
     }
     insertInArr();
     // val();
     return 0;
}