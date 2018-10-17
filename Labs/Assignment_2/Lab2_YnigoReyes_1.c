#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Questions 1, 2, and 3 of the Lab
//
//    1) Find the sum of two integers by taking inputs from the user.
//    2) Find the area and perimeter of a circle by taking radius as input from the user.
//       (You need to define the value of Pi in your program)
//    3) Write a program to find the ASCII value of any character that is entered in the keyboard
//       by asking user for the input
//
//    Function main begins program execution

/**
 * Asks the user for 2 numbers
 *
 * Print out a message asking for a number
 * Scan `i` in
 * Print out a message asking for another number
 * Scan `j` in
 * Add i and j
 * print out the result
 */
int sum(void) {
  printf("\nQuestion 1:\n");
  int i, j;
  printf("Please give first integer:\n>> ");
  scanf("%d", &i);
  printf("Please give second integer:\n>> ");
  scanf("%d", &j);

  printf("%d\n", i + j);
  return 1;
}

/**
 * Ask the user for a radius and provide a area and circumference
 *
 * Print question
 * Scan in the radius as a float
 *
 * Print out the area and circumerence using their respective equations
 */
int circles() {
  printf("\nQuestion 2:\n");
  float pi = 3.14;
  float radius;
  printf("Please provide a radius as an integer:\n>> ");
  scanf("%f", &radius);
  printf("%f is the area\n", pi * radius * radius);
  printf("%f is the circumference\n", 2.0 * pi * radius);
  return 1;
}

/**
 * Converts Character to ASCII
 *
 * Scan in a character
 * Let compiler convert character to ASCII
 */
int ascii() {
  printf("\nQuestion 3:\n");
  char candidate;
  scanf("%c", &candidate); // Intercept the enter key press
  printf("Character to convert:\n>> ");
  scanf("%c", &candidate);

  printf("%d\n", candidate);
  return 1;
}

int main() {
  sum();
  circles();
  ascii();
}
