#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Questions 4, 5, and 6 of the Lab
//
//    4) Find whether a number is even or odd by taking an input number from the user.
//    5) Find out which number is greater among two numbers using if else statement.
//    6) Suppose there are following criteria for applying for a job.
//       Age should be more than 18 years and
//       Experience should be more than 3 years and
//       Number of projects worked should be more than 5
//       Take values from the user asking these questions and give the output to the user whether
//       they are eligible for the job or not.
//
//    Function main begins program execution

/**
 * Checks if a number is even or odd
 *
 * Check if mod 2 is 0
 *
 * If so, print even
 * Else, print odd
 */
int even_odd() {
  printf("\nQuestion 4:\n");
  int i;
  printf("Please give integer:\n>> ");
  scanf("%d", &i);
  printf("%s\n", i % 2 == 0 ? "even" : "odd"); // Checks if modulus 2 is 0
  return 1;
}

/**
 * Asks the user for 2 numbers
 *
 * Print out a message asking for a number
 * Scan `i` in
 * Print out a message asking for another number
 * Scan `j` in
 * Add i and j
 *
 * Check what number is bigger using `>`
 *
 * print accordingly
 */
int greater_num() {
  printf("\nQuestion 5:\n");
  int i, j;
  printf("Please give first integer:\n>> ");
  scanf("%d", &i);
  printf("Please give second integer:\n>> ");
  scanf("%d", &j);

  if (i > j) {
    printf("%d\n", i);
  } else {
    printf("%d\n", j);
  }

  return 1;
}

/**
 * Checks if the user does not meet the requirements
 *
 * Ask the user for their age
 * Scan the age as an integer
 *
 * Ask the user for their years of experience
 * Scan the years of experience as an integer
 *
 * Ask the user for the number of projects they have worked on
 * Scan the number of projects as an integer
 *
 * Create a conditional that will check according to the specs of the assignment
 *
 * Print eligable if the conditional passes
 */
int job_app() {
  printf("\nQuestion 6:\n");
  int age;
  int experience;
  int num_projects;

  printf("What is your age:\n>> ");
  scanf("%d", &age);
  printf("How many years of experience do you have?:\n>> ");
  scanf("%d", &experience);
  printf("How many projects have you completed?:\n>> ");
  scanf("%d", &num_projects);

  if (age > 18 && experience > 3 && num_projects > 5) {
    printf("You are eligible for this job!\n");
  } else {
    printf("You are not eligible for this job...\n");
  }
  return 1;
}

int main() {
  even_odd();
  greater_num();
  job_app();
}
