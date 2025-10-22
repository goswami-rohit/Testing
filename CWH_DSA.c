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

// int BinarySearch(int arr[], int size, int element)
// {
//     int low, mid, high;
//     low = 0;
//     high = size-1;

//     // start searching
//     while (low <= high)
//     {
//         mid = (low + high) / 2; // in case of decimal, the integer value will be auto printed by default
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         else if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else if (arr[mid] > element)
//         {
//             high = mid - 1;
//         }
//         // searching ends
//     };
//     return -1;
// };

// int main()
// {
//     // Unsorted arr for Linear Search
//     // int arr[] = {1, 2, 3, 34, 215, 16, 72, 18, 9, 10, 23, 889, 908, 113, 21, 20, 55, 2, 98, 34, 5, 6, 7};
//     // int arrSize = sizeof(arr) / sizeof(int);

//     // Sorted arr for Binary Search
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     int arrSize = sizeof(arr) / sizeof(int);
//     int element = 15;
//     int searchIndex = BinarySearch(arr, arrSize, element);
//     printf("The element %d was found @ index %d\n", element, searchIndex);

//     return 0;
// };

// Linked Lists

typedef struct Node
{
    int data;
    struct Node *next; // self-referencing pointer
} Node;

struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;

void CreateLinkedList(){
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));
    fifth = (Node *)malloc(sizeof(Node));

    // first & second node linked
    head->data = 7;
    head->next = second;

    // second & third node linked
    second->data = 14;
    second->next = third;

    // third & fourth node linked
    third->data = 13;
    third->next = fourth;

    // fourth & fifth node linked
    fourth->data = 83;
    fourth->next = fifth;

    // fifth node points to NULL
    fifth->data = 221;
    fifth->next = NULL; // terminate Linked list at last node
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

};

// Inserting data at head 
// struct Node*  InsertDataAtHead(struct Node *head, int data){
//     struct Node* ptr = (Node*)malloc(sizeof(Node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// };

// // Inserting data in middle randomly 
// struct Node*  InsertDataInMiddle(struct Node *head, int data, int index){
//     struct Node* ptr = (Node*)malloc(sizeof(Node));
//     struct Node* p = head;
//     int i = 0;
//     while (i != index-1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// };

// // Inserting data at specific node
// struct Node*  InsertDataAtSpecificNode(struct Node *head, struct Node *prevNode, int data){
//     // A pointer will be given in this case pointing to a node
//     struct Node* ptr = (Node*)malloc(sizeof(Node));
//     ptr->data = data;

//     ptr->next = prevNode->next;
//     prevNode->next = ptr;

//     return head;
// };

// // Inserting data at end
// struct Node*  InsertDataAtEnd(struct Node *head, int data){
//     struct Node* ptr = (Node*)malloc(sizeof(Node));
//     ptr->data = data;
//     struct Node* p = head;

//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// };

// Deleting Node at head
// struct Node* DeleteAtHead(struct Node* head){
//     struct Node* ptr = head;
//     head = head->next;
//     free(ptr);

//     return head;
// };

// // Deleting Node in between randomly 
// struct Node* DeleteInMiddle(struct Node* head, int index){
//     struct Node* p = head;
//     struct Node* q = head->next;
//     for (int i = 0; i < (index-1); i++)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
    
//     return head;
// };

// // Deleting specific given Node in between
// struct Node* DeleteSpecificNode(struct Node* head, int value){
//     struct Node* p = head;
//     struct Node* q = head->next;
//     while (q->data != value && q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     if (q->data == value)
//     {
//         p->next = q->next;
//         free(q);
//     }
//     else
//     {
//         printf("\nNo such element found\n");
//     }

//     return head;
// };

// // Deleting Node at the end
// struct Node* DeleteAtEnd(struct Node* head){
//     struct Node* p = head;
//     struct Node* q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);

//     return head;
// };

int main()
{
    // Linked List creation
    CreateLinkedList();

    //Inserting Node
    //head = InsertDataAtHead(head, 71);
    //head = InsertDataInMiddle(head, 25, 3);
    //head = InsertDataAtSpecificNode(head, second, 2);
    //head = InsertDataAtEnd(head, 62);

    // Deleting Node
    //head = DeleteAtHead(head);
    //head = DeleteInMiddle(head, 2);
    //head = DeleteSpecificNode(head, 100);
    //head = DeleteAtEnd(head);

    // printing the list
    LinkedListTraversal(head);

    return 0;
};