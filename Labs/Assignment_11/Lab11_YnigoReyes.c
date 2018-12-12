#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 11
//
//    1. Read/Write from a file
//    2. Count the stuff in the file
//
//    Function main begins program execution

typedef struct {
 char ID[MAX];
 char firstName[MAX];
 char lastName[MAX];
} Student;

void readFile(char[MAX]);
void writeFile(char[MAX]);
void countFile(char[MAX]);

int main() {
  char filename[MAX];
  printf("Enter a filename :");
  scanf("%s", filename);

  writeFile(filename);
  readFile(filename);
  countFile(filename);
  return 0;
}

void countFile(char name[MAX]) {
  FILE *file;
  char *code;
  int c;

  int lineCount = 0;
  int charCount = 0;
  int wordCount = 0;

  if ((file = fopen(name,"r")) == NULL){
    printf("Error! opening file");

    // Program exits if the file pointer returns NULL.
    exit(1);
  }

  code = malloc(MAX);
  char curr;
  while ((c = fgetc(file)) != EOF)
  {
    curr = (char) c;
    if (curr == ' ') wordCount++;
    if (curr == '\n') {
      lineCount++;
      wordCount++;
    }
    charCount++;
  }

  printf("Lines : %d\n", lineCount);
  printf("Words : %d\n", wordCount);
  printf("Characters : %d\n", charCount);
}

void readFile(char name[MAX]) {
  char content[MAX];
  FILE *read_file;

  if ((read_file = fopen(name,"r")) == NULL){
    printf("Error! opening file");

    // Program exits if the file pointer returns NULL.
    exit(1);
  }

  fscanf(read_file,"%s", content);
  int c;
  char curr;
  printf("Contents: ");
  while ((c = fgetc(read_file)) != EOF)
  {
    curr = (char) c;
    printf("%c", curr);
  }

  fclose(read_file);
}

void writeFile(char name[MAX]) {
  FILE *file;
  Student student;
  file = fopen(name, "a+");

  if (file == NULL) {
    printf("Error opening file");
    exit(1);
  }

  printf("Provide your ID: ");
  scanf("%s", student.ID);
  fprintf(file, "%s\n", student.ID);

  printf("Provide your first name: ");
  scanf("%s", student.firstName);
  fprintf(file, "%s\n", student.firstName);

  printf("Provide your last name: ");
  scanf("%s", student.lastName);
  fprintf(file, "%s\n", student.lastName);

  fclose(file);
}
