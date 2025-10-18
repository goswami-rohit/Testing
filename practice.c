#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>
//#include <math.h>

// DSA 

// Linked List: 
//Inserting a new node(block of memory that stores data) at the beginning of a list
// typedef struct Node
// {
//     int data;
//     struct Node* next;
// }Node;

// Node* head; // global var, the head node

// void Insert(int x){
//     // 1. Create a new Node using the alias 'Node'
//     Node* temp = (Node*)malloc(sizeof(Node)); 
    
//     // 2. Set the data of the new node
//     temp->data = x;
    
//     // 3. Link the new node to the old head
//     temp->next = head; 
    
//     // 4. Update the head to point to the new node
//     head = temp;
// };

// void Print(){
//     Node* temp = head;
//     printf("List is: ");
//     while (temp != NULL)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
    
// };

// int main(){
//     head = NULL;

//     printf("Enter how many numbers: \n");

//     int n,x;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the number: \n");
//         scanf("%d", &x);

//         Insert(x);
//         Print();
//     }
    
//     return 0;
// };

// Inserting a node at the nth(any random) position of the list

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;

// Node* head;

// void Insert(int data, int n){ // the actual data and the position of that data
//     Node* temp1 = (Node*)malloc(sizeof(Node));
//     temp1->data = data;
//     temp1->next = NULL;

//     // case: when we want to insert at head (1st pos)
//     if (n == 1)
//     {
//         temp1->next = head;
//         head = temp1;
//         return;
//     }

//     // case: when we want to insert at nth pos
//     Node* temp2 = head;
//     for (int i = 0; i < n-2; i++) // loop n-2 times but we go to n-1th node
//     {
//         temp2 = temp2->next;
//     }
//     temp1->next = temp2->next;
//     temp2->next = temp1;
// };

// void Print(){
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// };

// int main(){
//     head = NULL; // empty list

//     Insert(2,1); // insert int 2 at position 1
//     Insert(3,2); // insert int 3 at position 2
//     Insert(4,1); // insert int 4 at position 1
//     Insert(5,2); // insert int 5 at position 2

//     Print();

//     return 0;
// };

// Deleting a node at a nth position in a list

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;

// struct Node* head;

// void Insert(int data){
//     // Using calloc instead of malloc: allocates memory AND sets it to zero
//     Node* temp = calloc(1, sizeof(Node)); 
    
//     if (temp == NULL) {
//         printf("Memory allocation failed!\n");
//         return;
//     }
    
//     temp->data = data;
//     temp->next = head; 
//     head = temp;
// };

// void Print(){
//     Node* temp = head;
//     printf("List is: ");
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// };

// void Delete(int n){
//     struct Node* temp1 = head;

//     // Handle n=1 Deletion (The Head)
//     if (n == 1)
//     {
//         head = temp1->next; // head now points to 2nd node
//         free(temp1);
//         return;
//     }
    
//     // 1. Traverse to the (n-1)-th node
//     for (int i = 0; i < n-2; i++)
//     {
//         // Safety check: if we hit the end before n-1, it's an invalid position.
//         if (temp1 == NULL)
//         {
//             printf("Error position invalid %d\n", n);
//             return;
//         }
//         temp1 = temp1->next;
//     }

//     // 2. Perform the deletion (now temp1 is at n-1)
//     struct Node* temp2 = temp1->next; // temp2 points to the nth node (the one to delete)

//     if (temp2 == NULL)
//     {
//         printf("Error position invalid %d\n", n);
//         return;
//     }
//     temp1->next = temp2->next;
//     free(temp2);
    
// };

// int main(){
//     head = NULL;
//     Insert(2);
//     Insert(4);
//     Insert(6);
//     Insert(5);

//     printf("Initial ");
//     Print();

//     int n;
//     printf("Enter position (1-4) to delete: ");
//     scanf("%d",&n); 

//     Delete(n);
//     printf("Result: ");
//     Print();

//     return 0;
// };

// reversal of linked list : iteration method

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;
// struct Node* head;

// struct Node* Insert(struct Node* head, int data){
//     Node* temp = (Node*)malloc(sizeof(Node));

//     temp->data = data;

//     temp->next = head;

//     head = temp;
//     return head;
// };

// void Print(struct Node* head){
//     Node* temp = head;
//     printf("List is: ");

//     while (temp != NULL)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
    
// };

// struct Node* Reverse(struct Node* head){
//     struct Node *current, *prev, *next;
//     current = head;
//     prev = NULL;

//     while (current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     head = prev;
//     return head;
    
// };

// int main(){

//     struct Node* head = NULL;
//     head = Insert(head,1);
//     head = Insert(head,2);
//     head = Insert(head,3);
//     head = Insert(head,4);

//     printf("Original ");
//     Print(head);

//     head = Reverse(head);

//     printf("Reverse " );
//     Print(head);

//     return 0;
// };

// reversal of linked list : recursion method

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void Print(struct Node* p){
    
    if (p == NULL) return;
    Print(p->next); // recursive call
    printf("%d ", p->data);
};

struct Node* Insert(Node* head, int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        return temp;
    }
    else
    {
        Node* temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp; 
    }
    return head;
};

int main(){

    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);

    Print(head);

    return 0;
};