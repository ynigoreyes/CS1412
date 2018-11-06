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

void bubbleSort(char arr[][MAX_LENGTH], int n) {
}

int main() {
  printf("How many strings would you like to encrypt?\n");
  int maxAmt;
  scanf("%d", &maxAmt);
  getchar();

  char messages[maxAmt][MAX_LENGTH];
  char choice;

  char message[100];
  char *newMessage;

  // Even and Odd
  char firstPart[50];
  char secondPart[50];
  newMessage = "";
  memset(firstPart, 0, sizeof(firstPart));
  memset(secondPart, 0, sizeof(secondPart));

  // Get user input
  int stringCount = 0; // How many strings we have saved
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

    firstPart[k+1] = '\0';
    secondPart[j+1] = '\0';

    k = 0;
    j = 0;

    newMessage = strcat(firstPart, secondPart);
    printf("Your encrypted message is: %s\n", newMessage);
    strcpy(messages[stringCount], newMessage);

    stringCount++;
    // reset
    newMessage = "";
    memset(firstPart, 0, sizeof(firstPart));
    memset(secondPart, 0, sizeof(secondPart));

    printf("Would you like to continue (Y/N) ? ");
    scanf("%c", &choice);
    getchar();
  } while(choice == 'Y' || choice == 'y');

  // Go through the saved strings and decode in place
  for(int pos = 0; pos < stringCount; pos++){
    char *oddChars = (char *)malloc(sizeof(char) * strlen(messages[pos]));
    char *evenChars = (char *)malloc(sizeof(char) * strlen(messages[pos]));

    // Even chars
    for(int sop = 0; sop < (strlen(messages[pos]) / 2); sop++) {
      evenChars[sop] = messages[pos][sop];
    }

    // Odd Chars
    int temp = 0;
    for(int sop = (strlen(messages[pos]) / 2); sop < strlen(messages[pos]); sop++) {
      oddChars[temp] = messages[pos][sop];
      temp++;
    }

    char decrypted[MAX_LENGTH];
    int temp_2 = 0;
    for(int i = 0; i < strlen(oddChars); i++) {
      decrypted[temp_2] = oddChars[i];
      temp_2++;
      decrypted[temp_2] = evenChars[i];
      temp_2++;
    }
    decrypted[temp_2 + 1] = '\0';
    strcpy(messages[pos], decrypted);
  }

  // Sort the decrypted messages using bubble sort
  char temp[MAX_LENGTH];

  // Sorting strings using bubble sort
  for (int j=0; j<maxAmt-1; j++) {
    for (int i=j+1; i<maxAmt; i++) {
      if (strcmp(messages[j], messages[i]) > 0) {
        strcpy(temp, messages[j]);
        strcpy(messages[j], messages[i]);
        strcpy(messages[i], temp);
      }
    }
  }

  for(int i = 0; i < maxAmt; i++)
    printf("%s\n", messages[i]);

  return 0;
}

