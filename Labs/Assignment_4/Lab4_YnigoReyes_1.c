#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 4 - Questions 1 and 2
//
//    1) Write a program to print the triangle
//    2) Create a dynamic triangle
//
//    Function main begins program execution

// Prints out a right triangle
int question_1() {
  int rows = 5;

  for (int i = 0; i <= rows; i ++) {
    int count = 0;
    // Print out n number of stars for n number of rows
    while (count != i) {
      printf("*");
      count += 1;
    }
    // Print out a new line to seperate the rows
    printf("\n");
  }
  return 1;
}

// Create a dynamic triangle based on user's input
int question_2() {
  // Get the amount of rows from the user
  int rows;
  printf("How many rows would you like to print?\n>> ");
  scanf("%d", &rows);

  // Get the needed Spaces to start off with
  int neededSpaces = rows - 1;
  // Always going to start off with printing 1 star
  int neededStars = 1;

  for (int i = 0; i < rows; i++) {
    int tempSpaces = 0;
    int tempStars = 0;

    while (tempSpaces <= neededSpaces) {
      printf(" ");
      tempSpaces++;
    }

    int flag = 0;
    // print every other space using a flag variable
    while (tempStars < neededStars) {
      if (tempStars == 0 || flag == 0) {
        printf("*");
        flag = 1;
        tempStars++;
      } else {
        printf(" ");
        flag = 0;
      }
    }

    neededSpaces -= 1;
    neededStars += 1;
    printf("\n");
  }

  return 0;
}

int main() {
  question_1();
  question_2();
}
