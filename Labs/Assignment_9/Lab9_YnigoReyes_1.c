#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 100
#define NUM_MESSAGES 100

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 9 - Project 1
//
//    Cryptography
//
//    Function main begins program execution

int main() {
  char ** messages = (char **)malloc(sizeof(char *)*NUM_MESSAGES);
  for(int i = 0; i < NUM_MESSAGES; i++){
    messages[i] = (char *)malloc(sizeof(char) * MAX_LENGTH);
  }
  char choice;

  char message[100];
  char *newMessage;

  char firstPart[50];
  char secondPart[50];

  // Get user input
  int i = 0;
  do {
    printf("Enter a string: ");
    gets(message);
    int j = 0, k = 0;
    // Go through and sort out the elements by index
    for(int i = 0; i < strlen(message); i++) {
      // even
      if (((i + 1) % 2) == 0) {
        firstPart[j] = message[i];
        j++;
      }
      // odd
      else {
        secondPart[k] = message[i];
        k++;
      }
    }

    k = 0;
    j = 0;

    newMessage = strcat(firstPart, secondPart);
    printf("%s\n", newMessage);
    // TODO: Save into Array for printing in order
    messages[i] = newMessage;
    printf("%s %s\n", newMessage, messages[i]);
    i++;
    // reset
    newMessage = "";
    memset(firstPart, 0, sizeof(firstPart));
    memset(secondPart, 0, sizeof(secondPart));

    printf("Would you like to continue (Y/N) ? ");
    scanf("%c", &choice);
    getchar();
    
    for(int pos = 0; pos < i; pos++) {
      printf("%s\n", messages[pos]);
    }
  } while(choice == 'Y' || choice == 'y');
  

  return 0;
}

