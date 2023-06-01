#include <stdio.h>
#include <stdbool.h>

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
	printf("\n%d", sizeof(comparison1));

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
	int array[] = { 25, 50, 75, 100 };

	printf("\n%d", array);



	return 0;
}