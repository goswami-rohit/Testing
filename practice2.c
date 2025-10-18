#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <math.h>

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

int main(){
    int alpha = 077, beta = 0xabc, gamma = 123, q;
    q = alpha + beta - gamma;
    printf("%d\n", q);
    q = beta / alpha;
    printf("%d\n", q);
    q = beta % gamma;
    printf("%d\n", q);
    q = beta / (alpha + gamma);
    printf("%d\n", q);
    return (0);
};