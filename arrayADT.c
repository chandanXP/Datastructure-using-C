#include<stdio.h>
#include<stdlib.h>//for malloc

struct myArray{
     int totalSize;
     int usedSize;
     int *ptr; //has memory adress of our structure (of first memory block)

};

void createArray(struct myArray * a, int tSize, int uSize){
//void function which will take the adress of a structure, total size, and used size
     // (*a).totalSize = tSize;//adress of total size to tSize
     // (*a).usedSize = uSize;//adress of used size to uSize
     // (*a).ptr = (int *) malloc(tSize*sizeof(int)); 
     //base adress of our structure = the structure memory we allocated in heap.(pasted in heap)

     a->totalSize = tSize; 
     a->usedSize = uSize; 
     a->ptr = (int *) malloc(tSize*sizeof(int)); 
}

void show(struct myArray *a){
     for (int i = 0; i < a->usedSize; i++)
     {
          printf("%d\n", (a->ptr)[i]);//base adress os structure[Value on index i]
     }
   
}

void setVal(struct myArray *a){
     int n;
     for (int i = 0; i < a->usedSize; i++)
     {
          printf("Enter element %d: ", i);
          scanf("%d", &n);
          (a->ptr)[i] = n;
     }
   
}

int main(){
     struct myArray marks;
     createArray(&marks, 100, 2);//we sent the adress of "marks", total size, used size
     //createArray wil request the memory to heap. and update the structure using only address of structure.
     printf("We are running setVal function now.\n");
     setVal(&marks);
     printf("We are running show function now.\n");
     show(&marks);

     return 0;
}