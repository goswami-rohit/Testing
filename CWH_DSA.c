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

// Linear & Binary Search
// int LinearSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// };

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;

    // start searching
    while (low <= high)
    {
        mid = (low + high) / 2; // in case of decimal, the integer value will be auto printed by default
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        // searching ends
    };
    return -1;
};

int main()
{
    // Unsorted arr for Linear Search
    // int arr[] = {1, 2, 3, 34, 215, 16, 72, 18, 9, 10, 23, 889, 908, 113, 21, 20, 55, 2, 98, 34, 5, 6, 7};
    // int arrSize = sizeof(arr) / sizeof(int);

    // Sorted arr for Binary Search
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int arrSize = sizeof(arr) / sizeof(int);
    int element = 15;
    int searchIndex = BinarySearch(arr, arrSize, element);
    printf("The element %d was found @ index %d\n", element, searchIndex);

    return 0;
};