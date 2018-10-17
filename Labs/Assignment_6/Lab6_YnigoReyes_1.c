#include <stdio.h>
#include <string.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 6 - Question 1, 2, 3
//
//    1) Swap 2 elements using pass by call and value
//    2) Selection Sort
//    3) Sum of a series x!/x
//
//    Function main begins program execution

struct swapper {
  int x;
  int y;
};

/**
 * Swap 2 elements by Value
 *
 * Swap by value means that a new integer was created.
 */
struct swapper swapByValue(int, int);

/**
 * Swap 2 elements by Reference
 *
 * Swap by reference means that we switch the pointers
 * and never actually create a new integer
 */
void swapByReference(int*, int*);

/**
 * This will change the array by reference
 */
void selectionSort(int, int*, int);

/**
 * Recursive factorial implementation
 */
int factorial(int);

int main() {
  // Question 1
  int x;
  int y;
  printf("Please provide x and y: ");
  scanf("%d %d", &x, &y);
  // I use a struct to return one value
  struct swapper swappedValues = swapByValue(x, y);
  printf("Swapped by value: x = %d y = %d\n", swappedValues.x, swappedValues.y);

  swapByReference(&x, &y);
  printf("Swapped by reference: x = %d y = %d\n", x, y);

  // Question 2
  int size;
  printf("How big of an array would you like to input? ");
  scanf("%d", &size);
  // Dynamically set the size
  int arr[size];
  printf("Please provide an array of numbers");
  for (int i = 0; i < size; i++)
  {
    printf("\nEnter an integer: ");
    scanf("%d", &arr[i]);
  }

  selectionSort(size, arr, 0);

  // print out results
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Question 3
  int num;
  int sum = 0;
  printf("What is the number you want the series of?: ");
  scanf("%d", &num);
  for(int i = 1; i <= num; i++) {
    int temp = (factorial(i) / i);
    sum += temp;
  }

  printf("%d\n", sum);

  return 0;
}

struct swapper swapByValue(int x, int y) {
  struct swapper Swapper;
  int temp = y;
  Swapper.y = x;
  Swapper.x = temp;
  return Swapper;
}

void swapByReference(int *x, int *y) {
  int temp = *x; // save the value of x
  *x = *y; // Value of y gets saved into value of x
  *y = temp; // Value saved from before gets saved into y
}

void selectionSort(int size, int *arr, int index) {
  if (size == index) {
    return;
  } else {
    int largestIndex = 0;
    int largestValue = 0;

    // Find the largest value in the array
    for(int i = 0; i < size - index; i++) {
      if (arr[i] > largestValue) {
        largestIndex = i;
        largestValue = arr[i];
      }
    }

    // Put that value at the end of the array
    int temp = arr[size - 1 - index];
    arr[size - 1 - index] = arr[largestIndex];
    arr[largestIndex] = temp;

    selectionSort(size, arr, index + 1);
  }
}

int factorial(int num) {
  if (num < 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

