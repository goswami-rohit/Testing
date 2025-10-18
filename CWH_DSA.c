#include <stdio.h>
#include <stdlib.h>

// 1. Array as an abstract data type
// typedef struct myArray
// {
//     int total_size;
//     int used_size;
//     int *ptr;
// }myArray;

// void createArray(myArray* a, int tSize, int uSize ){
//     a->total_size = tSize;
//     a->used_size = uSize;
//     a->ptr = (int*)malloc(tSize*sizeof(int));
// };

// void show(myArray* a){
//     for (int i = 0; i < a->used_size; i++)
//     {
//         printf("%d\n", (a->ptr)[i]);
//     }
    
// };

// void setVal(myArray* a){
//     int n;
//     for (int i = 0; i < a->used_size; i++)
//     {
//         printf("Enter element %d:", i);
//         (a->ptr)[i] = n;
//         scanf("%d", &n);
//     }
    
// };

// int main(){

//     myArray marks;
//     createArray(&marks, 10, 5);
//     setVal(&marks);
//     show(&marks);

//     return 0;
// };

