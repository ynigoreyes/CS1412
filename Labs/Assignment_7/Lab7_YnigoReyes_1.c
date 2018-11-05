#include <stdio.h>
#include <string.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 7 - Question 1, 2, 3
//
//    1) Declare variables and their pointers
//    2) 2 Matrix Sums
//    3) Check if a string is a palindrome
//
//    Function main begins program execution

/**
 * Declares 6 variables and displays their address, value and size
 */
void declareAndInitialize() {
  double dbl;
  int integer;
  char character;

  double *dbl_ptr = &dbl;
  int *integer_ptr = &integer;
  char *character_ptr = &character;

  printf("double  - - Address: %p, Value: %lf, Size: %lu\n", &dbl, dbl, sizeof(dbl));
  printf("integer - - Address: %p, Value: %d, Size: %lu\n", &integer, integer, sizeof(integer));
  printf("char    - - Address: %p, Value: %c, Size: %lu\n", &character, character, sizeof(character));

  printf("double pointer  - - Address: %p, Value: %p, Size: %lu\n", &dbl_ptr, dbl_ptr, sizeof(dbl_ptr));
  printf("integer pointer - - Address: %p, Value: %p, Size: %lu\n", &integer_ptr, integer_ptr, sizeof(integer_ptr));
  printf("char pointer    - - Address: %p, Value: %p, Size: %lu\n", &character_ptr, character_ptr, sizeof(character_ptr));
}

void matrixAddition() {
  int m, n;
  printf("Enter m and n:");
  scanf("%d\n%d", &m, &n);

  int matrix_1[m][n];
  int matrix_2[m][n];

  printf("Enter matrix_1 1:\n");
  // i represents the reference to the matrix_1 position
  for (int* i = &matrix_1[0][0]; i <= &matrix_1[m - 1][n - 1]; i++) {
    scanf("%d", i);
  }

  printf("Enter matrix 2:\n");
  // Adds the input value to the other matrix in place
  for (int* j = &matrix_2[0][0]; j <= &matrix_2[m - 1][n - 1]; j++) {
    scanf("%d", j);
  }

  printf("\nAddition Matrix: \n");
  for (int row = 0; row < m; row++) {
    for (int col = 0; col < n; col++) {
      printf("%d ", matrix_1[row][col] + matrix_2[row][col]);
    }
    printf("\n");
  }
  printf("\n");
}

/**
 * Helper function to check and see if a letter is a lowercase
 * returns 1 for true and 0 for false
 */
char toLowerCase(char target) {
  // Inbetween a and z
  if (97 <= (int)target && 122 >= (int)target)
    return target;
  else
    return (char)((int)target + 32);

}

/**
 * Helper function to check and see if target is a letter
 * returns 1 for true and 0 for false
 */
int isLetter(char target) {
  // Inbetween A and z
  return (65 <= (int)target) && (122 >= (int)target) ? 1 : 0;
}

/**
 * Determines whether or not a string is a palidrome
 * 1 means true and 0 means false
 *
 * We will be using the trailing pointers method to solve
 * in linear time
 */
int palindrome(char *string) {
  char *left_ptr = string;
  char *right_ptr = left_ptr + strlen(string) - 1;

  // Keep going until the two pointers cross
  while (left_ptr < right_ptr) {
    if (!isLetter(*left_ptr)) {
      left_ptr += 1;
      continue;
    } else if (!isLetter(*right_ptr)) {
      right_ptr -= 1;
      continue;
    }

    // Convert to lower case
    *left_ptr = toLowerCase(*left_ptr);
    *right_ptr = toLowerCase(*right_ptr);

    // Palindrome check
    if (*right_ptr != *left_ptr)
      return 0;

    // Move the pointers closer
    left_ptr += 1;
    right_ptr -= 1;
  }
  return 1;
}

int main() {
  declareAndInitialize();
  printf("\n");
  matrixAddition();

  // To intercept pressing enter
  char intercept;
  scanf("%c", &intercept);

  char string[1000];

  printf("Please enter a string: \n");
  fgets(string, 1000, stdin);

  int ans = palindrome(string);
  printf("%s", ans == 1 ? "This is a palindrome\n" : "This is not a palindrome\n");
  return 0;
}

