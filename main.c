#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h> // helper for unix systems -> for using sys fucntions like sleep, wake etc
/*
    Common C Format Specifiers:
%d or %i: Used for signed decimal integers (int).
%c: Used for a single character (char).
%s: Used for a string of characters (null-terminated character array).
%f: Used for single-precision floating-point numbers (float).
%lf: Used for double-precision floating-point numbers (double) in scanf(). For printf(), %f is typically used for both float and double.
%Lf: Used for long double floating-point numbers (long double).
%u: Used for unsigned decimal integers (unsigned int).
%o: Used for octal representation of an integer.
%x or %X: Used for hexadecimal representation of an integer (lowercase x for lowercase hex digits, uppercase X for uppercase hex digits).
%p: Used for printing pointer addresses.
%%: Used to print a literal percent sign.

*/

/*
    Escape sequences in C 
\n New line character
\a Ring terminal bell (the a is for alert) [ANSI] extension]
\? Question mark [ANSI extension]
\b Backspace
\r Carriage return
\f Formfeed
\t Horizontal tab
\v Vertical tab
\0 ASCII null character

*/

/*
    Common Points to remember
    '' -> to specify null pointers
    "" -> for basic text placement
*/

// fucntions
// void HappyBirthday(char birthdayboy[], int yearsOld){
//     printf("Happy Birthday to you");
//     printf("\nHappy Birthday to you");
//     printf("\nHappy Birthday dear %s", birthdayboy);
//     printf("\nHappy Birthday to you");
//     printf("\nYou are %d years old\n", yearsOld);
// };

// int main(){
//  char name[50] = "";
//  int age = 0;

// // accept user input
// printf("Enter your name: ");
// fgets(name, sizeof(name), stdin); // fgets() is used for taking user input of strings... else scanf() is used
// name[strlen(name) - 1] = '\0'; // remove extra input buffer after taking string input

// printf("Enter your age: ");
// scanf("%d", &age);

// HappyBirthday(name, age);

// return 0;
//};

// function prototype - feed compiler the info about a func before its delclared/used.
//                      Improves error handling, type safety, faster execution etc. Actual functionscan be declared after the main function.

// void hello(char name[], int age); // function prototype
// bool ageCheck(int age);

// int main(){

//     int age = 0;

//     printf("Enter age: ");
//     scanf("%d", &age);
//     if (ageCheck(age)){
//         printf("You can work!\n");
//     }
//     else{
//         printf("You CANNOT Work\n");
//     };
//     //hello("Viky", 24);
//     return 0;
// };

// void hello(char name[], int age){
//     printf("Hello %s\n", name);
//     printf("You are %d yearls old\n", age);
// };

// bool ageCheck(int age){
//     // if (age >= 21){
//     //     return true;
//     // }
//     // else {
//     //     return false;
//     // };
//     // ----- OR -----
//     return age >= 21;
// };

// while - do-while loops

// int main(){
//  char name[50] = "";

// printf("Enter Name: ");
// fgets(name, sizeof(name), stdin);
// name[strlen(name) - 1] = '\0';

// while(strlen(name) == 0){
//     printf("Name is required: ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0';
// };
// printf("Hello %s\n", name);

// return 0;
//};

// for loop - for(initialization; condition; update){};

// int main(){

//     for(int i = 10; i >= 0; i--){
//         sleep(1); // sleep for 1000 ms or 1 sec
//         printf("%d\n",i);
//     };
//     printf("Happy New Year");
//     return 0;
// };

// break & continue in loops or switch cases

// int main(){

//     for(int i = 0; i <= 10; i++){

//         if(i == 4){
//             continue;
//         };
//         printf("%d\n",i);
//     };
//     return 0;
// };

// guessing game using rand() numbers

// int main(){

//     srand(time(NULL));

//     int guess = 0;
//     int tries = 0;
//     int min = 1;
//     int max = 100;
//     int answer = rand() % (max - min + 1) + min;

//     printf("NUMBER GUESSING GAME\n");

//     do{
//         printf("Guess a number between %d and %d: ", min, max);
//         scanf("%d", &guess);
//         tries++;

//         if (guess < answer){
//             printf("Too LOW!\n");
//         }else if (guess > answer){
//             printf("Too HIGH!\n");
//         }else{
//             printf("Correct!!");
//         };

//     }while (guess != answer);

//     printf("The answer is: %d\n", answer);
//     printf("It took you: %d\n", tries);

//     return 0;
// };

// rock - papers - siscors game

// int getComputerChoice();
// int getUserChoice();
// void checkResult(int userChoice, int computerChoice);

// int main()
// {
//     srand(time(NULL));
//     printf(" ROCK PAPER SCISSORS \n");

//     int userChoice = getUserChoice();
//     int computerChoice = getComputerChoice();

//     // user choice
//     switch (userChoice)
//     {
//     case 1:
//         printf("You chose ROCK\n");
//         break;
//     case 2:
//         printf("You chose PAPER\n");
//         break;
//     case 3:
//         printf("You chose SCISSORS\n");
//         break;
//     }
//     // Comp choice
//     switch (computerChoice)
//     {
//     case 1:
//         printf("Computer chose ROCK\n");
//         break;
//     case 2:
//         printf("Computer chose PAPER\n");
//         break;
//     case 3:
//         printf("Computer chose SCISSORS\n");
//         break;
//     }

//     // result
//     checkResult(userChoice, computerChoice);

//     return 0;
// };

// int getComputerChoice()
// {
//     return (rand() % 3) + 1;
// };

// int getUserChoice()
// {
//     int choice = 0;
//     do
//     {
//         printf("Choose a number\n");
//         printf(" 1 for ROCK \n");
//         printf(" 2 for PAPER \n");
//         printf(" 3 for SCISSORS \n");
//         scanf("%d", &choice);
//     } while (choice < 1 || choice > 3);

//     return choice;
// };

// void checkResult(int userChoice, int computerChoice) {
//     // 1-ROCK, 2-PAPER, 3-SCISSORS
//     if (userChoice == computerChoice)
//     {
//         printf("Its a Tie!");
//     }else if ((userChoice == 1 && computerChoice == 2) ||
//                 (userChoice == 2 && computerChoice == 3) ||
//                 (userChoice == 3 && computerChoice == 1))
//     {
//         printf("You LOSE... Massive L");
//     }else if ((userChoice == 1 && computerChoice == 3) ||
//                 (userChoice == 2 && computerChoice == 1) ||
//                 (userChoice == 3 && computerChoice == 2))
//     {
//         printf("You Win... Massive W");
//     }
// };

// banking program

// void checkBalance(float balance);
// float deposit();
// float withdraw(float balance);

// int main(){

//     int choice = 0;
//     float balance = 0.0f;

//     printf("Welcome to the banking program\n");

//     do
//     {
//         printf("Select an option:\n");
//         printf("1. Check Balance\n");
//         printf("2. Deposit Money\n");
//         printf("3. Withdraw Money\n");
//         printf("4. Exit\n");

//         printf("Enter Your Choice: ");
//         scanf("%d", &choice);

//         switch(choice){
//             case 1:
//                 checkBalance(balance);
//                 break;
//             case 2:
//                 balance += deposit();
//                 break;
//             case 3:
//                 balance -= withdraw(balance);
//                 break;
//             case 4:
//                 break;
//             default:
//                 printf("\nInvalid Input. Choose between 1 to 4\n");
//                 continue;
//         };

//     } while (choice != 4);

//     return 0;
// };

// void checkBalance(float balance){
//     printf("\nYour balance is: $%.2f\n", balance);
// };

// float deposit(){
//     float amount = 0.0f;

//     printf("Enter Deposit Amount: $");
//     scanf("%f", &amount);

//     if (amount < 0){
//         printf("You cannot deposit negative money genius 🤡\n");
//         return 0.0f;
//     }
//     else{
//         printf("Successful deposit of $%.2f\n", amount);
//         return amount;
//     };

//     return 0.0f;
// };

// float withdraw(float balance){

//     float amount = 0.0f;

//     printf("Enter Withdraw Amount: $");
//     scanf("%f", &amount);

//     if (amount > balance){
//         printf("Oops You cannot withdraw more than the balance! 💀\n");
//         return 0.0f;
//     }
//     else if (amount < balance){
//         printf("You cannot deposit negative amount bruh. 😭");
//         return 0.0f;
//     }
//     else{
//         printf("Successfully withdrew $%.2f\n", amount);
//         return amount;
//     };

//     return 0.0f;
// };

// array of strings

// int main(){

//     char fruits[][10] = {"Apple",
//                          "Mango",
//                          "Coconut"};
//     int size = sizeof(fruits)/sizeof(fruits[0]);

//     fruits[0][2] = 'e';
//     fruits[1][4] = 'f';
//     fruits[2][6] = 'r';

//     for (int i = 0; i < size; i++)
//     {
//         printf("%s\n", fruits[i]);
//     }

//     return 0;
// };

// quiz game

// int main()
// {

//     char questions[][100] = {"What is the largest planet in the solar system?",
//                              "What is the hottest planet?",
//                              "What is the coldest planet?",
//                              "What is the planet closest to Earth?"};

//     char options[][100] = {
//         "A. Jupiter\nB. Saturn\nC. Uranus\nD. Earth",
//         "A. Jupiter\nB. Venus\nC. Uranus\nD. Mercury",
//         "A. Jupiter\nB. Neptune\nC. Uranus\nD. Mercury",
//         "A. Venus\nB. Neptune\nC. Mars\nD. Mercury",
//     };

//     char answerKey[] = {'A', 'B', 'B', 'A'};

//     int questionCount = sizeof(questions) / sizeof(questions[0]);

//     char guess = '\0';
//     char score = '\0';

//     printf("\nQUIZ GAME\n");

//     for (int i = 0; i < questionCount; i++)
//     {
//         printf("%s", questions[i]);
//         printf("\n%s\n", options[i]);
//         // printf("%c\n", answerKey[i]);
//         printf("\nEnter your choice: ");
//         scanf(" %c", &guess);

//         guess = toupper(guess);

//         if (guess == answerKey[i])
//         {
//             printf("CORRECT\n");
//             score++;
//         }
//         else
//         {
//             printf("Wrong\n");
//         };
//     }
//     printf("Score is: %d\n", score);

//     return 0;
// };

// ternary operator -> ? -> the shortcut for if else statement checking if something is true or not

// typedef -> nicknames for existing datatypes -> improves code readability

// typedef int numz;
// typedef char str[100];
// int main(){

//     numz x = 1;
//     numz y = 5;
//     numz z = (x*log(x))-y+(x*x);
//     printf("%d\n", z);

//     str name = "THE NAME\n";
//     printf("%s", name);
//     return 0;
// };

// enums -> user-defined datatype that contains a set of named integer constants: Replaces numbers w/ readable names

// enum Day{
//     // constants inside enums always in CAPITAL
//     // first constant has a default value of 0. can assign a different one if need. values increment by +1
//     SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
// };
// int main(){

//     enum Day today = THURSDAY;
//     printf("%d\n", today);

//     return 0;
// };

// enums + typedefs 

// typedef enum{
//     SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
// }Day;

// int main(){

//     Day today = MONDAY;
//     //printf("%d\n", today);

//     if (today == SUNDAY || today == SATURDAY)
//     {
//         printf("ITS A WEEKEND :)");
//     }
//     else
//     {
//         printf("its a workday :(");
//     }

//     return 0;
// };

// struct -> OOPs kinda stuff but for C

// typedef struct {
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// }Student;

// void printStudent(Student student);

// int main(){

//     Student student1 ={"Spongebob", 30, 3.2, true};
//     Student student2 ={"Sandy", 24, 2.4, false};
//     Student student3 ={"Patrick", 39, 3.9, false};
//     Student student4 = {0};

//     // manually assign values to empty struct Student student4
//     strcpy(student4.name, "Squidward");
//     student4.age = 36;
//     student4.gpa = 4.0;
//     student4.isFullTime = true;

//     printStudent(student1);
//     printStudent(student2);
//     printStudent(student3);
//     printStudent(student4);

//     return 0;
// }

// void printStudent(Student student){
//     printf("%s\n", student.name);
//     printf("%d\n", student.age);
//     printf("%.2f\n", student.gpa);
//     printf("%s\n", (student.isFullTime) ? "Yes":"No");
//     printf("\n");
// };

// array of structs

// typedef struct{
//     char model[30];
//     int year;
//     int price;
// }Car;

// int main(){

//     Car cars[] = {{"Toyota", 2019, 21000}, {"Honda", 2018, 26600},
//                  {"Suzuki", 2022, 19500}, {"Ford", 2025, 45000}};

//     int numOfCars = sizeof(cars) / sizeof(cars[0]);

//     for (int i = 0; i < numOfCars; i++)
//     {
//         printf("Cars\nModel: %s,Year: %d,Price: %d \n", 
//                 cars[i].model, cars[i].year, cars[i].price);
//     }
//     return 0;
// };

// pointers in C -> var that stores memory address of another var. Helps in memory management. 
// Basically -> we dont copy/move the whole data, we point the program to the address of the stored data.

// void Birthday(int* age);

// int main(){

//     int age = 24;
//     //printf("%p\n", &age); // to see the memory address

//     //int *pAge = &age;
//     //printf("%p\n", pAge); // "*"" -> creates pointer, "*pAge" -> points to memory address of age var

//     Birthday(&age);
//     printf("The age is: %d\n", age);
//     return 0;
// };

// void Birthday(int* age){
//     // pass by reference to the var
//     // then dereference to the actual var not the address of the var
//     *age += 2;
// };

// write files

// int main(){

//     FILE *pFile = fopen("/users/rohitgoswami/Desktop/output.txt", "w");

//     char text[] = "Nice output buddy!\nfr fr no cap ong";

//     if (pFile == NULL)
//     {
//         printf("Error opening file\n");
//         return 1;
//     }
    
//     fprintf(pFile, "%s", text);
//     printf("File written successfully");

//     fclose(pFile);

//     return 0;
// };

// read files

// int main(){

//     FILE *pFile = fopen("/users/rohitgoswami/Desktop/output.txt", "r");

//     char buffer[1024] = {0};

//     if (pFile == NULL)
//     {
//         printf("Error opening file\n");
//         return 1;
//     }

//     while (fgets(buffer, sizeof(buffer), pFile) != NULL)
//     {
//         printf("%s", buffer);
//     }
    
//     fclose(pFile);

//     return 0;
// };

// malloc -> memory allocation : dynamically allocates specified bytes in memory

// int main(){

//     int number = 0;
//     printf("Enter the num of grades: ");
//     scanf("%d", &number);

//     char *grades = malloc(number * sizeof(char));

//     // if program fails it may cause segmentation fault: dangerous; avoid it
//     if (grades == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     // take user input and store in array grades
//     for (int i = 0; i < number; i++)
//     {
//         printf("Enter grade #%d: ", i+1);
//         scanf(" %c", &grades[i]);
//     }
//     // then print the grades
//     for (int i = 0; i < number; i++)
//     {
//         printf("%c ", grades[i]);
//     }
    
    
//     free(grades); // returning the rented space back to the OS
//     grades = NULL; // avoids dangling pointers: 

//     return 0;
// };

// calloc -> contagiuos allocation : conceptually same as malloc but malloc is faster but calloc leads to less bugs in the program.

// int main(){
//     int number = 0;
//     printf("Enter the number of players: ");
//     scanf("%d", &number);

//     int *scores = calloc(number, sizeof(int));

//     if (scores == NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("Enter score #%d: ", i+1);
//         scanf("%d", &scores[i]);
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("%d\n", scores[i]);
//     }
    
//     free(scores);
//     scores = NULL;

//     return 0;
// };

// realloc -> reallocation : resize previously allocated memory->> realloc(pointer, size in bytes)

// int main(){

//     int number = 0;
//     printf("Enter the number of prices: ");
//     scanf("%d", &number);

//     float *prices = calloc(number, sizeof(float));

//     if (prices == NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("Enter the prices #%d: ", i+1);
//         scanf("%f", &prices[i]);
//     }

//     int newNumber = 0;
//     printf("Enter a new number of prices: ");
//     scanf("%d", &newNumber);

//     float *temp = realloc(prices, newNumber * sizeof(float));
//     if (temp == NULL)
//     {
//         printf("Memory reallocation failed\n");
//         //return 1; // return 1 only if you exit the program. Here we dont
//     }
//     else
//     {
//         prices = temp;
//         temp = NULL; // set to null if later you reuse the temp variable

//         for (int i = number; i < newNumber; i++)
//         {
//             printf("Enter the prices #%d: ", i+1);
//             scanf("%f", &prices[i]);
//         }

//         for (int i = 0; i < newNumber; i++)
//         {
//             printf("$%.2f ", prices[i]);
//         }
//     }

//     free(prices);
//     prices = NULL;

//     return 0;
// };

// digital clock

// int main(){

//     time_t  rawTime = 0;
//     struct tm *pTime = NULL;
//     bool isRunning = true;

//     printf("DIGITAL CLOCK\n");

//     while (isRunning)
//     {
        
//         time(&rawTime);
        
//         pTime = localtime(&rawTime);

//         //printf("%d:%d:%d", (*pTime).tm_hour, (*pTime).tm_min, (*pTime).tm_sec);
//         // OR
//         // \r -> carriage return: cursor goes back to the start of the line and reprrints the whole thing 
//         printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
//         // \r -> stores result in buffer. use fflush(stdout) to print the output immediately
//         fflush(stdout);

//         sleep(1);
//     }
    

//     return 0;
// }
