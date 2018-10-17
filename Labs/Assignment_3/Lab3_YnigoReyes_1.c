#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 3 - Question 1, 2, 3
//
//    1) Counts the digits
//    2) Finds the largest an smallest of 4 numbers
//    3) Maps numerical grades to their letter grades
//
//    Function main begins program execution

/**
 * Checks the number of digits in a number by checking its modulus of 1000/100/10
 */
int question_1() {
  signed short int num;
  printf("\nQuestion 1\n");
  printf("Enter a Number: ");

  scanf("%hu", &num);

  // Assumes that the user will always give a number with only 4 digits or less
  if (num % 1000 == 0) {
    printf("The number %hu has 4 digits", num);
  } else if (num % 100 == 0) {
    printf("The number %hu has 3 digits", num);
  } else if (num % 10 == 0) {
    printf("The number %hu has 2 digits", num);
  } else {
    printf("The number %hu has 1 digit", num);
  }

  return 0;
}

// Helper functions for question 2
int max(a, b) {
  return a > b ? a : b;
}

int min(a, b) {
  return a > b ? b : a;
}

/**
 * Finds the max of 4 numbers by spliting the
 * numbers into groups and finding local maxes
 */
int question_2() {
  int num1;
  int num2;
  int num3;
  int num4;

  int largest;
  int smallest;

  printf("\nQuestion 2\n");
  printf("Enter a 4 numbers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  largest = max(max(num1, num2), max(num3, num4)); // The max of 2 groups
  smallest = min(min(num1, num2), min(num3, num4)); // The min of 2 groups

  printf("Largest: %d", largest);
  printf("\nSmallest: %d", smallest);

  return 0;
}

/**
 * Maps the numerical grade to the equivalent letter grade
 * Uses integer division to determine what the main category is
 */
int question_3() {
  int num_grade;

  printf("\nQuestion 3\n");
  printf("Enter numerical grade: ");

  scanf("%d", &num_grade);

  printf("Letter Grade: ");

  if (num_grade > 100 || num_grade < 0) {
    printf("Error");
    return 0;
  }

  // Integer Divide to get rid of the one's place
  switch(num_grade / 10) {
    case(10):
    case(9):
      printf("A");
      break;
    case(8):
      printf("B");
      break;
    case(7):
      printf("C");
      break;
    case(6):
      printf("D");
      break;
    case(5):
    case(4):
    case(3):
    case(2):
    case(1):
    case(0):
      printf("F");
      break;
    default:
      printf("Error");
      break;

  }

  return 0;
}

int main() {
  question_1();
  question_2();
  question_3();
  return 0;
}
