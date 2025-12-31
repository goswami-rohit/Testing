#include <stdio.h>
#include <stdlib.h>

// bubble sort algo
// void printArr(int *arr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// };
// void bubbleSort(int *arr, int n){
//     int temp;
//     int isSorted = 0; // false by default

//     for (int i = 0; i < (n-1); i++) // for no.of passes
//     {
//         printf("On pass no.%d\n", i+1);
//         isSorted = 1; // true if doesn't go into the below loop
//         for (int j = 0; j < (n-1-i); j++) // for no.of comparisions in each pass
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 isSorted = 0; //else its false
//             }
            
//         }
//         if (isSorted)
//         {
//             return;
//         }
        
//     }
    
// };
// int main(){

//     //int arr[] = {12, 54, 65, 7, 23, 9};
//     //int arr[] = {1, 2, 3, 4, 5, 6};
//     int arr[] = {2, 3, 4, 5, 7, 8, 6, 9};
//     int n = 8;

//     printArr(arr, n); // print before sort
//     bubbleSort(arr, n);
//     printArr(arr, n); // print after sort

//     return 0;
// };

