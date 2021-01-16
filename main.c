#include <stdio.h>
#include <stdlib.h>

// THIS IS A TUTORIAL / REVIEW OF ALL BASIC INSTRUCTIONS NECESSARY TO START CODING IN C :)

double cube(double numb); // prototyping of defined function cube below;
// in order to run the code the function defined after main return 0; must be called before main();

int maxNum(int numb1, int numb2, int numb3); // prototyping of defined function maxNum below;


int main() // main() { } = main function, always inside { };
{

    char characterName[] = "John"; // [] store multiple characters // char = character // [] = array;
    int characterAge = 35; // int = integer;
    printf("There once was a man named %s\n", characterName); // %s = string variable, variable name;
    printf("He was %d years old.\n", characterAge); // %d prints an integer, variable name;

    characterAge = 67; // modified variable with a new value;
    printf("He really liked the name %s.\n", characterName); // %s = string variable, variable name;
    printf("But did not like being %d.\n", characterAge); // %d prints an integer, variable name;

    double gpa = 3.75; // double is used for store decimal numbers;
    char letterGrade = 'A'; // char ... = '' store a single character;
    char phrase[] = "Example"; // char ...[] is used to store a string of multiple characters also called an array;

    printf("Hello \" World! \n"); // \" prints " \n skip to the next line;

    printf("My favorite %s is %f\n", "number", 9.95); // %s prints a string, %f = float prints a decimal number,
                                                      // specify the string, specify the decimal number;
    printf("%f %f %f %f\n", 5.0 + 4.0, 5.0 - 4.0, 5.0 * 4.0, 5.0 / 4.0); // playing with math +, -, *, /;
    printf("%f \n", pow(2, 3) ); // pow = power 2 ^ 3 = 8;
    printf("%f \n", sqrt(36) ); // sqrt() = square root of 36 = 6;
    printf("%f \n", ceil(36.123) ); // ceil() = ceiling or round up to the next integer = 37;
    printf("%f \n", floor(36.987) ); // floor() = round down to the previous integer in this case 36;

    const int SPEED_OF_LIGHT = 299792458; // const means constant = a number that cannot be modified
    printf("%d \n", SPEED_OF_LIGHT); // constants are written in all capital letters SPEED instead of speed

    int userAge; // variable for userAge
    printf("Enter your age: "); // prompt to get userAge
    scanf("%d", &userAge); // get user input age number
    // scan("%d", &userAge) inside "" tells what kind of info you want from user
    // in this case %d because we want an integer, &userAge the variable we want to store the data
    // & is a pointer ***
    printf("You are %d years old\n", userAge);

    double userGpa; // variable for userGpa
    printf("Enter your gpa: "); // prompt to get userGpa
    scanf("%lf", &userGpa); // get user input gpa number
    // scan("%lf", &userGpa) inside "" tells what kind of info you want from user
    // in this case %lf because we want a decimal, &userGpa the variable we want to store the data
    // & is a pointer ***
    printf("Your Gpa is %f\n", userGpa); // f = float decimal number, variable userGpa

    char userName[20]; // variable for userName
    printf("Choose your username: "); // prompt to get userName
    scanf("%s", userName); // get user input username
    // scan("%s", userName) inside "" tells what kind of info you want from user
    // in this case %s because we want a string of characters, userName the variable we want to store the data
    // no & needed this time, if we wanted only one character we use & and %c instead of %s
    printf("Your username is: %s\n", userName); // s = string, variable userName

    char fullName[30]; // variable for fullName
    printf("What is your full name? "); // prompt to get fullName
    fgets(fullName, 30, stdin); // get user input full name
    // fgets(fullName, 30, stdin) fgets = gets more than one world from user
    // on the previous case, scanf can only pick one world like Raphael instead of Raphael Lacet
    // ,30 is the maximum number of characters the user is allowed to type, stdin = standard input
    printf("%sThat is a beautiful name!\n", fullName); // s = string, variable fullName

// basic calculator in C
    double num1;
    double num2;
    int userInput;
    double calc;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Power\n 6. Square Root\n Type the number of the operation you which to do: ");
    scanf("%d", &userInput);
    if(userInput == 1) {
       calc = num1 + num2;
    }
    else if(userInput == 2) {
       calc = num1 - num2;
    }
    else if(userInput == 3) {
       calc = num1 * num2;
    }
    else if(userInput == 4) {
       calc = num1 / num2;
    }
    else if(userInput == 5) {
       calc = pow(num1 , num2);
    }
    else if(userInput == 6) {
       calc = sqrt(num1 + num2);
    }
    printf("The answer is: %f", calc);

                      //  0   1   2   3   4   5   index position
    int bingoNumber[] = {07, 11, 16, 22, 27, 35}; // array of numbers // elements separated by ,
    printf("The first bingo number is: %d", bingoNumber[0]);
    // the program will print 7 since the array index position goes from 0 to 5;
    // 7 = 0, 11 = 1, 16 = 2, 22 = 3, 27 = 4, 35 = 5;

    sayHi("Raphael", 25); // inside function string array char name[] Raphael, variable int age 25 defined bellow
    // to execute function sayHi bellow we have to call it inside the main(){} function;

    printf("Answer is: %f\n", cube(3.0)); // calling function cube defined below, %f for decimal number,
    // , defining function cube(3.0) parameter value to be 3.0 for variable numb;

    printf("%d \n", maxNum(4, 10, 15)); // calling function maxNum defined below, %d for integer number,
    // , defining function maxNum(4, 10, 15) parameters to be 4, 10, and 15
    // for the parameter variables numb1, numb2, and numb4 respectively;

    if(!(2 > 5)) { // condition statement with negation saying print True only if 2 is not bigger than 5;
        printf("True");
    }
    else {
        printf("False"); // else print False in case 2 was bigger than 5;
    }

// calculator 2;
    double number1;
    double number2;
    char op; // operator;

    printf("Enter a number: ");
    scanf("%lf", &number1); // scan user input for number1 variable;
    // %lf is used for double decimal numbers // & is a pointer used to refer the number1 variable;
    printf("Enter operator: ");
    scanf(" %c", &op); // scan user input for op variable operator;
    // 1 space and %c is used for char characters // & is a pointer used to refer the op variable;
    // *** P.S. remember to use 1 space before %c or else the code does not work;
    printf("Enter another number: ");
    scanf("%lf", &number2); // scan user input for number2 variable;
    // %lf is used for double decimal numbers // & is a pointer used to refer the number2 variable;

    if(op == '+') { // condition statement for addition;
        printf("%f", number1 + number2);
    }
    else if(op == '-') { // condition statement for subtraction;
        printf("%f", number1 - number2);
    }
    else if(op == '*') { // condition statement for multiplication;
        printf("%f", number1 * number2);
    }
    else if(op == '/') { // condition statement for division;
        printf("%f", number1 / number2);
    }
    else if(op == '^') { // condition statement for power;
        printf("%f", pow(number1 , number2));
    }
    else { // display and error message in case user input an invalid operator;
        printf("INVALID OPERATOR\nPlease type one of the following operators: ( + , - , * , / , ^ )");
    }

    char grade;
    printf("What was your Letter Grade: ");
    scanf(" %c", &grade); // remember to add 1 space before %c or else it will not work;

    switch(grade) {
    case 'A' : // in the case that grade is equal to A;
        printf("You did great!");
        break; // leave if this statement is true;
    case 'B' : // in the case that grade is equal to B;
        printf("You did alright!");
        break; // leave if this statement is true;
    case 'C' : // in the case that grade is equal to C;
        printf("You barely pass oof!");
        break; // leave if this statement is true;
    case 'D' : // in the case that grade is equal to D;
        printf("Better next time!");
        break; // leave if this statement is true;
    case 'F' : // in the case that grade is equal to F;
        printf("You suck!");
        break; // leave if this statement is true;
    default : // in case the input letter grade is not A, B, C, D, F;
        printf("Invalid Grade!"); // no break needed for input;
    }

//  struct = structure used to store different data type structures in a single structure;
    struct Student { // usually first capital letter for structure data types;
        char name[50];
        char major[50];
        int age;
        double gpa;
    }; // for struct use ; after };

    struct Student student1; // student1 container structure inside Student data type;
        student1.age = 22; // student1 container . data variable age = age value 22;
        student1.gpa = 3.25;
        strcpy(student1.name , "Jim"); // strcpy() function (student1.name parameter, "Jim" string);
        strcpy(student1.major , "Business");

        printf("%f", student1.gpa); // %f = float for decimal numbers, student1.gpa container . data variable;

    int index = 1;
// while loops continuously execute a specific block of code until a certain condition is false;
    while(index <= 5) {
// while(condition) as long as the condition is true the loops continues inside while code { };
        printf("%d\n", index); // %d for integer;
        index++; // index++ means index = index + 1; could also be written index += 1;
    } // print index and adds 1 to it while it is less or equal to 5;

// ex2 do while loop
    int index = 6;

    do { // do while loop executes printf(...); and index++; before checks tbe while loop;
        printf("%d\n", index); // %d for integer;
        index++; // index++ means index = index + 1; could also be written index += 1;
        // print index and adds 1 to it while it is less or equal to 5;
    } while(index <= 5)
    // while(condition) as long as the condition is true the loops continues inside while code { };
    // while loops continuously execute a specific block of code until a certain condition is false;

// Guess the secret number minigame
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    // while user guess is different than secretNumber and && outOfGuesses == is equal to 0;
    while(guess != secretNumber && outOfGuesses == 0) {
        if(guessCount < guessLimit) { // if guessCount is less than guessLimit;
            printf("Enter a number: ");
            scanf("%d", &guess); // %d for integer, and & pointer to variable guess;
            guessCount++; // add guess failed attempts;
        }
        else { //  reach the guess limit;
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1) { // when guess limit is reach;
            printf("Out of Guesses! Better lucky next time.");
    }
    else { // in case user answer correctly before reach guess limit;
            printf("YOU WIN!");
    }

// comparing while vs for loops;
    int i = 1;
    while(i <= 5) { // (loop condition) while variable i is less or equal to 5, print i + 1;
        printf("%d\n", i);
        i++;
    }

    // define variable
    int i;
    // for( variable value; for loop condition; increment i by 1 ) {};
    for(i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // for loops example2;
                          //  0   1   2   3   4   5   index position
    int bingoNumbers[] = {07, 11, 16, 22, 27, 35}; // array of numbers // elements separated by ,
    // 7 = 0, 11 = 1, 16 = 2, 22 = 3, 27 = 4, 35 = 5;
    int i; // define variable;
    // for( variable value; for loop condition; increment i by 1 ) {};
    for(i = 0; i < 6; i++) { // keep looping while i is less than 6 (number of elements inside the array);
        printf("%d\n", bingoNumbers[i]);
        // print out array element at index position i in variable bingoNumbers;
    }

// 2D arrays[width][height] = { {a,b},{c,d},{e,f} };
// are arrays where all elements inside the array are arrays themselves;
//          [i][j]
    int nums[3][2] = { // [3 arrays] [2 elements inside each array];
                      {1, 2}, // index position 0; // 1 = element 0, 2 = element 1;
                      {3, 4}, // index position 1; // 3 = element 0, 4 = element 1;
                      {5, 6}  // index position 2; // 5 = element 0, 6 = element 1;
                     };
    printf("%d", nums[0][0]); // [index position 0] [element 0] = 1

    // nested for loops = a loop inside a loop;
    int i, j; // declaring two variables i and j;
    for(i = 0; i < 3; i++) { // goes inside this loop 3 times;
    // keep looping while i is less than 3 which is the number of elements inside each array inside nums array;
        for(j = 0; j < 2; j++) { // goes inside this loop 2 times;
    // keep looping while j is less than 2 which is the number of elements inside each array inside nums array;
        printf("%d, ", nums[i][j]);
        } // , for better formating;
        printf("\n");
    }

// accessing memory addesses in C;
// C gets each variable value and stores in a specific memory address inside RAM;
    int age = 25;
    double gpa = 3.57;
    char grade = 'A';

    printf(" age:   %p\n gpa:   %p\n grade: %p\n", &age, &gpa, &grade);
    // %p = pointer to access a physical memory address, & = pointer to variable age;

    int age = 30;
    // * is a pointer variable that stores the memory address of a variable that is already in our program;
    // this pointer variable * will store the memory address of the variable age;
    int * pAge = &age;
    // = memory address of variable age accessed using &age;
    // when naming pointer variables * lower case p and upper case first letter of other variable here * pAge;
    double gpa = 3.57;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age); // a pointer is a memory address a type of data;

// dereferencing pointers in C;
    int age = 30;
    int *pAge = &age;

    printf("%d", *pAge); // %d instead of %p since we want the value 30 instead of the memory address;
                         // , *pAge to dereference the pointer pAge;
//  printf("%d", *&age); // it could also be done this way;

// writing FILEs in C;
    // FILE creates a pointer to a physical file on our machine;
    // function fopen() parameters ("file name", "file mode");
    FILE * fpointer = fopen("employees.txt", "w");
    // "employees.txt" if you want to specify a path to this file ex: "C:\Users\username\Desktop\employees.txt";
    // if you do not specify a path to the FILE it will be created into the C directory of our main.c program;
    // file modes: "r" = read, "w" = write to create new files, "a" = append to add info on the file or edit existing files;
    // fpointer points to a file on our machine while fopen() opens a file for us;
    fprintf(fpointer, "Jim, Salesman\nPam, Recepcionist\nOscar, Accountant");
    // writes information inside the FILE;
//  fprintf(parameter, "string");
    fclose(fpointer);
    // whenever we fopen() a FILE we need to close it with a function fclose(fpointer) with our pointer variable inside ();

//Reading FILEs;
    char line[255]; // line[] variable to read 255 characters;
    FILE * fpointer = fopen("employees.txt", "r");
    // fgets() function read the information from the FILE and stores it somewhere;
    // (store the info inside line character variable line, size = 255, fpointer);
    // fgets() reads the first line of our FILE and move the fpointer past the first line of the FILE;
    fgets(line, 255, fpointer); // gets the first line of the FILE;
//  fgets(line, 255, fpointer); // if we add this function again it will now only get the second line of the FILE;
    printf("%s", line);
    // print a string, and print the line variable with 255 character size;
    fclose(fpointer);
    return 0;
}

// void means that this function won't return any information;
void sayHi(char name[], int age) {
// sayHi() {} function { code goes inside here } sayHi( function parameters ) name[] array, age variable;
    printf("Hello %s! You are %d years old.\n", name, age);
// function prints a name %s = string, name = variable parameter inside function;
// %d prints an integer inside function, age variable;
}

double cube(double numb) { // function cube ( parameter decimal variable numb) {
    return pow(numb, 3); // return a decimal result = raise variable numb to the third power;
}   // return keyword ends the function, if I added a code after return, it would not run;

int maxNum(int numb1, int numb2, int numb3) {
// function maxNum(three integer parameter variables numb1, numb2, numb3) to check which number is bigger;
    int biggestNum; // variable result biggestNum;
    if(numb1 >= numb2 && numb1 >= numb3) { // if statement condition;
// numb1 must be greater or equal to numb2 && and numb3; // && allows two conditions to be verified;
        biggestNum = numb1; // only works if both conditions are true;
    }
    else if(numb2 >= numb1 && numb2 >= numb3) {
// in case condition 1 is not met, the following condition is tested;
// *** P.S. if I wanted only one condition to be true I could have written || or instead of && and;
// other values == equal to, != not equal to, <= less or equal to, < less than, >= greater or equal to, > greater than;
        biggestNum = numb2;
    }
    else { // in case previous conditions are not met display numb3 as biggestNum;
        biggestNum = numb3;
    }
    return biggestNum; // return the biggestNum between variables numb1, numb2, numb3 after comparing all;
}

