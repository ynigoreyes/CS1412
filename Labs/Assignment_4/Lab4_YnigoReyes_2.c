#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 4 - Questions 3 and 4
//
//    3) Print a Calendar
//    4) Print the Fibonacci series up to a number
//
//    Function main begins program execution

int question_3() {
  // Ask for input
  int days;
  int startingDay;
  printf("Enter number of days in month:\n>> ");
  scanf("%d", &days);
  printf("Enter starting day of the week:\n>> ");
  scanf("%d", &startingDay);

  int spacesNeeded = startingDay - 1;
  int currentDay = 1;
  int rowPosition = 0;

  while (currentDay <= days) {
    // Prints out the spaces in the beginning
    if (spacesNeeded != 0) {
      printf("  ");
      spacesNeeded -= 1;
    // Prints out single digit numbers with a 0 in the front
    // to keep spacing
    } else if (currentDay < 10) {
      printf("0%d", currentDay);
      currentDay++;
    // Print out all the normal numbers
    } else {
      printf("%d", currentDay);
      currentDay++;
    }

    // Move up in the row
    rowPosition++;
    printf(" ");

    // At the end of the week, print a new line
    if (rowPosition == 7) {
      printf("\n");
      rowPosition = 0;
    }
  }
  return 0;
}

// Fibonacci - f(0) = 1 f(1) = 1
int fib(int num) {
  int ans = 0;
  if (num < 2) {
    return 1;
  }
  else {
    // Definition of fibonacci
    ans = (fib(num - 1) + fib(num - 2));
  }
  return ans;
}

// Main function to run the fibonacci
int question_4() {
  int target;
  printf("What number would you like to find the fibonacci sequence for?\n>> ");
  scanf("%d", &target);

  int i = 0;
  printf("Here is the sequence from 0 to %d\n", target);
  while(i < target) {
    printf("%d ", fib(i));
    i++;
  }
  return 0;
}

int main() {
  question_3();
  question_4();
}
