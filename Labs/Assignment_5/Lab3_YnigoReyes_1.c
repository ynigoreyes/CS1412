#include <stdio.h>
#include <string.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 5 - Question 1, 2, 3
//
//    1) Sort elements in ascending order
//    2) Find all combinations of elements that will add up to a target sum
//    3) Reverses a sentence
//
//    Function main begins program execution

/**
 * Use Bubble sort to sort the array
 */
int question_1() {
  int array[100], length, i, j, swap;

  printf("Enter the value of length\n");
  scanf("%d", &length);

  printf("Enter %d numbers\n", length);

  // Creates the array
  for (i = 0; i < length; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < length - 1; i++) {
    for (j = 0 ; j < length - i - 1; j++) {
      if (array[j] > array[j+1]) {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("The numbers arranged in ascending order are given bellow\n");

  for (i = 0; i < length; i++)
     printf("%d\n", array[i]);

  return 0;
}

/**
 * Find the target sum given an array and a target
 */
int question_2() {
  int arr[5];
  printf("Enter 5 elements for the array\n");
  for(int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  int target;
  printf("Enter a target element for sum\n");
  scanf("%d", &target);

  for(int i = 0; i < 5; i++) {
    for(int j = i; j < 5; j++) {
      if (arr[i] + arr[j] == target) {
        printf("The target index is a[%d]=%d and b[%d]=%d\n", i, arr[i], j, arr[j]);
      }
    }
  }
  return 0;
}

/**
 * Saves strings into a 2D array and is read backwards at the end
 */
int question_3() {
    char s[20][20];
    int i=0;
    int position=-1;

    printf("Enter a sentence: ");
    for(i=0;;i++) {
      // Scan in words until we hit enter
      scanf("%s",s[i]);
      position++;

      // Get out of the loop when someone hits enter
      if(getchar() == '\n')
          break;
    }

    printf("Reversal of sentence: ");
    for(i=position;i>=0;i--)
        printf("%s ",s[i]);

    printf("\n");
    return 0;
}

int main() {
  question_1();
  question_2();
  question_3();
  return 0;
}
