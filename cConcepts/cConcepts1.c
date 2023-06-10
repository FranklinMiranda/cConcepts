#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printGreeting();

void printName();

void printNumberArray();

int printAddition();

int main() {

	// Data Types
	/*
	There are 4 types of C variables
	int variables store integers (whole numbers)
	float variables store floating point numbers, with decimals,
	char variables store single characters, such as 'a' or 'B'
	double variables store floating point numbers, with decimals	
	*/

	int number = 8;
	float floatingNumber = 1.2345;
	char character1 = 'a';
	double doubleNumber = 1.2345678912;
	int emptyNumber;

	// Format Specifiers
	/*
	Format specifies are used to tell the compiler what type of data the variable is storing
	%d or %i is for integers
	%f is for float
	%c is for char
	%lf is for double
	*/

	printf("\n%d", number);
	printf("\nThe number is %d and the character is %c", number, character1);
	printf("\n%f", floatingNumber);
	printf("\n%c", character1);
	printf("\n%.10lf", doubleNumber);

	// The following printf statement prints Hello World to the screen
	printf("\nHello World");
	/*
	This is an example of a multiline comment.
	This is the continuation of the multiline comment.
	*/
	printf("\nI am learning C.");

	// Reassignment of Variables
	// Variable vaules can be changed by assigning a new value to an existing variable, overwritting the previous value
	number = 1023;

	printf("\n%d", number);

	emptyNumber = 13;

	int sum = number + emptyNumber;

	printf("\n%d", sum);
	printf("\n%d", emptyNumber);
	doubleNumber = floatingNumber;
	printf("\n%f", doubleNumber);

	// Multiple Variable Assignment
	int x = 5, y = 7, z = 12;
	printf("\n%d", x + y + z);

	// Explicit Conversion of integers to floating point number for mathematics operations
	// const keyword declares variables as unchangeable and read-only
	const float DIVISION = (float)5 / 2;

	printf("\n%.1f", DIVISION);

	// Operators 
	// Arithmetic Operators
	x = 123, y = 134, z = 145;
	sum = x + y;
	printf("\nAddition %d", sum);
	sum = x - y;
	printf("\nSubtraction %d", sum);
	sum = x * y;
	printf("\nMultiplication %d", sum);
	sum = x / y;
	printf("\nDivision %d", sum);
	sum = x % y;
	printf("\nModulus %d", sum);
	x = ++x;
	printf("\nIncrement %d", x);
	x = --x;
	printf("\nDecrement %d", x);
	
	// Assigment Operators
	int assignment = 0;
	printf("\nAssignment Value %d", assignment);
	assignment += 37;
	printf("\nAssignment Value %d", assignment);
	assignment -= 1;
	printf("\nAssignment Value %d", assignment);
	assignment *= 3;
	printf("\nAssignment Value %d", assignment);
	assignment /= 3;
	printf("\nAssignment Value %d", assignment);
	assignment %= 3;
	printf("\nAssignment Value %d", assignment);

	// Comparison Operators
	int comparison1 = 1234;
	int comparison2 = 4321;

	printf("\n Is %d greater than %d %d", comparison1, comparison2, comparison1 > comparison2);
	printf("\n Is %d greater than or equal to %d %d", comparison1, comparison2, comparison1 >= comparison2);
	printf("\n Is %d less than %d %d", comparison1, comparison2, comparison1 < comparison2);
	printf("\n Is %d less than or equal to %d %d", comparison1, comparison2, comparison1 <= comparison2);
	printf("\n Is %d equal to %d %d", comparison2, comparison1, comparison1 == comparison2);
	printf("\n Is %d not equal to %d %d", comparison2, comparison1, comparison1 != comparison2);

	// Logical Operators
	printf("\n Is %d and %d greater than %d %d", comparison2, comparison1, assignment, comparison1 > assignment && comparison2 > assignment);
	printf("\n Is %d or %d greater than %d %d", comparison2, comparison1, z, comparison1 > assignment || comparison2 > assignment);
	printf("\n Is %d and %d greater than %d %d", comparison2, comparison1, assignment, !(comparison1 < assignment && comparison2 < assignment));

	// Sizeof Operator
	//printf("\n%d", sizeof(comparison1));

	// Boolean data type stores true false values and returns 1 for true and 0 for false
	bool isProgramming = false; 
	bool isProgrammingNotFun = false;

	printf("\n%d", isProgramming);
	printf("\n%d", isProgrammingNotFun);

	// Conditions and If Statements
	if (isProgrammingNotFun) {
		printf("\nWhy is programming not fun?");
	} else if (isProgramming) { printf("\nProgramming is fun!"); }

	int time = 18;

	(time > 20) ? printf("\nGood Night") : printf("\nGood Morning");

	// Switch Statements 
	int switchInput = 3;

	switch (switchInput) {
		case 1:
			printf("\n1");
			break;
		case 2:
			printf("\n2");
			break;
		default:
			printf("\nNot 1 or 2");
	}

	// While Loop
	int loopCounter = 8;

	while (loopCounter > 0) {
		printf("\n%d", loopCounter);
		--loopCounter;
	}

	// Do While Loop
	loopCounter = 10;
	
	do {
		printf("\n%d", loopCounter);
		--loopCounter;
	} 
	while (loopCounter > 0);

	// For Loop
	int i;

	for (i = 0; i < 10; i++) {
		printf("\n%d", i);
	}


	// Nested For Loop
	int j;
	for (i = 1; i < 11; i++) {
		for (j = 1; j < 11; j++) {
			printf("\n%d.%d", i, j);
		}
	}

	// Break Statement with a Loop
	for (i = 0; i < 10; i++) {
		if (i == 4) {
			printf("\nBreaking the Loop at 4");
			break;
		}
		printf("\n%d", i);
	}

	// Continue Statement with a Loop
	for (i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		printf("\n%d", i);
	}

	// Arrays
	int numberArray[] = { 25, 50, 75, 100 };

	printf("\n%d", numberArray[0]);

	numberArray[0] = 33;

	printf("\n%d", numberArray[0]);

	for (i = 0; i < 4; i++) {
		printf("\n%d", numberArray[i]);
	}


	int counterArray[10];

	for (i = 0; i < 10; i++) {
		counterArray[i] = i;
	}

	for (i = 0; i < 10; i++) {
		printf("\n%d", counterArray[i]);
	}


	// Multidimensional Array
	int matrixArray[2][3] = { {1,2,3} , {4,5,6} };

	printf("\n%d", matrixArray[0][2]);
	matrixArray[0][2] = 123;
	printf("\n%d", matrixArray[0][2]);

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n%d", matrixArray[i][j]);
		}
	}


	// String Array
	char greeting[] = "Hello World!";
	printf("\n%s", greeting);
	printf("\n%c", greeting[0]);
	greeting[0] = 'J';
	printf("\n%s", greeting);

	for (i = 0; i < 12; i++) {
		printf("\n%c", greeting[i]);
	}

	char secondGreeting[] = { 'a','b','c','d','e','f','g', 'h', 'i','j', '\0'};

	printf("\n%s", secondGreeting);

	//printf("\n%lu", sizeof(secondGreeting));

	char txt[] = "We are the so-called \"Vikings\" from the north.";

	printf("\n%s", txt);

	char text[] = "It\'s alright.";
	printf("\n%s", text);

	char backSlash[] = "This character \\ is called a backslash!";
	printf("\n%s", backSlash);

	// String Functions 
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//printf("\n%d", strlen(alphabet));

	// strlen and sizeof behave differently as sizeof includes the \0
	// sizeof returns the memory size in bytes and not the actual string length
	//printf("\n%lu", sizeof(alphabet));

	// strcmp() function can be used to compare two strings, returns 0 if they are equal and another integer if they are not equal 
	char str1[] = "Hello Worlds!";
	char str2[] = "Hello Worlds!";

	printf("\n%d", strcmp(str1, str2));

	// scanf_s() function can be used to get user input 
	//int userAge;

	//printf("\nEnter your age, please!\n");

	//scanf_s("%d", &userAge);

	//printf("\nYour age is %d", userAge);

	// Using scanf_s() to get multiple inputs 
	/*
	int age;
	int height;
	int weight;
	
	printf("\nEnter an age, height, weight and press enter: \n");

	scanf_s("%d %d %d", &age, &height, &weight);
	
	printf("\nYour age is: %d", age);
	printf("\nYour height is: %d", height);
	printf("\nYour weight is: %d", weight);
	*/

	// Using gets() to get and store a string input
	//char name[30];

	//printf("\nEnter your name: ");

	//gets(name);

	//printf("\nHello %s", name);

	// Accessing Memory Addresses with the reference operator &
	int currentYear = 2023;
	int* yearPtr = &currentYear;
	int *yearPtr1 = &currentYear;

	printf("\n%p", &currentYear);
	printf("\n%p", yearPtr);
	printf("\n%p", yearPtr1);

	// Dereferencing the variable with a pointer
	printf("\n%d", *yearPtr);

	// Accessing Array Elements with Pointers
	int digitsArray[] = { 1,2,3,4,5,6,7,8,9 };

	for (i = 0; i < 10; i++) {
		printf("\n%p", &digitsArray[i]);
	}

	// Memory Address of the name of the array is the same as the first element of the array
	printf("\n%p", digitsArray);
	printf("\n%p", &digitsArray[0]);

	// The name of an array is a pointer to the first element of the array, accessible with the * operator
	printf("\n%d", *digitsArray);

	// To access other elements of the array using the array name as a pointer, increment the pointer 
	printf("\n%d", *(digitsArray + 3));

	// A loop can also be used to access the other elements of the array using the array name as a pointer, incrementing the point with the loop
	for (i = 0; i < 9; i++) {
		printf("\n%d", *(digitsArray + i));
	}

	// It is also possible to change the values of array elements with the array name as pointers
	*(digitsArray + 8) = 123;
	printf("\n%d", *(digitsArray + 8));


	printGreeting();
	printGreeting();
	printGreeting();

	printName("Franklin", 24);

	int numberDigits[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printNumberArray(numberDigits);


	printf("\n%d", printAddition(10, 20));
	int sumOfFunction = printAddition(100, 120);
	printf("\n%d", sumOfFunction);


	return 0;
}

void printGreeting() {
	printf("\n Hello World!");
}

void printName(char name[], int age) {
	printf("\n Hello %s you are %d years old!", name, age);
}

void printNumberArray(int numbersArray[10]) {
	for (int i = 0; i < 10; i++) {
		printf("\n%d", numbersArray[i]);
	}
}

int printAddition(int num1, int num2) {
	return num1 + num2;
}