#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// int main(){
//    int x,y,z;
//     x = 75;
//     y = 15;
//     printf("X: %d\n", x);
//     printf("Y: %d\n", y);
//     // z = x-y;
//     // printf("Difference is: %d\n", z);
//     // z = x*y;
//     // printf("Product is: %d\n", z);
//     z = x/y;
//     printf("Quotient is: %d\n", y); // printing Y will only give output of the y value...ooof

//     return 0;
// };

// int main(){
//     int x = 60, y = 15, z;
//     printf("X: %d\n", x);
//     printf("Y: %d\n", y);

//     z = x%y; // modulus operator
//     printf("Z is: %d", z);

//     return 0;
// };

// int main(){
//     unsigned cheque = 54321;
//     long time = 1234567890L; // seconds
//     unsigned days = time/(60*60*24);
//     int hours = (time%(60*60*24)/(60*60));
//     int minutes = (time%(60*60)/60);
//     int seconds = (time%60);
//     printf("I have waited a long time, (%ld seconds)\n", time);
//     printf("for my cheque for (Rs.%u/-), and now\n", cheque);
//     printf("I find it's unsigned\n");
//     printf("Almost %u days, %d hours, %d mins, %d sec\n", days, hours, minutes, seconds);

//     return 0;
// };

// int main()
// {

//     int p = 012345, q = 0x1234; /*p is in octal notation, q is in hex */
//     long octal_num = 012345670L, hex_num = 0X7BCDEF89L;

//     printf("As an octal number, hex_num = %lO\n", hex_num);
//     printf("As a decimal number, octal_num = %ld\n", octal_num);
//     printf("As a hexadecimal number, octal_num\n = %lx\n", octal_num);

//     return 0;
// };

// int main(){

//     int alpha = 'A', beta;
//     char gamma = 122;
//     beta = gamma - alpha;
//     printf("beta seen as in is: %d\n", beta);
//     printf("beta seen as char is: %c\n", beta);

//     return 0;
// };

// putchar() & getchar()
// int main()
// {
//     char keypressed;
//     printf("Type a lowercase letter <a-z>, press <CR>: ");

//     keypressed = getchar(); // gets lowercase char from keypress
//     printf("You pressed: ");

//     putchar(keypressed - 32); // puts uppercase char on terminal
//     putchar('\n');
//     /* converts to uppercase beacause
//     ASCII decimal equivalent is 32
//     less than for the corresponding
//     lower case character. */
//     return 0;
// };

// int main(){

//     int alpha = 'A', beta;
//     char gamma = 122;
//     beta = gamma - alpha;
//     unsigned char delta = alpha - gamma;
//     //printf("beta seen as in is: %d\n", beta);
//     //printf("beta seen as char is: %c\n", beta);
//     printf("delta seen as unsigned char is: %c\n", delta );
//     printf("delta seen as unsigned int is: %u\n", delta );
//     printf("delta seen as char is: %c\n", delta );
//     printf("delta seen as int is: %d\n", delta );

//     return 0;
// };

// int main()
// {
//     char keypressed;
//     printf("Type a lowercase letter <a-z>, press <CR>: ");

//     keypressed = getchar(); // gets lowercase char from keypress
//     printf("You pressed: ");
//     printf("The ASCII decimal value of the character is: %d\n", keypressed);

//     return 0;
// };

// int main(){

//     char a, b, c = 'd';
//     b = c/10;
//     a = b*b+1;
//     putchar(a);

//     return 0;
// };

// int main(){
//     int alpha = 077, beta = 0xabc, gamma = 123, q;
//     q = alpha + beta - gamma;
//     printf("%d\n", q);
//     q = beta / alpha;
//     printf("%d\n", q);
//     q = beta % gamma;
//     printf("%d\n", q);
//     q = beta / (alpha + gamma);
//     printf("%d\n", q);
//     return (0);
// };

// int main()
// {
//     int x, y, z;
//     x = 50 % (5 * (16 % 12 * (17 / 3)));
//     y = -2 * -3 % -4 / -5 - 6 + -7;
//     z = 8 / 4 / 2 * 2 * 4 * 8 % 13 % 7 % 3;

//     printf("X: %d\n", x);
//     printf("Y: %d\n", y);
//     printf("Z: %d\n", z);
// }

// int main()
// {
//     printf("%d\n", 5 > 3); // true prints 1, if false prints 0
//     printf("%d\n", 3 < 5);
//     printf("%d %d\n", (5 > 3) && (3 < 5), (5 > 3) || (3 < 5));
//     printf("%d %d\n", (1 > 0) * (1 < 0), 1 > 0 * 1 < 0);
//     return (0);
// }

// int main()
// {
//     int input, cycle_length = 0;
//     begin_again:
//         printf("Enter a positive trail number:");
//         scanf("%d", &input);
//         if (input <= 0) /* only a positive input permitted */
//             goto begin_again;
//             iterate:
//         if (input == 1)
//             goto finished;
//         if (input % 2 == 1) /* input was odd */
//             goto odd_input;
//         else /* input was even */
//             goto even_input;
//     odd_input:
//         input = input * 3 + 1;
//         cycle_length++;
//         goto iterate; /* Is this statement necessary ? */
//     even_input:
//         input /= 2;
//         cycle_length++;
//         goto iterate;
//     finished:
//         printf("1 appeared as the terminating digit \
//                 after %d iterations",cycle_length);
//     return (0);
// };

// float calculateMean(float data[], int n) {
//     float sum = 0.0f;
//     for (int i = 0; i < n; ++i) {
//         sum += data[i];
//     }
//     return sum / n;
// }
// float calculateStandardDeviation(float data[], int n, float mean) {
//     float sum_of_squared_diff = 0.0f;

//     for (int i = 0; i < n; ++i) {
//         // Calculate the difference from the mean
//         float diff = data[i] - mean;
//         // Square the difference and add to the sum
//         sum_of_squared_diff += diff * diff;
//     }
//     return sqrt(sum_of_squared_diff / n);
// }
// int main() {
//     int n, N;
//     float  numVal;

//     // 1. Get the number of elements
//     printf("--- Mean and Standard Deviation Calculator ---\n");
//     printf("Enter the number of floating point numbers (N): ");
//     N = scanf("%d", &n);
//     if (N != 1 || n <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1;
//     }

//     // Declare an array (Variable Length Array - VLA) to hold the numbers
//     float numbers[n];

//     // 2. Get the input numbers
//     printf("Enter %d numbers:\n", n);
//     for (int i = 0; i < n; ++i) {
//         printf("Number %d: ", i + 1);
//         // IMPORTANT: Use %%f for reading a float
//         numVal = scanf("%f", &numbers[i]);
//         if (numVal != 1) {
//             printf("Invalid input. Non-number detected. Exiting.\n");
//             return 1;
//         }
//     }

//     // 3. Calculate Mean
//     float mean = calculateMean(numbers, n);

//     // 4. Calculate Standard Deviation
//     float std_dev = calculateStandardDeviation(numbers, n, mean);

//     // 5. Print results, formatted to 4 decimal places
//     printf("\n--- Results ---\n");
//     printf("Total numbers (N): %d\n", n);
//     // IMPORTANT: Use %%.4f for printing a float
//     printf("Mean (Average): %.4f\n", mean);
//     printf("Standard Deviation (Population): %.4f\n", std_dev);

//     return 0;
// }

// #define MAX_SIZE 1000

// int main() {
//     char text[MAX_SIZE];
//     int length;

//     int letters = 0;
//     int digits = 0;
//     int whitespace = 0;
//     int others = 0;

//     printf("--- Character Classification Program ---\n");
//     printf("Enter the text you want to analyze (max %d chars):\n", MAX_SIZE - 1);

//     // Read input from the keyboard (stdin) into the 'text' array
//     // fgets is preferred over gets because it prevents buffer overflows.
//     if (fgets(text, MAX_SIZE, stdin) == NULL) {
//         printf("Error reading input.\n");
//         return 1;
//     }

//     // Determine the actual length of the string input
//     length = strlen(text);

//     // IMPORTANT NOTE: If fgets reads successfully, it includes the trailing newline character (\n).
//     // If you want to exclude the newline from analysis, you can adjust the length or loop boundary.
//     // For this demonstration, we will analyze the entire buffer contents.
//     printf("\nAnalyzing %d characters...\n", length);

//     // Loop through each character of the array up to its determined length
//     for (int i = 0; i < length; i++) {
//         char current_char = text[i];

//         // 1. Check if it is a letter
//         if (isalpha(current_char)) {
//             letters++;
//         }
//         // 2. Check if it is a digit
//         else if (isdigit(current_char)) {
//             digits++;
//         }
//         // 3. Check if it is a whitespace character (space, tab, newline, etc.)
//         else if (isspace(current_char)) {
//             whitespace++;
//         }
//         // 4. If none of the above, it's an "other" character (punctuation, symbols, etc.)
//         else {
//             others++;
//         }
//     }

//     // Print the results
//     printf("\n--- Character Analysis Results ---\n");
//     printf("Total characters analyzed: %d\n", length);
//     printf("1. Letters (A-Z, a-z):        %d\n", letters);
//     printf("2. Digits (0-9):              %d\n", digits);
//     printf("3. Whitespace (Space, Tab, NL): %d\n", whitespace);
//     printf("4. Other Characters:          %d\n", others);

//     return 0;
// }

// --- 1. Pass by Value (FAILS to swap) ---
// The function receives copies of the values of 'a' and 'b'.
// void swap_by_value(int x, int y) {
//     // x and y are local copies.
//     int temp = x;
//     x = y;
//     y = temp;

//     // The copies (x and y) are swapped, but the originals (num1 and num2) are not.
//     printf("\nInside swap_by_value:\n");
//     printf("  x = %d, y = %d (Swapping the copies succeeded)\n", x, y);
// }

// // --- 2. Pass by Reference (SUCCESSFULLY swaps) ---
// // The function receives the memory addresses (pointers) of num1 and num2.
// void swap_by_reference(int *ptr_a, int *ptr_b) {
//     // Use the dereference operator (*) to access and modify the VALUE at the address.
//     int temp = *ptr_a;
//     *ptr_a = *ptr_b;
//     *ptr_b = temp;

//     // The original memory locations are modified.
//     printf("\nInside swap_by_reference:\n");
//     printf("  *ptr_a = %d, *ptr_b = %d (Original values are modified)\n", *ptr_a, *ptr_b);
// }

// int main() {
//     int num1 = 10;
//     int num2 = 20;

//     printf("--- Initial Values ---\n");
//     printf("num1 = %d, num2 = %d\n", num1, num2);

//     // Demonstration 1: Pass by Value
//     swap_by_value(num1, num2);

//     printf("\n--- After Pass by Value ---\n");
//     // num1 and num2 remain unchanged because the function operated on copies.
//     printf("num1 = %d, num2 = %d (NO change in main)\n", num1, num2);

//     // Reset values for the second test
//     num1 = 10;
//     num2 = 20;

//     // Demonstration 2: Pass by Reference
//     // We pass the ADDRESSES using the address-of operator (&).
//     swap_by_reference(&num1, &num2);

//     printf("\n--- After Pass by Reference ---\n");
//     // num1 and num2 ARE swapped because the function modified their memory directly.
//     printf("num1 = %d, num2 = %d (SUCCESSFULLY swapped in main)\n", num1, num2);

//     return 0;
// }

// void print_array(int (*arr_ptr)[3], int rows)
// {
//     printf("\n--- Pointer to an Array (Fixed 3-Column Width) ---\n");
//     for (int i = 0; i < rows; i++)
//     {
//         // Accessing elements using array notation relative to the pointer
//         printf("Row %d: %d, %d, %d\n", i + 1, (*arr_ptr)[0], (*arr_ptr)[1], (*arr_ptr)[2]);

//         // Move the pointer to the next array (row)
//         arr_ptr++;
//     }
// }

// int main()
// {
//     // --- PART 1: ARRAY OF POINTERS ---
//     printf("= = = Part 1: Array of Pointers = = =\n");

//     //Declaration: An array of 3 pointers to char (often used for strings)
//     char *names[] = {
//         "Mercury",
//         "Venus",
//         "Earth"};

//     // Each element points to a separate, immutable string literal
//     printf("Array of Pointers Example:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("names[%d] points to: %s\n", i, names[i]);
//     }
//     // Size check: The size of the pointer is small (e.g., 8 bytes),
//     // but the size of the total data pointed to is large.
//     printf("\nSize of one pointer: %zu bytes\n", sizeof(names[0]));
//     printf("Total size of the array (3 pointers): %zu bytes\n", sizeof(names));

//    // --- PART 2: POINTER TO AN ARRAY ---
//     printf("\n\n= = = Part 2: Pointer to an Array = = =\n");

//     // 1. Define a 2x3 array
//     int data_array[2][3] = {
//         {10, 20, 30},
//         {40, 50, 60}};

//     // 2. Declaration: ptr_to_row is a pointer to an array of 3 integers
//     int (*ptr_to_row)[3];

//     // 3. Assignment: Assign the address of the first row (the array)
//     ptr_to_row = data_array; // data_array decays to &data_array[0]

//     // Use the function that requires a pointer to an array
//     print_array(ptr_to_row, 2);

//     // Size check: This is a single pointer, but the type includes the dimension.
//     printf("\nSize of the pointer variable: %zu bytes\n", sizeof(ptr_to_row));
//     //When incremented, ptr_to_row moves by the size of the whole array it points to (3 integers * 4 bytes = 12 bytes).

//     return 0;
// }

// int main() {
//     int N;
//     // Use double for high precision, which is necessary for this calculation.
//     double e_approximation = 0.0;
    
//     // The current term being added to the sum (starts at 1/0! = 1.0)
//     double current_term = 1.0; 
    
//     printf("--- Euler's Number (e) Approximation ---\n");
//     printf("Enter the desired number of terms (N) for the approximation: ");
    
//     // Read the number of terms from the user.
//     if (scanf("%d", &N) != 1 || N <= 0) {
//         printf("Error: Please enter a positive integer.\n");
//         // Note: The 'exit' function from stdlib.h is often used here instead of return 1;
//         return 1; 
//     }
    
//     // Check for large number of terms that might take a moment to compute
//     if (N > 20) {
//         printf("Calculating with %d terms...\n", N);
//     }
    
//     // Loop N times (from n=0 up to N-1)
//     for (int n = 0; n < N; n++) {
        
//         // 1. Add the current term (1/n!) to the total sum
//         e_approximation += current_term;
        
//         // 2. Prepare the next term using the formula: Term(n+1) = Term(n) / (n + 1)
//         // This avoids calculating large factorials separately.
//         // We use (n + 1.0) to force floating-point division.
//         if (n < N - 1) {
//              current_term /= (n + 1.0);
//         }
//     }

//     printf("\n--- Result ---\n");
//     printf("Approximation of e using %d terms: %.15lf\n", N, e_approximation);

//     return 0;
// }

// int fucnction(int n){
//     int i;
//     for(i = 0; n != 0; n %=10, i++);
//     return i;
// }
// int main(){
//     int X;
//     X = fucnction(32);
//     printf("Ans: %d", X);
//     return 0;
// }

// int main(){
//     // An initial integer list is declared with integer values
//     int intList[] = {12, 6, 22, 45, 221, 2, 90};
//     // The size of that list is calculated dynamically
//     int size = sizeof(intList)/sizeof(intList[0]);

//     // assume first element is the min to start
//     int minVal = intList[0];

//     // loop through rest of the array -> start at index 1
//     for (int i = 0; i < size; i++)
//     {
//         // If we find a number smaller than minVal -> update minVal
//         if (intList[i] < minVal)
//         {
//             minVal = intList[i];
//         }
        
//     }
//     // print the final min value after the loop ends
//     printf("Min Val: %d", minVal);
    
//     return 0;
// };

// declare a Node type to hold the values of actual data and address to the data
typedef struct Node{
    int data;
    struct Node *next;
}Node;

// declare global Nodes
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

void CreateSignlyLinkedList(){
    // dynamically allocate memeory to the global Nodes
    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    fourth = (Node*)malloc(sizeof(Node));

    // link the Nodes:
    // head & second
    head->data = 8; // head stores value 8
    head->next = second;  // head pointer points to second Node

    // second & third
    second->data = 22; // second stores value 22
    second->next = third;  // second pointer points to third Node

    // third & fourth
    third->data = 20; // third stores value 20
    third->next = fourth;  // third pointer points to fourth Node

    // fourth & NULL
    fourth->data = 8; // fourth stores value 8
    fourth->next = NULL;  // fourth pointer points to NULL
};

void SinglyLLTraversalAndPrint(struct Node *p){
    // run a loop and print the data of the linked list
    while (p != NULL)
    {
        printf("Element is: %d\n", p->data);
        // point the pointer to the next Node after the data is printed
        p = p->next;
    }
    
};

int main(){
    // Call the create fucntion to create the Linked List
    CreateSignlyLinkedList();

    // Call the traversal & print function
    SinglyLLTraversalAndPrint(head);
    return 0;
};