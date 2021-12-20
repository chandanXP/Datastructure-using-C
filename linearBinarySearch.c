//Linear search and Binary Search

//Name: Chandan, Rollno: 045

#include<stdio.h>

int linearSearch(int arr[], int size, int element){
     for (int i =0; i < size; i++){
          if(arr[i]== element){
               return 1;
          }
     }
     return -1;
}

int binarySearch(int arr[], int size, int element){
     int low,mid,high;
     low=0;
     high = size-1;
     //Keep searching intil low <= high converges
     while(low<=high){
          mid = (low+high)/2; 
          if(arr[mid]==element){
               return mid;
          }
          if(arr[mid]<element){
               low=mid+1;
               
          }
          else{
               high = mid-1;
          }
     //Searching ends
     }
     return -1;

}


int main(){
     // //unsorted array for linear search
     // int arr[] = {1,3,5,7,9,56,4,35432,56,32};
     // int size = sizeof(arr)/sizeof(int);//to find the size of array

     //Sorted array for linear search
     int arr[] = {1,3,5,7,9,56,574,594,599,632};
     int size = sizeof(arr)/sizeof(int);

     int element = 7;
     // int searchIndex = linearSearch(arr,size,element);
     int searchIndex = binarySearch(arr,size,element);

     printf("The element %d was found at index %d \n", element, searchIndex);
     return 0;
}