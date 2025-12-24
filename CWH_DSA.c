#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// typedef struct Node
// {
//     int data;
//     struct Node *next; // self-referencing pointer
//     struct Node *prev;
// } Node;

// struct Node *head;
// struct Node *second;
// struct Node *third;
// struct Node *fourth;
// struct Node *fifth;

// void CreateLinkedList(){
//     head = (Node *)malloc(sizeof(Node));
//     second = (Node *)malloc(sizeof(Node));
//     third = (Node *)malloc(sizeof(Node));
//     fourth = (Node *)malloc(sizeof(Node));
//     fifth = (Node *)malloc(sizeof(Node));

//     // first & second node linked
//     head->data = 7;
//     head->next = second;

//     // second & third node linked
//     second->data = 14;
//     second->next = third;

//     // third & fourth node linked
//     third->data = 13;
//     third->next = fourth;

//     // fourth & fifth node linked
//     fourth->data = 83;
//     fourth->next = fifth;

//     // fifth node points to NULL
//     fifth->data = 221;
//     fifth->next = NULL; // terminate Linked list at last node
// };

// void LinkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }

// };

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

// void CircularLinkedList(){
//     head = (Node *)malloc(sizeof(Node));
//     second = (Node *)malloc(sizeof(Node));
//     third = (Node *)malloc(sizeof(Node));
//     fourth = (Node *)malloc(sizeof(Node));
//     fifth = (Node *)malloc(sizeof(Node));

//     // first & second node linked
//     head->data = 7;
//     head->next = second;

//     // second & third node linked
//     second->data = 14;
//     second->next = third;

//     // third & fourth node linked
//     third->data = 13;
//     third->next = fourth;

//     // fourth & fifth node linked
//     fourth->data = 83;
//     fourth->next = fifth;

//     // fifth node points to head Node
//     fifth->data = 221;
//     fifth->next = head; // circle back to the head node
// };

// void CircularLinkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     //incrementing head manually by 1 so while loop activates
//     // using do-while
//     do{
//         printf("Element is: %d\n", ptr->data);
//         ptr = ptr->next;
//     }while(ptr != head);

// };

// struct Node* insertAtHeadInCirclularLL(struct Node *head, int data){
//     struct Node* ptr = (Node*)malloc(sizeof(Node));
//     ptr->data = data;

//     struct Node* p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     };
//     // here p points to the last node of the circular LL

//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// };

// void DoublyLinkedList(){
//     head = (Node *)malloc(sizeof(Node));
//     second = (Node *)malloc(sizeof(Node));
//     third = (Node *)malloc(sizeof(Node));
//     fourth = (Node *)malloc(sizeof(Node));
//     fifth = (Node *)malloc(sizeof(Node));

//     // first & second node linked
//     head->data = 7;
//     head->prev = NULL;
//     head->next = second;

//     // second & third node linked
//     second->data = 14;
//     second->prev = head;
//     second->next = third;

//     // third & fourth node linked
//     third->data = 13;
//     third->prev = second;
//     third->next = fourth;

//     // fourth & fifth node linked
//     fourth->data = 83;
//     fourth->prev = third;
//     fourth->next = fifth;

//     // fifth node points to head Node
//     fifth->data = 221;
//     fifth->prev = fourth;
//     fifth->next = NULL;
// };

// void DoublyLinkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     struct Node *last = NULL;

//     // forward traversal
//     while (ptr != NULL)
//     {
//         printf("Element is: %d\n", ptr->data);
//         last = ptr;
//         ptr = ptr->next;
//     }

//     //backward traversal
//     while (last != NULL)
//     {
//         printf("Element is: %d\n", last->data);
//         last = last->prev;
//     }

// };

// int main()
//{
//  Linked List creation
// CreateLinkedList();

// Inserting Node
// head = InsertDataAtHead(head, 71);
// head = InsertDataInMiddle(head, 25, 3);
// head = InsertDataAtSpecificNode(head, second, 2);
// head = InsertDataAtEnd(head, 62);

// Deleting Node
// head = DeleteAtHead(head);
// head = DeleteInMiddle(head, 2);
// head = DeleteSpecificNode(head, 100);
// head = DeleteAtEnd(head);

// Circular Linked List
// CircularLinkedList();

// inserting in circular LL
// head = insertAtHeadInCirclularLL(head, 48);

// Doubly Linked List
// DoublyLinkedList();

// printing the list
// LinkedListTraversal(head);
// CircularLinkedListTraversal(head);
// DoublyLinkedListTraversal(head);

// return 0;
//};

// ----------------------------------
// stack using array
// typedef struct Stack
// {
//     int size;
//     int top;
//     int *arr;
// }Stack;

// int isEmpty(Stack *ptr){
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// };
// int isFull(Stack *ptr){
//     if (ptr->top == (ptr->size - 1))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// };
// int Push(Stack *ptr, int var){
//     if (isFull(ptr))
//     {
//         printf("The stack is full/stack overflow");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = var;
//     }
//     return 0;
// };
// int Pop(Stack *ptr){
//     if (isEmpty(ptr))
//     {
//         printf("The stack is empty/stack underflow");
//     }
//     else
//     {
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
//     return 0;
// };
// int Peek(Stack *Sp, int i){
//     if ((Sp->top - i + 1) < 0)
//     {
//         printf("Not valid position\n");
//         return -1;
//     }
//     else
//     {
//         return (Sp->arr[Sp->top -i + 1]);
//     }

//     return 0;
// };

// int main(){
//     //Stack S;
//     Stack *Sp = (Stack*)malloc(sizeof(Stack));
//     Sp->size = 5;
//     Sp->top = -1;
//     Sp->arr = (int*)calloc(Sp->size, sizeof(int));

//     // pushing an element
//     printf("Before Push:%d\n", isEmpty(Sp));
//     printf("Before Push:%d\n", isFull(Sp));
//     Push(Sp, 11);
//     Push(Sp, 12);
//     Push(Sp, 13);
//     Push(Sp, 14);
//     Push(Sp, 15);
//     printf("After Push:%d\n", isEmpty(Sp));
//     printf("After Push:%d\n\n", isFull(Sp));

//     // popping an element
//     // printf("Before Pop:%d\n", isEmpty(Sp));
//     // printf("Before Pop:%d\n", isFull(Sp));
//     // printf("Popped %d:\n",Pop(Sp)); // last element gets popped first - LIFO since Stack
//     // printf("Popped %d:\n",Pop(Sp));
//     // printf("Popped %d:\n",Pop(Sp));
//     // printf("After Pop:%d\n", isEmpty(Sp));
//     // printf("After Pop:%d\n", isFull(Sp));

//     // peeking and element
//     //int varb = 2;
//     //printf("The value at pos %d is: %d\n", varb, Peek(Sp, varb));
//     // peeking all elements
//     for (int j = 0; j < (Sp->size); j++)
//     {
//         printf("The value at pos %d is: %d\n", j, Peek(Sp, j));
//     };

//     free(Sp->arr);
//     free(Sp);
//     return 0;
// };

// stack uisng Linked List
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }Node;

// int isEmpty(struct Node* top){
//     if (top == NULL)
//     {
//         return 1;
//     }

//     return 0;
// };
// int isFull(struct Node* top){
//     Node *p = (Node*)calloc(1, sizeof(Node));
//     if (p == NULL)
//     {
//         return 1;
//     }
//     free(p);
//     return 0;
// };

// struct Node* Push(struct Node *top, int x){
//     if (isFull(top))
//     {
//         printf("Stack Oveflow");
//     }
//     else
//     {
//         Node *n = (Node*)calloc(1, sizeof(Node));
//         n->data = x;
//         n->next = top;
//         top = n;
//         return top;
//     }
//     return 0;
// };
// int Pop(struct Node **top){
//     if (isEmpty(*top))
//     {
//         printf("Stack Undeflow");
//     }
//     else
//     {
//         Node *n = *top;
//         *top = (*top)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
//     return 0;
// };
// int Peek( Node *top, int pos){
//     struct Node *ptr = top;
//     for (int i = 0; (i < pos-1 && ptr != NULL); i++)
//     {
//         ptr = ptr->next;
//     }
//     if (ptr != NULL)
//     {
//         return (ptr->data);
//     }
//     else
//     {
//         return -1;
//     }

//     return 0;
// };

// void LLTraversal(Node *ptr){
//     while (ptr != NULL)
//     {
//         printf("Element :%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// };

// int main(){
//     Node *top = NULL;
//     top = Push(top, 12);
//     top = Push(top, 13);
//     top = Push(top, 14);
//     top = Push(top, 15);

//     //int element = Pop(&top);
//     //printf("popped element is: %d\n", element);
//     //LLTraversal(top);
//     int peekpos;
//     printf("Enter Pos to Peek at: ");
//     scanf("%d", &peekpos);

//     int peekval = Peek(top, peekpos);
//     printf("\nPeek val=%d at peek pos=%d\n", peekval, peekpos);

//     return 0;
// };

// infix/prefix/postfix in stack
// typedef struct Stack
// {
//     int size;
//     int top;
//     char *arr;
// }Stack;

// int isEmpty(Stack *ptr){
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// };
// int isFull(Stack *ptr){
//     if (ptr->top == (ptr->size - 1))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// };
// int Push(Stack *ptr, int var){
//     if (isFull(ptr))
//     {
//         printf("The stack is full/stack overflow");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = var;
//     }
//     return 0;
// };
// int Pop(Stack *ptr){
//     if (isEmpty(ptr))
//     {
//         printf("The stack is empty/stack underflow");
//     }
//     else
//     {
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
//     return 0;
// };

// int stackTop(Stack *sp){
//     return (sp->arr[sp->top]);
// };
// int stackBottom(Stack *sp){
//     return (sp->arr[0]);
// };

// int isOperator(char ch){
//     if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//     {
//         return 1;
//     }
//     else
//         return 0;
// };

// int precedence(char ch){
//     if (ch == '*' || ch == '/')
//     {
//         return 3;
//     }
//     else if (ch == '+' || ch == '-')
//     {
//         return 2;
//     }
//     else
//         return 0;
// };

// char *InfixToPostfix(char *infix){
//     Stack *sp = (Stack*)malloc(sizeof(Stack));
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char*)malloc(sp->size*sizeof(char));

//     char *postfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
//     int i = 0, j = 0;
//     while (infix[i] != '\0')
//     {
//         if (!isOperator(infix[i]))
//         {
//             postfix[j] = infix[i];
//             j++; i++;
//         }
//         else
//         {
//             if (precedence(infix[i]) > precedence(stackTop(sp)))
//             {
//                 Push(sp, infix[i]);
//                 i++;
//             }
//             else
//             {
//                 postfix[j] = Pop(sp);
//                 j++;
//             }
//         }
//     }
//     while (!isEmpty(sp))
//     {
//         postfix[j] = Pop(sp);
//         j++;
//     }
//     postfix[j] = '\0';

//     free(sp->arr);
//     free(sp);

//     return postfix;
// };

// int main(){
//     char *infix = "a-b+k*p*p+(ab)";
//     char *postfix = InfixToPostfix(infix);
//     printf("postfix is %s\n", postfix);

//     free(postfix);
//     return 0;
// }

// queue using arrays
// typedef struct queue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// }queue;

// int isFull(queue *q){
//     if (q->r == (q->size-1))
//     {
//         return 1;
//     }
//     return 0;
// };
// int isEmpty(queue *q){
//     if (q->r == q->f)
//     {
//         return 1;
//     }
//     return 0;
// };

// void enqueue(queue *q, int val){
//     if (isFull(q))
//     {
//         printf("Queue Overflow.");
//     }
//     else
//     {
//         q->r++;
//         q->arr[q->r] = val;
//     }

// };
// int dequeue(queue *q){
//     int a = -1;
//     if (isEmpty(q))
//     {
//         printf("Queue Undeflow.");
//     }
//     else
//     {
//         q->f++;
//         a = q->arr[q->f];
//     }
//     return a;
// };

// int main(){
//     queue q;
//     q.size = 5;
//     q.f = q.r = -1;
//     q.arr = (int*)malloc(q.size*sizeof(int));

//     // enqueue
//     enqueue(&q, 12);
//     enqueue(&q, 13);
//     enqueue(&q, 14);
//     enqueue(&q, 15);
//     enqueue(&q, 16);

//     // dequeue
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));

//     if (isEmpty(&q))
//     {
//         printf("Empty queue.");
//     }
//     else if (isFull(&q))
//     {
//         printf("Full queue");
//     }

//     free(q.arr);
//     return 0;
// };

// cicular queue
// typedef struct circularQueue{
//     int size;
//     int f;
//     int r;
//     int *arr;
// }circularQueue;

// int isFull(circularQueue *q){
//     if ((q->r+1)%q->size == q->f)
//     {
//         return 1;
//     }
//     return 0;
// };
// int isEmpty(circularQueue *q){
//     if (q->r == q->f)
//     {
//         return 1;
//     }
//     return 0;
// };

// void enqueue(circularQueue *q, int val){
//     if (isFull(q))
//     {
//         printf("Queue Overflow.");
//     }
//     else
//     {
//         q->r = (q->r+1)%q->size;
//         q->arr[q->r] = val;
//     }

// };
// int dequeue(circularQueue *q){
//     int a = -1;
//     if (isEmpty(q))
//     {
//         printf("Queue Undeflow.");
//     }
//     else
//     {
//         q->f = (q->f+1)%q->size;
//         a = q->arr[q->f];
//     }
//     return a;
// };

// int main(){
//     circularQueue q;
//     q.size = 5;
//     q.f = q.r = 0;
//     q.arr = (int*)malloc(q.size*sizeof(int));

//     // enqueue
//     enqueue(&q, 12);
//     enqueue(&q, 13);
//     enqueue(&q, 14);
//     enqueue(&q, 15);
//     enqueue(&q, 16);

//     // dequeue
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));
//     printf("Deque %d from queue\n", dequeue(&q));

//     // enqueue again in empty space - circular
//     enqueue(&q, 22);
//     enqueue(&q, 24);
//     enqueue(&q, 26);
//     enqueue(&q, 28);

//     if (isEmpty(&q))
//     {
//         printf("Empty queue.");
//     }
//     else if (isFull(&q))
//     {
//         printf("Full queue");
//     }

//     free(q.arr);
//     return 0;
// };

// queue using Linked List
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;
// struct Node *f = NULL;
// struct Node *r = NULL;
// void enqueue(int val)
// {
//     Node *n = (Node *)malloc(sizeof(Node));
//     if (n == NULL)
//     {
//         printf("Queue full");
//     }
//     else
//     {
//         n->data = val;
//         n->next = NULL;
//         if (f == NULL)
//         {
//             f = r = n;
//         }
//         else
//         {
//             r->next = n;
//             r = n;
//         }
//     }
    
// };
// int dequeue()
// {
//     int val = -1;
//     Node *ptr = f;
//     if (f == NULL)
//     {
//         printf("Queue empty");
//         return -1;
//     }
//     else
//     {
//         f = f->next;
//         val = ptr->data;
//     }
//     free(ptr);
//     return val;
// };
// void LinkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     enqueue(34);
//     enqueue(35);
//     enqueue(365);
//     enqueue(347);
//     enqueue(31);
//     LinkedListTraversal(f);
//     printf("Dequeing elements %d\n", dequeue());
//     LinkedListTraversal(f);
//     printf("Dequeing elements %d\n", dequeue());
//     printf("Dequeing elements %d\n", dequeue());
//     LinkedListTraversal(f);

//     return 0;
// };

// -----------------------------------
// binary tress
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

int main(){

    return 0;
};
